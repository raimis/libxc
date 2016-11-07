cmake_policy(SET CMP0048 NEW)  # project_VERSION* variables populated from project(... VERSION x.x.x) string
project(Libxc 
        VERSION 3.0.0
        LANGUAGES C)
set(Libxc_AUTHORS      "Miguel A.L. Marques")
set(Libxc_DESCRIPTION  "Exchange-correlation functionals for density-functional theory")
set(Libxc_EMAIL        "libxc@tddft.org")
set(Libxc_URL          "http://www.tddft.org/programs/Libxc")
set(Libxc_LICENSE      "GNU Lesser General Public License, version 3")

cmake_minimum_required(VERSION 3.0)
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

################################### Options ####################################
include(Psi4Macros)
option_with_default(CMAKE_BUILD_TYPE "Build type" Release)
option_with_print(BUILD_SHARED_LIBS "Build final library as shared, not static" OFF)
option_with_print(BUILD_TESTING "Compile the testing infrastructure" ON)
option_with_default(BUILD_FPIC "Libraries will be compiled with position independent code" ON)
if(${BUILD_SHARED_LIBS} AND NOT ${BUILD_FPIC})
    message(FATAL_ERROR "BUILD_SHARED_LIBS ON and BUILD_FPIC OFF are incompatible, as shared library requires position independent code")
endif()
#option_with_print(ENABLE_GENERIC "Enable mostly static linking in shared library" OFF)
#option_with_flags(ENABLE_XHOST "Enable processor-specific optimization" ON
#                  "-xHost" "-march=native")
option_with_print(HAVE_FORTRAN "Build Fortran interface" OFF)  # todo add_def HAVE_FORTRAN
# CODE_COVERAGE should be tested and probably propagated to external projects
#option_with_flags(ENABLE_CODE_COVERAGE "Enables details on code coverage" OFF
#                  "-ftest-coverage")

######################### Process & Validate Options ###########################
include(autocmake_safeguards)
#include(autocmake_static_library)

################################# Main Project #################################

set(PN ${PROJECT_NAME})

# <<<  Build  >>>

# repurpose xc_version from Make for CMake
set(VERSION ${PROJECT_VERSION})
set(XC_MAJOR_VERSION ${PROJECT_VERSION_MAJOR})
set(XC_MINOR_VERSION ${PROJECT_VERSION_MINOR})
set(XC_MICRO_VERSION ${PROJECT_VERSION_PATCH})
configure_file(xc_version.h.in xc_version.h @ONLY)

# create dummy config.h
configure_file(config.h.cmake.in config.h @ONLY)

