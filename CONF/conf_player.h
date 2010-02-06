#ifndef CONF_PLAYER_H_
#define CONF_PLAYER_H_

#include "board.h"

#define PBA_HZ						FOSC0

// Only for debugging on EVK1101.
#define STDIO_USART					(&AVR32_USART1)
#define STDIO_USART_IRQ				AVR32_USART1_IRQ
#define STDIO_USART_BAUDRATE		57600
#if BOARD==EVK1101
#	define STDIO_USART_RX_PIN			AVR32_USART1_RXD_0_0_PIN
#	define STDIO_USART_RX_FUNCTION		AVR32_USART1_RXD_0_0_FUNCTION
#	define STDIO_USART_TX_PIN			AVR32_USART1_TXD_0_0_PIN
#	define STDIO_USART_TX_FUNCTION		AVR32_USART1_TXD_0_0_FUNCTION
#endif

#define INBUF_SIZE					128*8
#define OUTBUF_SIZE					128*8 // Must be multiplum of 128.

#endif /*CONF_PLAYER_H_*/
