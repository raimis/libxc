(*
 Copyright (C) 2017 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*)

(* type: work_gga_x *)

g96_c1 := 1/137:

f_g96  := x->
  1 + g96_c1/X_FACTOR_C * x^(3/2):

f  := x -> f_g96(x):