set(raw_sources_list bessel.c            gga_x_airy.c      gga_x_optx.c             lda_c_1d_loos.c     mgga_xc_otpss_d.c
                     expint_e1.c         gga_x_ak13.c      gga_x_pbea.c             lda_c_2d_amgb.c     mgga_xc_zlp.c
                     func_info.c         gga_x_am05.c      gga_x_pbe.c              lda_c_2d_prm.c      mgga_x_gvt4.c
                     functionals.c       gga_x_b86.c       gga_x_pw86.c             lda_c_gombas.c      mgga_x_lta.c
                     gga_x_b88.c         gga_x_pw91.c      lda_c_hl.c               mgga_x_m05.c                       # genwiki.c
                     gga.c               gga_x_bayesian.c  gga_x_q2d.c              lda_c_ml1.c         mgga_x_m06l.c
                     gga_c_am05.c        gga_x_bpccac.c    gga_x_rpbe.c             lda_c_pw.c          mgga_x_m08.c
                     gga_c_ft97.c        gga_x_c09x.c      gga_x_sfat.c             lda_c_pz.c          mgga_x_mbeef.c
                     gga_c_lm.c          gga_xc_1w.c       gga_x_sogga11.c          lda_c_rc04.c        mgga_x_mk00.c
                     gga_c_lyp.c         gga_x_cap.c       gga_x_ssb_sw.c           lda_c_rpa.c         mgga_x_mn12.c
                     gga_c_op.c          gga_xc_b97.c      gga_x_vmt.c              lda_c_vwn.c         mgga_x_ms.c
                     gga_c_optc.c        gga_xc_edf1.c     gga_x_wc.c               lda_c_wigner.c      mgga_x_mvs.c
                     gga_c_p86.c         gga_xc_oblyp_d.c  gga_x_wpbeh.c            lda_k_tf.c          mgga_x_pkzb.c
                     gga_c_pbe.c         gga_xc_th.c       hyb_gga_xc_b1wc.c        lda_x_1d.c          mgga_x_scan.c
                     gga_c_pw91.c        gga_xc_vv10.c     hyb_gga_xc_b3lyp.c       lda_x_2d.c          mgga_x_tau_hcth.c
                     gga_c_q2d.c         gga_x_dk87.c      hyb_gga_xc_cam_b3lyp.c   lda_x.c             mgga_x_tpss.c
                     gga_c_sogga11.c     gga_x_ev93.c      hyb_gga_xc_camy_b3lyp.c  lda_xc_ksdt.c       mix_func.c
                     gga_c_tca.c         gga_x_ft97.c      hyb_gga_xc_camy_blyp.c   lda_xc_teter93.c    references.c
                     gga_c_wi.c          gga_x_g96.c       hyb_gga_xc_edf2.c        lda_xc_zlp.c        special_functions.c
                     gga_c_wl.c          gga_x_hcth_a.c    hyb_gga_xc_hse.c         mgga.c              stoll.c
                     gga_k_dk.c          gga_x_herman.c    hyb_gga_xc_lcy_blyp.c    mgga_c_bc95.c       util.c
                     gga_k_meyer.c       gga_x_hjs.c       hyb_gga_xc_lcy_pbe.c     mgga_c_cc06.c       version.c
                     gga_k_ol1.c         gga_x_htbs.c      hyb_gga_xc_o3lyp.c       mgga_c_cs.c         work_gga_c.c
                     gga_k_ol2.c         gga_x_ityh.c      hyb_gga_xc_pbeh.c        mgga_c_m08.c        #work_gga_x.c
                     gga_k_pearson.c     gga_x_kt.c        hyb_mgga_xc_m05.c        mgga_c_pkzb.c       #work_lda.c
                     gga_k_tflw.c        gga_x_lb.c        hyb_mgga_xc_tpssh.c      mgga_c_scan.c       #work_mgga_c.c
                     gga_x_2d_b86.c      gga_x_lg93.c      hyb_mgga_x_mvsh.c        mgga_c_vsxc.c       #work_mgga_x.c
                     gga_x_2d_b86_mgc.c  gga_x_lv_rpw86.c  integrate.c              mgga_x_2d_prhg07.c  xc_f.c
                     gga_x_2d_b88.c      gga_x_mpbe.c      lda.c                    mgga_x_br89.c       #xc-info.c
                     gga_x_2d_pbe.c      gga_x_n12.c       lda_c_1d_csc.c           mgga_xc_b97mv.c)

set(src_prefix "src/")
string(REGEX REPLACE "([^;]+)" "${src_prefix}\\1" sources_list "${raw_sources_list}")

set(sources_list_need_extra_headers ${src_prefix}work_gga_x.c
                                    ${src_prefix}work_lda.c
                                    ${src_prefix}work_mgga_c.c
                                    ${src_prefix}work_mgga_x.c)
set(zxcv ${PROJECT_BINARY_DIR}/${src_prefix}work_gga_x.c
         ${PROJECT_BINARY_DIR}/${src_prefix}work_lda.c
         ${PROJECT_BINARY_DIR}/${src_prefix}work_mgga_c.c
         ${PROJECT_BINARY_DIR}/${src_prefix}work_mgga_x.c)

foreach(_src ${sources_list_need_extra_headers})
    file(READ ${_src} _src_contents)
    #string(CONCAT _headered_src "#include <util.h>\n" "${_src_contents}")
    string(CONCAT _headered_src "#include <stdio.h>\n#include \"util.h\"\n" "${_src_contents}")
    file(WRITE ${PROJECT_BINARY_DIR}/${_src} "${_headered_src}")
endforeach()

add_library(xc ${sources_list} ${zxcv}) #${sources_list_need_extra_headers})

    # run get_funcs.pl to generate headers for xc inclusion
set(gen_dir "${PROJECT_BINARY_DIR}/gen_funcidx")
execute_process(
    COMMAND ${CMAKE_COMMAND} -E make_directory ${gen_dir}
    COMMAND ${PERL_EXECUTABLE} ${src_prefix}/get_funcs.pl ${src_prefix} ${gen_dir}
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})

add_executable(xc-info "${src_prefix}/xc-info.c")
target_link_libraries(xc-info xc)

include_directories(${PROJECT_SOURCE_DIR}/${src_prefix}  # for xc.h, util.h, xc_config.h
                    ${PROJECT_BINARY_DIR}  # for xc_version.h, config.h
                    ${gen_dir})  # for xc_funcs.h

if(BUILD_TESTING)
    enable_testing ()
    add_subdirectory(testsuite)
endif()

