/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <pybind11/pybind11.h>

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <numpy/arrayobject.h>

namespace py = pybind11;

// Headers for binding functions
/**************************************/
// The following comment block is used for
// gr_modtool to insert function prototypes
// Please do not delete
/**************************************/
// BINDING_FUNCTION_PROTOTYPES(
    void bind_fengyun_diff_decoder_python(py::module& m);
    void bind_metop_cadu_deframer_python(py::module& m);
    void bind_noaa_hrpt_decoder_python(py::module& m);
    void bind_noaa_hrpt_deframer_python(py::module& m);
    void bind_noaa_hrpt_pll_cf_python(py::module& m);
    void bind_viterbi_fengyun_decoder_python(py::module& m);
    void bind_viterbi_metop_decoder_python(py::module& m);
// ) END BINDING_FUNCTION_PROTOTYPES


// We need this hack because import_array() returns NULL
// for newer Python versions.
// This function is also necessary because it ensures access to the C API
// and removes a warning.
void* init_numpy()
{
    import_array();
    return NULL;
}

PYBIND11_MODULE(hrpt_python, m)
{
    // Initialize the numpy C API
    // (otherwise we will see segmentation faults)
    init_numpy();

    // Allow access to base block methods
    py::module::import("gnuradio.gr");

    /**************************************/
    // The following comment block is used for
    // gr_modtool to insert binding function calls
    // Please do not delete
    /**************************************/
    // BINDING_FUNCTION_CALLS(
    bind_fengyun_diff_decoder_python(m);
    bind_metop_cadu_deframer_python(m);
    bind_noaa_hrpt_decoder_python(m);    
    bind_noaa_hrpt_deframer_python(m);    
    bind_noaa_hrpt_pll_cf_python(m);    
    bind_viterbi_fengyun_decoder_python(m);    
    bind_viterbi_metop_decoder_python(m);    
    // ) END BINDING_FUNCTION_CALLS
}