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

#ifndef INCLUDED_NOAA_HRPT_PLL_CF_H
#define INCLUDED_NOAA_HRPT_PLL_CF_H

#include <hrpt/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace hrpt {

    /*!
     * \brief NOAA HRPT PLL
     * \ingroup noaa_blk
     */
    class HRPT_API noaa_hrpt_pll_cf : virtual public sync_block
    {
    public:
      // gr::hrpt::noaa_hrpt_pll_cf::sptr
      typedef std::shared_ptr<noaa_hrpt_pll_cf> sptr;

      static sptr make(float alpha, float beta, float max_offset);
      
      virtual int work(int noutput_items,
		       gr_vector_const_void_star &input_items,
		       gr_vector_void_star &output_items);      

      virtual void set_alpha(float alpha) = 0;
      virtual void set_beta(float beta) = 0;
      virtual void set_max_offset(float max_offset) = 0;
    };

  } /* namespace hrpt */
} /* namespace gr */

#endif /* INCLUDED_NOAA_HRPT_PLL_CF_H */
