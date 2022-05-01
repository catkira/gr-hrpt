/* -*- c++ -*- */
/*
 * Copyright 2009,2012 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_NOAA_HRPT_DEFRAMER_H
#define INCLUDED_NOAA_HRPT_DEFRAMER_H

#include <hrpt/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace hrpt {

    /*!
     * \brief NOAA HRPT Deframer
     * \ingroup noaa_blk
     */
    class HRPT_API noaa_hrpt_deframer : virtual public block
    {
    public:
      // gr::hrpt::noaa_hrpt_deframer::sptr
      typedef std::shared_ptr<noaa_hrpt_deframer> sptr;

      /*!
       * \brief Make NOAA HRPT Deframer
       */
      static sptr make();
    };

  } /* namespace hrpt */
} /* namespace gr */

#endif /* INCLUDED_NOAA_HRPT_DEFRAMER_H */
