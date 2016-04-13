/*
 * CC Bootloader - Intel HEX file format functions 
 *
 * Fergus Noble (c) 2011
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
 */

#ifndef _INTEL_HEX_H_
#define _INTEL_HEX_H_

#define HEX_INVALID 0xFF

uint8_t hex4(char c);
uint8_t hex8(char s[]);
uint16_t hex16(char s[]);
char to_hex4_ascii(uint8_t x);
void to_hex8_ascii(char buff[], uint8_t x);
void to_hex16_ascii(char buff[], uint16_t x);

#endif // _INTEL_HEX_H_
