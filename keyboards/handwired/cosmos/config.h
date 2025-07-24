/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */
#define EE_HANDS

/* RP2040-specific serial configuration */
// #define SERIAL_PIO_USE_PIO1 // Use PIO1 peripheral
// #define SERIAL_USART_SPEED 921600 // Baud rate for RP2040
#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6 }
#define MATRIX_COL_PINS { GP29, GP28, GP27, GP26, GP18, GP20, GP19 }

#define MATRIX_COL_PINS_RIGHT { GP19, GP20, GP18, GP26, GP27, GP28, GP29 }
// If you want full-duplex serial communication with separate TX and RX pins:
// Uncomment and configure the following lines:

// #define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode
// #define SERIAL_USART_TX_PIN GP0    // USART TX pin
// #define SERIAL_USART_RX_PIN GP1    // USART RX pin
// #define SERIAL_USART_DRIVER SD1    // USART driver (default: SD1)
// #define SERIAL_USART_TX_PAL_MODE 7 // Pin alternate function mode
// #define SERIAL_USART_RX_PAL_MODE 7 // Pin alternate function mode
// #define SERIAL_USART_TIMEOUT 20    // USART timeout in milliseconds
