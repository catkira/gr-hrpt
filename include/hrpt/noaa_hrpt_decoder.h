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

#ifndef INCLUDED_NOAA_HRPT_DECODER_H
#define INCLUDED_NOAA_HRPT_DECODER_H

#include <hrpt/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace hrpt {

    /*!
     * \brief NOAA HRPT Decoder
     * \ingroup noaa_blk
     */
    class HRPT_API noaa_hrpt_decoder : virtual public sync_block
    {
    public:
      // gr::hrpt::noaa_hrpt_decoder::sptr
      typedef std::shared_ptr<noaa_hrpt_decoder> sptr;

      /*!
       * \brief Make NOAA HRPT Decoder
       */
      static sptr make(bool verbose, bool output_files);
    };

  } /* namespace hrpt */
} /* namespace gr */

#endif /* INCLUDED_NOAA_HRPT_DECODER_H */
