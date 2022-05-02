/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(noaa_hrpt_pll_cf.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(abec322ff74001e621f55f9e29f0e9b6)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <hrpt/noaa_hrpt_pll_cf.h>
// pydoc.h is automatically generated in the build directory
#include <noaa_hrpt_pll_cf_pydoc.h>

void bind_noaa_hrpt_pll_cf(py::module& m)
{

    using noaa_pll_cf    = gr::hrpt::noaa_hrpt_pll_cf;


    py::class_<noaa_pll_cf,
        std::shared_ptr<noaa_pll_cf>>(m, "noaa_pll_cf", D(noaa_pll_cf))

        .def(py::init(&noaa_pll_cf::make),
           py::arg("alpha"),
           py::arg("beta"),
           py::arg("max_offset"),
           D(noaa_pll_cf,make)
        )
        



        ;




}








