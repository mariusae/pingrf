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

#include "stdint.h"
#include "intel_hex.h"

uint8_t hex4(char c) {
  // Converts a character representation of a hexadecimal nibble
  // into a uint8. If the nibble is invalid it will return 255.
  if (c >= '0' && c <= '9')
    return (uint8_t)(c - '0');
  else if (c >= 'A' && c <= 'F')
    return 10 + (uint8_t)(c - 'A');
  else if (c >= 'a' && c <= 'f')
    return 10 + (uint8_t)(c - 'a');
  else
    return HEX_INVALID;
}

uint8_t hex8(char s[]) {
  // Converts a string representation of a hexadecimal byte into a uint8.
  // TODO: handle the case of hex4 failing.
  return hex4(s[1]) + 16*hex4(s[0]);
}

uint16_t hex16(char s[]) {
  // Converts a string representation of a 16-bit hexadecimal word into a uint16.
  // TODO: handle the case of hex8 failing.
  return hex8(&s[2]) + 256*(uint16_t)hex8(&s[0]);
}

char to_hex4_ascii(uint8_t x) {
  if (x <= 0x9)
    return '0' + x;
  if (x <= 0xF)
    return 'A' + (x - 0xA);
  return '!';
}

void to_hex8_ascii(char buff[], uint8_t x) {
  buff[1] = to_hex4_ascii(x & 0xF);
  buff[0] = to_hex4_ascii((x>>4) & 0xF);  
}

void to_hex16_ascii(char buff[], uint16_t x) {
  to_hex8_ascii(&buff[2], x & 0xFF);
  to_hex8_ascii(&buff[0], (x>>8) & 0xFF);  
}
