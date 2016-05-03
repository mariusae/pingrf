/*
 * CC Bootloader - Hardware Abstraction Layer 
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

#include "cc1111.h"

void setup_led() {
  // Setup LED and turn it off
  P1DIR |= 2;
  P1_1 = 0;
}

void led_on() {
  P1_1 = 1;
}

void led_off() {
  P1_1 = 0;
}

void usb_up() {
  // Bring up the USB link
	P1DIR |= 1;
	P1_0 = 1;
}

void usb_down() {
  // Bring down the USB link
  P1_0 = 0;
  P1DIR &= ~1;
}
