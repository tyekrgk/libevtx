/*
 * Binary XML template value functions
 *
 * Copyright (c) 2011-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEVTX_BINARY_XML_TEMPLATE_VALUE_H )
#define _LIBEVTX_BINARY_XML_TEMPLATE_VALUE_H

#include <common.h>
#include <types.h>

#include "libevtx_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libevtx_binary_xml_template_value libevtx_binary_xml_template_value_t;

struct libevtx_binary_xml_template_value
{
	/* The data
	 */
	const uint8_t *data;

	/* The data size
	 */
	uint16_t data_size;

	/* The chunk data offset
	 */
	size_t chunk_data_offset;

	/* The type
	 */
	uint8_t type;
};

int libevtx_binary_xml_template_value_initialize(
     libevtx_binary_xml_template_value_t **binary_xml_template_value,
     libcerror_error_t **error );

int libevtx_binary_xml_template_value_free(
     libevtx_binary_xml_template_value_t **binary_xml_template_value,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif
