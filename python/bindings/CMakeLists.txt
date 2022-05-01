# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#
GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )

include(GrPybind)

########################################################################
# Python Bindings
########################################################################
list(APPEND hrpt_python_files
    fengyun_diff_decoder_python.cc
    metop_cadu_deframer_python.cc
    noaa_hrpt_decoder_python.cc
    noaa_hrpt_deframer_python.cc
    noaa_hrpt_pll_cf_python.cc
    viterbi_fengyun_decoder_python.cc
    viterbi_metop_decoder_python.cc
    python_bindings.cc)

GR_PYBIND_MAKE_OOT(hrpt 
   ../..
   gr::hrpt
   "${hrpt_python_files}")

install(TARGETS hrpt_python DESTINATION ${GR_PYTHON_DIR}/hrpt COMPONENT pythonapi)
