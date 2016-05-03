/*-------------------------------------------------------------------------
   Register Declarations for the ChipCon CC1111 Processor Range

   Copyright © 2008 Keith Packard <keithp@keithp.com>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.

   Adapted from the Cygnal C8051F12x config file which is:

   Copyright (C) 2003 - Maarten Brock, sourceforge.brock@dse.nl

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
-------------------------------------------------------------------------*/

#ifndef _CC1111_H_
#define _CC1111_H_
#include <cc1110.h>
#include <stdint.h>

__sfr __at 0xA8 IEN0;		/* Interrupt Enable 0 Register */

__sbit __at 0xA8 RFTXRXIE;	/* RF TX/RX done interrupt enable */
__sbit __at 0xA9 ADCIE;		/* ADC interrupt enable */
__sbit __at 0xAA URX0IE;		/* USART0 RX interrupt enable */
__sbit __at 0xAB URX1IE;		/* USART1 RX interrupt enable (shared with I2S RX) */
__sbit __at 0xAB I2SRXIE;		/* I2S RX interrupt enable (shared with USART1 RX) */
__sbit __at 0xAC ENCIE;		/* AES encryption/decryption interrupt enable */
__sbit __at 0xAD STIE;		/* Sleep Timer interrupt enable */
__sbit __at 0xAF EA;		/* Enable All */

#define IEN0_EA			(1 << 7)
#define IEN0_STIE		(1 << 5)
#define IEN0_ENCIE		(1 << 4)
#define IEN0_URX1IE		(1 << 3)
#define IEN0_I2SRXIE		(1 << 3)
#define IEN0_URX0IE		(1 << 2)
#define IEN0_ADCIE		(1 << 1)
#define IEN0_RFTXRXIE		(1 << 0)

__sfr __at 0xB8 IEN1;		/* Interrupt Enable 1 Register */

#define IEN1_P0IE		(1 << 5)	/* Port 0 interrupt enable */
#define IEN1_T4IE		(1 << 4)	/* Timer 4 interrupt enable */
#define IEN1_T3IE		(1 << 3)	/* Timer 3 interrupt enable */
#define IEN1_T2IE		(1 << 2)	/* Timer 2 interrupt enable */
#define IEN1_T1IE		(1 << 1)	/* Timer 1 interrupt enable */
#define IEN1_DMAIE		(1 << 0)	/* DMA transfer interrupt enable */

/* IEN2 */
__sfr __at 0x9A IEN2;		/* Interrupt Enable 2 Register */

#define IEN2_WDTIE		(1 << 5)	/* Watchdog timer interrupt enable */
#define IEN2_P1IE		(1 << 4)	/* Port 1 interrupt enable */
#define IEN2_UTX1IE		(1 << 3)	/* USART1 TX interrupt enable */
#define IEN2_I2STXIE		(1 << 3)	/* I2S TX interrupt enable */
#define IEN2_UTX0IE		(1 << 2)	/* USART0 TX interrupt enable */
#define IEN2_P2IE		(1 << 1)	/* Port 2 interrupt enable */
#define IEN2_USBIE		(1 << 1)	/* USB interrupt enable */
#define IEN2_RFIE		(1 << 0)	/* RF general interrupt enable */

/* CLKCON 0xC6 */
__sfr __at 0xC6 CLKCON;		/* Clock Control */

#define CLKCON_OSC32K_RC	(1 << 7)
#define CLKCON_OSC32K_XTAL	(0 << 7)
#define CLKCON_OSC32K_MASK	(1 << 7)
#define CLKCON_OSC_RC		(1 << 6)
#define CLKCON_OSC_XTAL		(0 << 6)
#define CLKCON_OSC_MASK		(1 << 6)
#define CLKCON_TICKSPD_MASK	(7 << 3)
# define CLKCON_TICKSPD_1	(0 << 3)
# define CLKCON_TICKSPD_1_2	(1 << 3)
# define CLKCON_TICKSPD_1_4	(2 << 3)
# define CLKCON_TICKSPD_1_8	(3 << 3)
# define CLKCON_TICKSPD_1_16	(4 << 3)
# define CLKCON_TICKSPD_1_32	(5 << 3)
# define CLKCON_TICKSPD_1_64	(6 << 3)
# define CLKCON_TICKSPD_1_128	(7 << 3)

#define CLKCON_CLKSPD_MASK	(7 << 0)
# define CLKCON_CLKSPD_1	(0 << 0)
# define CLKCON_CLKSPD_1_2	(1 << 0)
# define CLKCON_CLKSPD_1_4	(2 << 0)
# define CLKCON_CLKSPD_1_8	(3 << 0)
# define CLKCON_CLKSPD_1_16	(4 << 0)
# define CLKCON_CLKSPD_1_32	(5 << 0)
# define CLKCON_CLKSPD_1_64	(6 << 0)
# define CLKCON_CLKSPD_1_128	(7 << 0)

/* SLEEP 0xBE */
#define SLEEP_USB_EN		(1 << 7)
#define SLEEP_XOSC_STB		(1 << 6)
#define SLEEP_HFRC_STB		(1 << 5)
#define SLEEP_RST_POWER		(0 << 3)
#define SLEEP_RST_EXTERNAL	(1 << 3)
#define SLEEP_RST_WATCHDOG	(2 << 3)
#define SLEEP_RST_MASK		(3 << 3)
#define SLEEP_OSC_PD		(1 << 2)
#define SLEEP_MODE_PM0		(0 << 0)
#define SLEEP_MODE_PM1		(1 << 0)
#define SLEEP_MODE_PM2		(2 << 0)
#define SLEEP_MODE_PM3		(3 << 0)
#define SLEEP_MODE_MASK		(3 << 0)

/* PCON 0x87 */
__sfr __at 0x87 PCON;		/* Power Mode Control Register */

#define PCON_IDLE		(1 << 0)

/*
 * TCON
 */
__sfr __at 0x88 TCON;		/* CPU Interrupt Flag 1 */

__sbit __at 0x8F URX1IF;		/* USART1 RX interrupt flag. Automatically cleared */
__sbit __at 0x8F I2SRXIF;		/* I2S RX interrupt flag. Automatically cleared */
__sbit __at 0x8D ADCIF;		/* ADC interrupt flag. Automatically cleared */
__sbit __at 0x8B URX0IF;		/* USART0 RX interrupt flag. Automatically cleared */
__sbit __at 0x89 RFTXRXIF;	/* RF TX/RX complete interrupt flag. Automatically cleared */

#define TCON_URX1IF	(1 << 7)
#define TCON_I2SRXIF	(1 << 7)
#define TCON_ADCIF	(1 << 5)
#define TCON_URX0IF	(1 << 3)
#define TCON_RFTXRXIF	(1 << 1)

/*
 * S0CON
 */
__sfr __at 0x98 S0CON;	/* CPU Interrupt Flag 2 */

__sbit __at 0x98 ENCIF_0;	/* AES interrupt 0. */
__sbit __at 0x99 ENCIF_1;	/* AES interrupt 1. */

#define S0CON_ENCIF_1	(1 << 1)
#define S0CON_ENCIF_0	(1 << 0)

/*
 * S1CON
 */
__sfr __at 0x9B S1CON;	/* CPU Interrupt Flag 3 */

#define S1CON_RFIF_1	(1 << 1)
#define S1CON_RFIF_0	(1 << 0)

/*
 * IRCON
 */
__sfr __at 0xC0 IRCON;	/* CPU Interrupt Flag 4 */

__sbit __at 0xC0 DMAIF;	/* DMA complete interrupt flag */
__sbit __at 0xC1 T1IF;	/* Timer 1 interrupt flag. Automatically cleared */
__sbit __at 0xC2 T2IF;	/* Timer 2 interrupt flag. Automatically cleared */
__sbit __at 0xC3 T3IF;	/* Timer 3 interrupt flag. Automatically cleared */
__sbit __at 0xC4 T4IF;	/* Timer 4 interrupt flag. Automatically cleared */
__sbit __at 0xC5 P0IF;	/* Port0 interrupt flag */
__sbit __at 0xC7 STIF;	/* Sleep Timer interrupt flag */

#define IRCON_DMAIF	(1 << 0)	/* DMA complete interrupt flag */
#define IRCON_T1IF	(1 << 1)	/* Timer 1 interrupt flag. Automatically cleared */
#define IRCON_T2IF	(1 << 2)	/* Timer 2 interrupt flag. Automatically cleared */
#define IRCON_T3IF	(1 << 3)	/* Timer 3 interrupt flag. Automatically cleared */
#define IRCON_T4IF	(1 << 4)	/* Timer 4 interrupt flag. Automatically cleared */
#define IRCON_P0IF	(1 << 5)	/* Port0 interrupt flag */
#define IRCON_STIF	(1 << 7)	/* Sleep Timer interrupt flag */

/*
 * IRCON2
 */
__sfr __at 0xE8 IRCON2;	/* CPU Interrupt Flag 5 */

__sbit __at 0xE8 USBIF;	/* USB interrupt flag (shared with Port2) */
__sbit __at 0xE8 P2IF;	/* Port2 interrupt flag (shared with USB) */
__sbit __at 0xE9 UTX0IF;	/* USART0 TX interrupt flag */
__sbit __at 0xEA UTX1IF;	/* USART1 TX interrupt flag (shared with I2S TX) */
__sbit __at 0xEA I2STXIF;	/* I2S TX interrupt flag (shared with USART1 TX) */
__sbit __at 0xEB P1IF;	/* Port1 interrupt flag */
__sbit __at 0xEC WDTIF;	/* Watchdog timer interrupt flag */

#define IRCON2_USBIF	(1 << 0)	/* USB interrupt flag (shared with Port2) */
#define IRCON2_P2IF	(1 << 0)	/* Port2 interrupt flag (shared with USB) */
#define IRCON2_UTX0IF	(1 << 1)	/* USART0 TX interrupt flag */
#define IRCON2_UTX1IF	(1 << 2)	/* USART1 TX interrupt flag (shared with I2S TX) */
#define IRCON2_I2STXIF	(1 << 2)	/* I2S TX interrupt flag (shared with USART1 TX) */
#define IRCON2_P1IF	(1 << 3)	/* Port1 interrupt flag */
#define IRCON2_WDTIF	(1 << 4)	/* Watchdog timer interrupt flag */

/*
 * IP1 - Interrupt Priority 1
 */

/*
 * Interrupt priority groups:
 *
 * IPG0		RFTXRX		RF		DMA
 * IPG1		ADC		T1		P2INT/USB
 * IPG2		URX0		T2		UTX0
 * IPG3		URX1/I2SRX	T3		UTX1 / I2STX
 * IPG4		ENC		T4		P1INT
 * IPG5		ST		P0INT		WDT
 *
 * Priority = (IP1 << 1) | IP0. Higher priority interrupts served first
 */

__sfr __at 0xB9 IP1;	/* Interrupt Priority 1 */
__sfr __at 0xA9 IP0;	/* Interrupt Priority 0 */

#define IP1_IPG5	(1 << 5)
#define IP1_IPG4	(1 << 4)
#define IP1_IPG3	(1 << 3)
#define IP1_IPG2	(1 << 2)
#define IP1_IPG1	(1 << 1)
#define IP1_IPG0	(1 << 0)

#define IP0_IPG5	(1 << 5)
#define IP0_IPG4	(1 << 4)
#define IP0_IPG3	(1 << 3)
#define IP0_IPG2	(1 << 2)
#define IP0_IPG1	(1 << 1)
#define IP0_IPG0	(1 << 0)

/*
 * Timer 1
 */
#define T1CTL_MODE_SUSPENDED	(0 << 0)
#define T1CTL_MODE_FREE		(1 << 0)
#define T1CTL_MODE_MODULO	(2 << 0)
#define T1CTL_MODE_UP_DOWN	(3 << 0)
#define T1CTL_MODE_MASK		(3 << 0)
#define T1CTL_DIV_1		(0 << 2)
#define T1CTL_DIV_8		(1 << 2)
#define T1CTL_DIV_32		(2 << 2)
#define T1CTL_DIV_128		(3 << 2)
#define T1CTL_DIV_MASK		(3 << 2)
#define T1CTL_OVFIF		(1 << 4)
#define T1CTL_CH0IF		(1 << 5)
#define T1CTL_CH1IF		(1 << 6)
#define T1CTL_CH2IF		(1 << 7)

#define T1CCTL_NO_CAPTURE	(0 << 0)
#define T1CCTL_CAPTURE_RISING	(1 << 0)
#define T1CCTL_CAPTURE_FALLING	(2 << 0)
#define T1CCTL_CAPTURE_BOTH	(3 << 0)
#define T1CCTL_CAPTURE_MASK	(3 << 0)

#define T1CCTL_MODE_CAPTURE	(0 << 2)
#define T1CCTL_MODE_COMPARE	(1 << 2)

#define T1CTL_CMP_SET		(0 << 3)
#define T1CTL_CMP_CLEAR		(1 << 3)
#define T1CTL_CMP_TOGGLE	(2 << 3)
#define T1CTL_CMP_SET_CLEAR	(3 << 3)
#define T1CTL_CMP_CLEAR_SET	(4 << 3)

#define T1CTL_IM_DISABLED	(0 << 6)
#define T1CTL_IM_ENABLED	(1 << 6)

#define T1CTL_CPSEL_NORMAL	(0 << 7)
#define T1CTL_CPSEL_RF		(1 << 7)

/*
 * Timer 3 and Timer 4
 */

/* Timer count */
__sfr __at 0xCA T3CNT;
__sfr __at 0xEA T4CNT;

/* Timer control */

__sfr __at 0xCB T3CTL;
__sfr __at 0xEB T4CTL;

#define TxCTL_DIV_1		(0 << 5)
#define TxCTL_DIV_2		(1 << 5)
#define TxCTL_DIV_4		(2 << 5)
#define TxCTL_DIV_8		(3 << 5)
#define TxCTL_DIV_16		(4 << 5)
#define TxCTL_DIV_32		(5 << 5)
#define TxCTL_DIV_64		(6 << 5)
#define TxCTL_DIV_128		(7 << 5)
#define TxCTL_START		(1 << 4)
#define TxCTL_OVFIM		(1 << 3)
#define TxCTL_CLR		(1 << 2)
#define TxCTL_MODE_FREE		(0 << 0)
#define TxCTL_MODE_DOWN		(1 << 0)
#define TxCTL_MODE_MODULO	(2 << 0)
#define TxCTL_MODE_UP_DOWN	(3 << 0)

/* Timer 4 channel 0 compare control */

__sfr __at 0xCC T3CCTL0;
__sfr __at 0xCE T3CCTL1;
__sfr __at 0xEC T4CCTL0;
__sfr __at 0xEE T4CCTL1;

#define TxCCTLy_IM			(1 << 6)
#define TxCCTLy_CMP_SET			(0 << 3)
#define TxCCTLy_CMP_CLEAR		(1 << 3)
#define TxCCTLy_CMP_TOGGLE		(2 << 3)
#define TxCCTLy_CMP_SET_UP_CLEAR_DOWN	(3 << 3)
#define TxCCTLy_CMP_CLEAR_UP_SET_DOWN	(4 << 3)
#define TxCCTLy_CMP_SET_CLEAR_FF	(5 << 3)
#define TxCCTLy_CMP_CLEAR_SET_00	(6 << 3)
#define TxCCTLy_CMP_MODE_ENABLE		(1 << 2)

/* Timer compare value */
__sfr __at 0xCD T3CC0;
__sfr __at 0xCF T3CC1;
__sfr __at 0xED T4CC0;
__sfr __at 0xEF T4CC1;

/*
 * Peripheral control
 */

__sfr __at 0xf1 PERCFG;
#define PERCFG_T1CFG_ALT_1      (0 << 6)
#define PERCFG_T1CFG_ALT_2      (1 << 6)
#define PERCFG_T1CFG_ALT_MASK   (1 << 6)

#define PERCFG_T3CFG_ALT_1      (0 << 5)
#define PERCFG_T3CFG_ALT_2      (1 << 5)
#define PERCFG_T3CFG_ALT_MASK   (1 << 5)

#define PERCFG_T4CFG_ALT_1      (0 << 4)
#define PERCFG_T4CFG_ALT_2      (1 << 4)
#define PERCFG_T4CFG_ALT_MASK   (1 << 4)

#define PERCFG_U1CFG_ALT_1      (0 << 1)
#define PERCFG_U1CFG_ALT_2      (1 << 1)
#define PERCFG_U1CFG_ALT_MASK   (1 << 1)

#define PERCFG_U0CFG_ALT_1      (0 << 0)
#define PERCFG_U0CFG_ALT_2      (1 << 0)
#define PERCFG_U0CFG_ALT_MASK   (1 << 0)

/* directly addressed USB registers */
__xdata __at (0xde00) volatile uint8_t USBADDR;
__xdata __at (0xde01) volatile uint8_t USBPOW;
__xdata __at (0xde02) volatile uint8_t USBIIF;

__xdata __at (0xde04) volatile uint8_t USBOIF;

__xdata __at (0xde06) volatile uint8_t USBCIF;

# define USBCIF_SOFIF		(1 << 3)
# define USBCIF_RSTIF		(1 << 2)
# define USBCIF_RESUMEIF	(1 << 1)
# define USBCIF_SUSPENDIF	(1 << 0)

__xdata __at (0xde07) volatile uint8_t USBIIE;

__xdata __at (0xde09) volatile uint8_t USBOIE;

__xdata __at (0xde0b) volatile uint8_t USBCIE;

# define USBCIE_SOFIE		(1 << 3)
# define USBCIE_RSTIE		(1 << 2)
# define USBCIE_RESUMEIE	(1 << 1)
# define USBCIE_SUSPENDIE	(1 << 0)

__xdata __at (0xde0c) volatile uint8_t USBFRML;
__xdata __at (0xde0d) volatile uint8_t USBFRMH;
__xdata __at (0xde0e) volatile uint8_t USBINDEX;

/* indexed USB registers, must set USBINDEX to 0-5 */
__xdata __at (0xde10) volatile uint8_t USBMAXI;
__xdata __at (0xde11) volatile uint8_t USBCS0;

# define USBCS0_CLR_SETUP_END		(1 << 7)
# define USBCS0_CLR_OUTPKT_RDY		(1 << 6)
# define USBCS0_SEND_STALL		(1 << 5)
# define USBCS0_SETUP_END		(1 << 4)
# define USBCS0_DATA_END		(1 << 3)
# define USBCS0_SENT_STALL		(1 << 2)
# define USBCS0_INPKT_RDY		(1 << 1)
# define USBCS0_OUTPKT_RDY		(1 << 0)

__xdata __at (0xde11) volatile uint8_t USBCSIL;

# define USBCSIL_CLR_DATA_TOG		(1 << 6)
# define USBCSIL_SENT_STALL		(1 << 5)
# define USBCSIL_SEND_STALL		(1 << 4)
# define USBCSIL_FLUSH_PACKET		(1 << 3)
# define USBCSIL_UNDERRUN		(1 << 2)
# define USBCSIL_PKT_PRESENT		(1 << 1)
# define USBCSIL_INPKT_RDY		(1 << 0)

__xdata __at (0xde12) volatile uint8_t USBCSIH;

# define USBCSIH_AUTOSET		(1 << 7)
# define USBCSIH_ISO			(1 << 6)
# define USBCSIH_FORCE_DATA_TOG		(1 << 3)
# define USBCSIH_IN_DBL_BUF		(1 << 0)

__xdata __at (0xde13) volatile uint8_t USBMAXO;
__xdata __at (0xde14) volatile uint8_t USBCSOL;

# define USBCSOL_CLR_DATA_TOG		(1 << 7)
# define USBCSOL_SENT_STALL		(1 << 6)
# define USBCSOL_SEND_STALL		(1 << 5)
# define USBCSOL_FLUSH_PACKET		(1 << 4)
# define USBCSOL_DATA_ERROR		(1 << 3)
# define USBCSOL_OVERRUN		(1 << 2)
# define USBCSOL_FIFO_FULL		(1 << 1)
# define USBCSOL_OUTPKT_RDY		(1 << 0)

__xdata __at (0xde15) volatile uint8_t USBCSOH;

# define USBCSOH_AUTOCLEAR		(1 << 7)
# define USBCSOH_ISO			(1 << 6)
# define USBCSOH_OUT_DBL_BUF		(1 << 0)

__xdata __at (0xde16) volatile uint8_t USBCNT0;
__xdata __at (0xde16) volatile uint8_t USBCNTL;
__xdata __at (0xde17) volatile uint8_t USBCNTH;

__xdata __at (0xde20) volatile uint8_t USBFIFO[12];

/* ADC Data register, low and high */
__sfr __at 0xBA ADCL;
__sfr __at 0xBB ADCH;
__xdata __at (0xDFBA) volatile uint16_t ADCXDATA;

/* ADC Control Register 1 */
__sfr __at 0xB4 ADCCON1;

# define ADCCON1_EOC		(1 << 7)	/* conversion complete */
# define ADCCON1_ST		(1 << 6)	/* start conversion */

# define ADCCON1_STSEL_MASK	(3 << 4)	/* start select */
# define ADCCON1_STSEL_EXTERNAL	(0 << 4)	/* P2_0 pin triggers */
# define ADCCON1_STSEL_FULLSPEED (1 << 4)	/* full speed, no waiting */
# define ADCCON1_STSEL_TIMER1	(2 << 4)	/* timer 1 channel 0 */
# define ADCCON1_STSEL_START	(3 << 4)	/* set start bit */

# define ADCCON1_RCTRL_MASK	(3 << 2)	/* random number control */
# define ADCCON1_RCTRL_COMPLETE	(0 << 2)	/* operation completed */
# define ADCCON1_RCTRL_CLOCK_LFSR (1 << 2)	/* Clock the LFSR once */

/* ADC Control Register 2 */
__sfr __at 0xB5 ADCCON2;

# define ADCCON2_SREF_MASK	(3 << 6)	/* reference voltage */
# define ADCCON2_SREF_1_25V	(0 << 6)	/* internal 1.25V */
# define ADCCON2_SREF_EXTERNAL	(1 << 6)	/* external on AIN7 cc1110 */
# define ADCCON2_SREF_VDD	(2 << 6)	/* VDD on the AVDD pin */
# define ADCCON2_SREF_EXTERNAL_DIFF (3 << 6)	/* external on AIN6-7 cc1110 */

# define ADCCON2_SDIV_MASK	(3 << 4)	/* decimation rate */
# define ADCCON2_SDIV_64	(0 << 4)	/* 7 bits */
# define ADCCON2_SDIV_128	(1 << 4)	/* 9 bits */
# define ADCCON2_SDIV_256	(2 << 4)	/* 10 bits */
# define ADCCON2_SDIV_512	(3 << 4)	/* 12 bits */

# define ADCCON2_SCH_MASK	(0xf << 0)	/* Sequence channel select */
# define ADCCON2_SCH_SHIFT	0
# define ADCCON2_SCH_AIN0	(0 << 0)
# define ADCCON2_SCH_AIN1	(1 << 0)
# define ADCCON2_SCH_AIN2	(2 << 0)
# define ADCCON2_SCH_AIN3	(3 << 0)
# define ADCCON2_SCH_AIN4	(4 << 0)
# define ADCCON2_SCH_AIN5	(5 << 0)
# define ADCCON2_SCH_AIN6	(6 << 0)
# define ADCCON2_SCH_AIN7	(7 << 0)
# define ADCCON2_SCH_AIN0_AIN1	(8 << 0)
# define ADCCON2_SCH_AIN2_AIN3	(9 << 0)
# define ADCCON2_SCH_AIN4_AIN5	(0xa << 0)
# define ADCCON2_SCH_AIN6_AIN7	(0xb << 0)
# define ADCCON2_SCH_GND	(0xc << 0)
# define ADCCON2_SCH_VREF	(0xd << 0)
# define ADCCON2_SCH_TEMP	(0xe << 0)
# define ADCCON2_SCH_VDD_3	(0xf << 0)


/* ADC Control Register 3 */
__sfr __at 0xB6 ADCCON3;

# define ADCCON3_EREF_MASK	(3 << 6)	/* extra conversion reference */
# define ADCCON3_EREF_1_25	(0 << 6)	/* internal 1.25V */
# define ADCCON3_EREF_EXTERNAL	(1 << 6)	/* external AIN7 cc1110 */
# define ADCCON3_EREF_VDD	(2 << 6)	/* VDD on the AVDD pin */
# define ADCCON3_EREF_EXTERNAL_DIFF (3 << 6)	/* external AIN6-7 cc1110 */
# define ADCCON3_EDIV_MASK	(3 << 4)	/* extral decimation */
# define ADCCON3_EDIV_64	(0 << 4)	/* 7 bits */
# define ADCCON3_EDIV_128	(1 << 4)	/* 9 bits */
# define ADCCON3_EDIV_256	(2 << 4)	/* 10 bits */
# define ADCCON3_EDIV_512	(3 << 4)	/* 12 bits */
# define ADCCON3_ECH_MASK	(0xf << 0)	/* Sequence channel select */
# define ADCCON3_ECH_SHIFT	0
# define ADCCON3_ECH_AIN0	(0 << 0)
# define ADCCON3_ECH_AIN1	(1 << 0)
# define ADCCON3_ECH_AIN2	(2 << 0)
# define ADCCON3_ECH_AIN3	(3 << 0)
# define ADCCON3_ECH_AIN4	(4 << 0)
# define ADCCON3_ECH_AIN5	(5 << 0)
# define ADCCON3_ECH_AIN6	(6 << 0)
# define ADCCON3_ECH_AIN7	(7 << 0)
# define ADCCON3_ECH_AIN0_AIN1	(8 << 0)
# define ADCCON3_ECH_AIN2_AIN3	(9 << 0)
# define ADCCON3_ECH_AIN4_AIN5	(0xa << 0)
# define ADCCON3_ECH_AIN6_AIN7	(0xb << 0)
# define ADCCON3_ECH_GND	(0xc << 0)
# define ADCCON3_ECH_VREF	(0xd << 0)
# define ADCCON3_ECH_TEMP	(0xe << 0)
# define ADCCON3_ECH_VDD_3	(0xf << 0)

/*
 * ADC configuration register, this selects which
 * GPIO pins are to be used as ADC inputs
 */
__sfr __at 0xF2 ADCCFG;

/*
 * Watchdog timer
 */

__sfr __at 0xc9 WDCTL;

#define WDCTL_CLEAR_FIRST	(0xa << 4)
#define WDCTL_CLEAR_SECOND	(0x5 << 4)
#define WDCTL_EN		(1 << 3)
#define WDCTL_MODE_WATCHDOG	(0 << 2)
#define WDCTL_MODE_TIMER	(1 << 2)
#define WDCTL_MODE_MASK		(1 << 2)
#define WDCTL_INT_32768		(0 << 0)
#define WDCTL_INT_8192		(1 << 0)
#define WDCTL_INT_512		(2 << 0)
#define WDCTL_INT_64		(3 << 0)

/*
 * Pin selectors, these set which pins are
 * using their peripheral function
 */
__sfr __at 0xF3 P0SEL;
__sfr __at 0xF4 P1SEL;
__sfr __at 0xF5 P2SEL;

#define P2SEL_PRI3P1_USART0		(0 << 6)
#define P2SEL_PRI3P1_USART1		(1 << 6)
#define P2SEL_PRI3P1_MASK		(1 << 6)
#define P2SEL_PRI2P1_USART1		(0 << 5)
#define P2SEL_PRI2P1_TIMER3		(1 << 5)
#define P2SEL_PRI2P1_MASK		(1 << 5)
#define P2SEL_PRI1P1_TIMER1		(0 << 4)
#define P2SEL_PRI1P1_TIMER4		(1 << 4)
#define P2SEL_PRI1P1_MASK		(1 << 4)
#define P2SEL_PRI0P1_USART0		(0 << 3)
#define P2SEL_PRI0P1_TIMER1		(1 << 3)
#define P2SEL_PRI0P1_MASK		(1 << 3)
#define P2SEL_SELP2_4_GPIO		(0 << 2)
#define P2SEL_SELP2_4_PERIPHERAL	(1 << 2)
#define P2SEL_SELP2_4_MASK		(1 << 2)
#define P2SEL_SELP2_3_GPIO		(0 << 1)
#define P2SEL_SELP2_3_PERIPHERAL	(1 << 1)
#define P2SEL_SELP2_3_MASK		(1 << 1)
#define P2SEL_SELP2_0_GPIO		(0 << 0)
#define P2SEL_SELP2_0_PERIPHERAL	(1 << 0)
#define P2SEL_SELP2_0_MASK		(1 << 0)

/*
 * For pins used as GPIOs, these set which are used as outputs
 */
__sfr __at 0xFD P0DIR;
__sfr __at 0xFE P1DIR;
__sfr __at 0xFF P2DIR;

#define P2DIR_PRIP0_USART0_USART1	(0 << 6)
#define P2DIR_PRIP0_USART1_USART0	(1 << 6)
#define P2DIR_PRIP0_TIMER1_01_USART1	(2 << 6)
#define P2DIR_PRIP0_TIMER1_2_USART0	(3 << 6)
#define P2DIR_PRIP0_MASK		(3 << 6)

__sfr __at 0x8F P0INP;

/* Select between tri-state and pull up/down
 * for pins P0_0 - P0_7.
 */
#define P0INP_MDP0_7_PULL	(0 << 7)
#define P0INP_MDP0_7_TRISTATE	(1 << 7)
#define P0INP_MDP0_6_PULL	(0 << 6)
#define P0INP_MDP0_6_TRISTATE	(1 << 6)
#define P0INP_MDP0_5_PULL	(0 << 5)
#define P0INP_MDP0_5_TRISTATE	(1 << 5)
#define P0INP_MDP0_4_PULL	(0 << 4)
#define P0INP_MDP0_4_TRISTATE	(1 << 4)
#define P0INP_MDP0_3_PULL	(0 << 3)
#define P0INP_MDP0_3_TRISTATE	(1 << 3)
#define P0INP_MDP0_2_PULL	(0 << 2)
#define P0INP_MDP0_2_TRISTATE	(1 << 2)
#define P0INP_MDP0_1_PULL	(0 << 1)
#define P0INP_MDP0_1_TRISTATE	(1 << 1)
#define P0INP_MDP0_0_PULL	(0 << 0)
#define P0INP_MDP0_0_TRISTATE	(1 << 0)

__sfr __at 0xF6 P1INP;

/* Select between tri-state and pull up/down
 * for pins P1_2 - P1_7. Pins P1_0 and P1_1 are
 * always tri-stated
 */
#define P1INP_MDP1_7_PULL	(0 << 7)
#define P1INP_MDP1_7_TRISTATE	(1 << 7)
#define P1INP_MDP1_6_PULL	(0 << 6)
#define P1INP_MDP1_6_TRISTATE	(1 << 6)
#define P1INP_MDP1_5_PULL	(0 << 5)
#define P1INP_MDP1_5_TRISTATE	(1 << 5)
#define P1INP_MDP1_4_PULL	(0 << 4)
#define P1INP_MDP1_4_TRISTATE	(1 << 4)
#define P1INP_MDP1_3_PULL	(0 << 3)
#define P1INP_MDP1_3_TRISTATE	(1 << 3)
#define P1INP_MDP1_2_PULL	(0 << 2)
#define P1INP_MDP1_2_TRISTATE	(1 << 2)

__sfr __at 0xF7 P2INP;
/* P2INP has three extra bits which are used to choose
 * between pull-up and pull-down when they are not tri-stated
 */
#define P2INP_PDUP2_PULL_UP	(0 << 7)
#define P2INP_PDUP2_PULL_DOWN	(1 << 7)
#define P2INP_PDUP1_PULL_UP	(0 << 6)
#define P2INP_PDUP1_PULL_DOWN	(1 << 6)
#define P2INP_PDUP0_PULL_UP	(0 << 5)
#define P2INP_PDUP0_PULL_DOWN	(1 << 5)

/* For the P2 pins, choose between tri-state and pull up/down
 * mode
 */
#define P2INP_MDP2_4_PULL	(0 << 4)
#define P2INP_MDP2_4_TRISTATE	(1 << 4)
#define P2INP_MDP2_3_PULL	(0 << 3)
#define P2INP_MDP2_3_TRISTATE	(1 << 3)
#define P2INP_MDP2_2_PULL	(0 << 2)
#define P2INP_MDP2_2_TRISTATE	(1 << 2)
#define P2INP_MDP2_1_PULL	(0 << 1)
#define P2INP_MDP2_1_TRISTATE	(1 << 1)
#define P2INP_MDP2_0_PULL	(0 << 0)
#define P2INP_MDP2_0_TRISTATE	(1 << 0)

/* GPIO interrupt status flags */
__sfr __at 0x89 P0IFG;
__sfr __at 0x8A P1IFG;
__sfr __at 0x8B P2IFG;

#define P0IFG_USB_RESUME	(1 << 7)

__sfr __at 0x8C PICTL;
#define PICTL_P2IEN	(1 << 5)
#define PICTL_P0IENH	(1 << 4)
#define PICTL_P0IENL	(1 << 3)
#define PICTL_P2ICON	(1 << 2)
#define PICTL_P1ICON	(1 << 1)
#define PICTL_P0ICON	(1 << 0)

/* GPIO pins */
__sfr __at 0x80 P0;

__sbit __at 0x80 P0_0;
__sbit __at 0x81 P0_1;
__sbit __at 0x82 P0_2;
__sbit __at 0x83 P0_3;
__sbit __at 0x84 P0_4;
__sbit __at 0x85 P0_5;
__sbit __at 0x86 P0_6;
__sbit __at 0x87 P0_7;

__sfr __at 0x90 P1;

__sbit __at 0x90 P1_0;
__sbit __at 0x91 P1_1;
__sbit __at 0x92 P1_2;
__sbit __at 0x93 P1_3;
__sbit __at 0x94 P1_4;
__sbit __at 0x95 P1_5;
__sbit __at 0x96 P1_6;
__sbit __at 0x97 P1_7;

__sfr __at 0xa0 P2;

__sbit __at 0xa0 P2_0;
__sbit __at 0xa1 P2_1;
__sbit __at 0xa2 P2_2;
__sbit __at 0xa3 P2_3;
__sbit __at 0xa4 P2_4;

/* DMA controller */
struct cc_dma_channel {
	uint8_t	src_high;
	uint8_t	src_low;
	uint8_t	dst_high;
	uint8_t	dst_low;
	uint8_t	len_high;
	uint8_t	len_low;
	uint8_t	cfg0;
	uint8_t	cfg1;
};

# define DMA_LEN_HIGH_VLEN_MASK		(7 << 5)
# define DMA_LEN_HIGH_VLEN_LEN		(0 << 5)
# define DMA_LEN_HIGH_VLEN_PLUS_1	(1 << 5)
# define DMA_LEN_HIGH_VLEN		(2 << 5)
# define DMA_LEN_HIGH_VLEN_PLUS_2	(3 << 5)
# define DMA_LEN_HIGH_VLEN_PLUS_3	(4 << 5)
# define DMA_LEN_HIGH_MASK		(0x1f)

# define DMA_CFG0_WORDSIZE_8		(0 << 7)
# define DMA_CFG0_WORDSIZE_16		(1 << 7)
# define DMA_CFG0_TMODE_MASK		(3 << 5)
# define DMA_CFG0_TMODE_SINGLE		(0 << 5)
# define DMA_CFG0_TMODE_BLOCK		(1 << 5)
# define DMA_CFG0_TMODE_REPEATED_SINGLE	(2 << 5)
# define DMA_CFG0_TMODE_REPEATED_BLOCK	(3 << 5)

/*
 * DMA triggers
 */
# define DMA_CFG0_TRIGGER_NONE		0
# define DMA_CFG0_TRIGGER_PREV		1
# define DMA_CFG0_TRIGGER_T1_CH0	2
# define DMA_CFG0_TRIGGER_T1_CH1	3
# define DMA_CFG0_TRIGGER_T1_CH2	4
# define DMA_CFG0_TRIGGER_T2_OVFL	6
# define DMA_CFG0_TRIGGER_T3_CH0	7
# define DMA_CFG0_TRIGGER_T3_CH1	8
# define DMA_CFG0_TRIGGER_T4_CH0	9
# define DMA_CFG0_TRIGGER_T4_CH1	10
# define DMA_CFG0_TRIGGER_IOC_0		12
# define DMA_CFG0_TRIGGER_IOC_1		13
# define DMA_CFG0_TRIGGER_URX0		14
# define DMA_CFG0_TRIGGER_UTX0		15
# define DMA_CFG0_TRIGGER_URX1		16
# define DMA_CFG0_TRIGGER_UTX1		17
# define DMA_CFG0_TRIGGER_FLASH		18
# define DMA_CFG0_TRIGGER_RADIO		19
# define DMA_CFG0_TRIGGER_ADC_CHALL	20
# define DMA_CFG0_TRIGGER_ADC_CH0	21
# define DMA_CFG0_TRIGGER_ADC_CH1	22
# define DMA_CFG0_TRIGGER_ADC_CH2	23
# define DMA_CFG0_TRIGGER_ADC_CH3	24
# define DMA_CFG0_TRIGGER_ADC_CH4	25
# define DMA_CFG0_TRIGGER_ADC_CH5	26
# define DMA_CFG0_TRIGGER_ADC_CH6	27
# define DMA_CFG0_TRIGGER_I2SRX		27
# define DMA_CFG0_TRIGGER_ADC_CH7	28
# define DMA_CFG0_TRIGGER_I2STX		28
# define DMA_CFG0_TRIGGER_ENC_DW	29
# define DMA_CFG0_TRIGGER_ENC_UP	30

# define DMA_CFG1_SRCINC_MASK		(3 << 6)
# define DMA_CFG1_SRCINC_0		(0 << 6)
# define DMA_CFG1_SRCINC_1		(1 << 6)
# define DMA_CFG1_SRCINC_2		(2 << 6)
# define DMA_CFG1_SRCINC_MINUS_1	(3 << 6)

# define DMA_CFG1_DESTINC_MASK		(3 << 4)
# define DMA_CFG1_DESTINC_0		(0 << 4)
# define DMA_CFG1_DESTINC_1		(1 << 4)
# define DMA_CFG1_DESTINC_2		(2 << 4)
# define DMA_CFG1_DESTINC_MINUS_1	(3 << 4)

# define DMA_CFG1_IRQMASK		(1 << 3)
# define DMA_CFG1_M8			(1 << 2)

# define DMA_CFG1_PRIORITY_MASK		(3 << 0)
# define DMA_CFG1_PRIORITY_LOW		(0 << 0)
# define DMA_CFG1_PRIORITY_NORMAL	(1 << 0)
# define DMA_CFG1_PRIORITY_HIGH		(2 << 0)

/*
 * DMAARM - DMA Channel Arm
 */

__sfr __at 0xD6 DMAARM;

# define DMAARM_ABORT			(1 << 7)
# define DMAARM_DMAARM4			(1 << 4)
# define DMAARM_DMAARM3			(1 << 3)
# define DMAARM_DMAARM2			(1 << 2)
# define DMAARM_DMAARM1			(1 << 1)
# define DMAARM_DMAARM0			(1 << 0)

/*
 * DMAREQ - DMA Channel Start Request and Status
 */

__sfr __at 0xD7 DMAREQ;

# define DMAREQ_DMAREQ4			(1 << 4)
# define DMAREQ_DMAREQ3			(1 << 3)
# define DMAREQ_DMAREQ2			(1 << 2)
# define DMAREQ_DMAREQ1			(1 << 1)
# define DMAREQ_DMAREQ0			(1 << 0)

/*
 * DMA configuration 0 address
 */

__sfr __at 0xD5 DMA0CFGH;
__sfr __at 0xD4 DMA0CFGL;

/*
 * DMA configuration 1-4 address
 */

__sfr __at 0xD3 DMA1CFGH;
__sfr __at 0xD2 DMA1CFGL;

/*
 * DMAIRQ - DMA Interrupt Flag
 */

__sfr __at 0xD1 DMAIRQ;

# define DMAIRQ_DMAIF4			(1 << 4)
# define DMAIRQ_DMAIF3			(1 << 3)
# define DMAIRQ_DMAIF2			(1 << 2)
# define DMAIRQ_DMAIF1			(1 << 1)
# define DMAIRQ_DMAIF0			(1 << 0)

/*
 * UART registers
 */

/* USART config/status registers */
__sfr __at 0x86 U0CSR;
__sfr __at 0xF8 U1CSR;

# define UxCSR_MODE_UART		(1 << 7)
# define UxCSR_MODE_SPI			(0 << 7)
# define UxCSR_RE			(1 << 6)
# define UxCSR_SLAVE			(1 << 5)
# define UxCSR_MASTER			(0 << 5)
# define UxCSR_FE			(1 << 4)
# define UxCSR_ERR			(1 << 3)
# define UxCSR_RX_BYTE			(1 << 2)
# define UxCSR_TX_BYTE			(1 << 1)
# define UxCSR_ACTIVE			(1 << 0)

/* UART configuration registers */
__sfr __at 0xc4 U0UCR;
__sfr __at 0xfb U1UCR;

# define UxUCR_FLUSH                    (1 << 7)
# define UxUCR_FLOW_DISABLE             (0 << 6)
# define UxUCR_FLOW_ENABLE              (1 << 6)
# define UxUCR_D9_EVEN_PARITY           (0 << 5)
# define UxUCR_D9_ODD_PARITY            (1 << 5)
# define UxUCR_BIT9_8_BITS              (0 << 4)
# define UxUCR_BIT9_9_BITS              (1 << 4)
# define UxUCR_PARITY_DISABLE           (0 << 3)
# define UxUCR_PARITY_ENABLE            (1 << 3)
# define UxUCR_SPB_1_STOP_BIT           (0 << 2)
# define UxUCR_SPB_2_STOP_BITS          (1 << 2)
# define UxUCR_STOP_LOW                 (0 << 1)
# define UxUCR_STOP_HIGH                (1 << 1)
# define UxUCR_START_LOW                (0 << 0)
# define UxUCR_START_HIGH               (1 << 0)

/* USART General configuration registers (mostly SPI) */
__sfr __at 0xc5 U0GCR;
__sfr __at 0xfc U1GCR;

# define UxGCR_CPOL_NEGATIVE		(0 << 7)
# define UxGCR_CPOL_POSITIVE		(1 << 7)
# define UxGCR_CPHA_FIRST_EDGE		(0 << 6)
# define UxGCR_CPHA_SECOND_EDGE		(1 << 6)
# define UxGCR_ORDER_LSB		(0 << 5)
# define UxGCR_ORDER_MSB		(1 << 5)
# define UxGCR_BAUD_E_MASK		(0x1f)
# define UxGCR_BAUD_E_SHIFT		0

/* USART data registers */
__sfr __at 0xc1 U0DBUF;
__xdata __at (0xDFC1) volatile uint8_t U0DBUFXADDR;
__sfr __at 0xf9 U1DBUF;
__xdata __at (0xDFF9) volatile uint8_t U1DBUFXADDR;

/* USART baud rate registers, M value */
__sfr __at 0xc2 U0BAUD;
__sfr __at 0xfa U1BAUD;

/* Flash controller */

__sfr __at 0xAE FCTL;
#define FCTL_BUSY		(1 << 7)
#define FCTL_SWBSY		(1 << 6)
#define FCTL_CONTRD_ENABLE	(1 << 4)
#define FCTL_WRITE		(1 << 1)
#define FCTL_ERASE		(1 << 0)

/* Flash write data. Write two bytes here */
__sfr __at 0xAF FWDATA;
__xdata __at (0xDFAF) volatile uint8_t FWDATAXADDR;

/* Flash write/erase address */
__sfr __at 0xAD FADDRH;
__sfr __at 0xAC FADDRL;

/* Flash timing */
__sfr __at 0xAB FWT;

/* Radio */

__sfr __at 0xD9 RFD;
__xdata __at (0xDFD9) volatile uint8_t RFDXADDR;

__sfr __at 0xE9 RFIF;
#define RFIF_IM_TXUNF	(1 << 7)
#define RFIF_IM_RXOVF	(1 << 6)
#define RFIF_IM_TIMEOUT	(1 << 5)
#define RFIF_IM_DONE	(1 << 4)
#define RFIF_IM_CS	(1 << 3)
#define RFIF_IM_PQT	(1 << 2)
#define RFIF_IM_CCA	(1 << 1)
#define RFIF_IM_SFD	(1 << 0)

__sfr __at 0x91 RFIM;
#define RFIM_IM_TXUNF	(1 << 7)
#define RFIM_IM_RXOVF	(1 << 6)
#define RFIM_IM_TIMEOUT	(1 << 5)
#define RFIM_IM_DONE	(1 << 4)
#define RFIM_IM_CS	(1 << 3)
#define RFIM_IM_PQT	(1 << 2)
#define RFIM_IM_CCA	(1 << 1)
#define RFIM_IM_SFD	(1 << 0)

__sfr __at 0xE1 RFST;

#define RFST_SFSTXON	0x00
#define RFST_SCAL	0x01
#define RFST_SRX	0x02
#define RFST_STX	0x03
#define RFST_SIDLE	0x04

__xdata __at (0xdf00) uint8_t RF[0x3c];

__xdata __at (0xdf2f) uint8_t RF_IOCFG2;
#define RF_IOCFG2_OFF	0x2f

__xdata __at (0xdf30) uint8_t RF_IOCFG1;
#define RF_IOCFG1_OFF	0x30

__xdata __at (0xdf31) uint8_t RF_IOCFG0;
#define RF_IOCFG0_OFF	0x31

__xdata __at (0xdf00) uint8_t RF_SYNC1;
#define RF_SYNC1_OFF	0x00

__xdata __at (0xdf01) uint8_t RF_SYNC0;
#define RF_SYNC0_OFF	0x01

__xdata __at (0xdf02) uint8_t RF_PKTLEN;
#define RF_PKTLEN_OFF	0x02

__xdata __at (0xdf03) uint8_t RF_PKTCTRL1;
#define RF_PKTCTRL1_OFF	0x03
#define PKTCTRL1_PQT_MASK			(0x7 << 5)
#define PKTCTRL1_PQT_SHIFT			5
#define PKTCTRL1_APPEND_STATUS			(1 << 2)
#define PKTCTRL1_ADR_CHK_NONE			(0 << 0)
#define PKTCTRL1_ADR_CHK_NO_BROADCAST		(1 << 0)
#define PKTCTRL1_ADR_CHK_00_BROADCAST		(2 << 0)
#define PKTCTRL1_ADR_CHK_00_FF_BROADCAST	(3 << 0)

/* If APPEND_STATUS is used, two bytes will be added to the packet data */
#define PKT_APPEND_STATUS_0_RSSI_MASK		(0xff)
#define PKT_APPEND_STATUS_0_RSSI_SHIFT		0
#define PKT_APPEND_STATUS_1_CRC_OK		(1 << 7)
#define PKT_APPEND_STATUS_1_LQI_MASK		(0x7f)
#define PKT_APPEND_STATUS_1_LQI_SHIFT		0

__xdata __at (0xdf04) uint8_t RF_PKTCTRL0;
#define RF_PKTCTRL0_OFF	0x04
#define RF_PKTCTRL0_WHITE_DATA			(1 << 6)
#define RF_PKTCTRL0_PKT_FORMAT_NORMAL		(0 << 4)
#define RF_PKTCTRL0_PKT_FORMAT_RANDOM		(2 << 4)
#define RF_PKTCTRL0_CRC_EN			(1 << 2)
#define RF_PKTCTRL0_LENGTH_CONFIG_FIXED		(0 << 0)
#define RF_PKTCTRL0_LENGTH_CONFIG_VARIABLE	(1 << 0)

__xdata __at (0xdf05) uint8_t RF_ADDR;
#define RF_ADDR_OFF	0x05

__xdata __at (0xdf06) uint8_t RF_CHANNR;
#define RF_CHANNR_OFF	0x06

__xdata __at (0xdf07) uint8_t RF_FSCTRL1;
#define RF_FSCTRL1_OFF	0x07

#define RF_FSCTRL1_FREQ_IF_SHIFT	(0)

__xdata __at (0xdf08) uint8_t RF_FSCTRL0;
#define RF_FSCTRL0_OFF	0x08

#define RF_FSCTRL0_FREQOFF_SHIFT	(0)

__xdata __at (0xdf09) uint8_t RF_FREQ2;
#define RF_FREQ2_OFF	0x09

__xdata __at (0xdf0a) uint8_t RF_FREQ1;
#define RF_FREQ1_OFF	0x0a

__xdata __at (0xdf0b) uint8_t RF_FREQ0;
#define RF_FREQ0_OFF	0x0b

__xdata __at (0xdf0c) uint8_t RF_MDMCFG4;
#define RF_MDMCFG4_OFF	0x0c

#define RF_MDMCFG4_CHANBW_E_SHIFT	6
#define RF_MDMCFG4_CHANBW_M_SHIFT	4
#define RF_MDMCFG4_DRATE_E_SHIFT	0

__xdata __at (0xdf0d) uint8_t RF_MDMCFG3;
#define RF_MDMCFG3_OFF	0x0d

#define RF_MDMCFG3_DRATE_M_SHIFT	0

__xdata __at (0xdf0e) uint8_t RF_MDMCFG2;
#define RF_MDMCFG2_OFF	0x0e

#define RF_MDMCFG2_DEM_DCFILT_OFF	(1 << 7)
#define RF_MDMCFG2_DEM_DCFILT_ON	(0 << 7)

#define RF_MDMCFG2_MOD_FORMAT_MASK	(7 << 4)
#define RF_MDMCFG2_MOD_FORMAT_2_FSK	(0 << 4)
#define RF_MDMCFG2_MOD_FORMAT_GFSK	(1 << 4)
#define RF_MDMCFG2_MOD_FORMAT_ASK_OOK	(3 << 4)
#define RF_MDMCFG2_MOD_FORMAT_MSK	(7 << 4)

#define RF_MDMCFG2_MANCHESTER_EN	(1 << 3)

#define RF_MDMCFG2_SYNC_MODE_MASK		(0x7 << 0)
#define RF_MDMCFG2_SYNC_MODE_NONE		(0x0 << 0)
#define RF_MDMCFG2_SYNC_MODE_15_16		(0x1 << 0)
#define RF_MDMCFG2_SYNC_MODE_16_16		(0x2 << 0)
#define RF_MDMCFG2_SYNC_MODE_30_32		(0x3 << 0)
#define RF_MDMCFG2_SYNC_MODE_NONE_THRES		(0x4 << 0)
#define RF_MDMCFG2_SYNC_MODE_15_16_THRES	(0x5 << 0)
#define RF_MDMCFG2_SYNC_MODE_16_16_THRES	(0x6 << 0)
#define RF_MDMCFG2_SYNC_MODE_30_32_THRES	(0x7 << 0)

__xdata __at (0xdf0f) uint8_t RF_MDMCFG1;
#define RF_MDMCFG1_OFF	0x0f

#define RF_MDMCFG1_FEC_EN			(1 << 7)
#define RF_MDMCFG1_FEC_DIS			(0 << 7)

#define RF_MDMCFG1_NUM_PREAMBLE_MASK		(7 << 4)
#define RF_MDMCFG1_NUM_PREAMBLE_2		(0 << 4)
#define RF_MDMCFG1_NUM_PREAMBLE_3		(1 << 4)
#define RF_MDMCFG1_NUM_PREAMBLE_4		(2 << 4)
#define RF_MDMCFG1_NUM_PREAMBLE_6		(3 << 4)
#define RF_MDMCFG1_NUM_PREAMBLE_8		(4 << 4)
#define RF_MDMCFG1_NUM_PREAMBLE_12		(5 << 4)
#define RF_MDMCFG1_NUM_PREAMBLE_16		(6 << 4)
#define RF_MDMCFG1_NUM_PREAMBLE_24		(7 << 4)

#define RF_MDMCFG1_CHANSPC_E_MASK		(3 << 0)
#define RF_MDMCFG1_CHANSPC_E_SHIFT		(0)

__xdata __at (0xdf10) uint8_t RF_MDMCFG0;
#define RF_MDMCFG0_OFF	0x10

#define RF_MDMCFG0_CHANSPC_M_SHIFT		(0)

__xdata __at (0xdf11) uint8_t RF_DEVIATN;
#define RF_DEVIATN_OFF	0x11

#define RF_DEVIATN_DEVIATION_E_SHIFT		4
#define RF_DEVIATN_DEVIATION_M_SHIFT		0

__xdata __at (0xdf12) uint8_t RF_MCSM2;
#define RF_MCSM2_OFF	0x12
#define RF_MCSM2_RX_TIME_RSSI			(1 << 4)
#define RF_MCSM2_RX_TIME_QUAL			(1 << 3)
#define RF_MCSM2_RX_TIME_MASK			(0x7)
#define RF_MCSM2_RX_TIME_SHIFT			0
#define RF_MCSM2_RX_TIME_END_OF_PACKET		(7)

__xdata __at (0xdf13) uint8_t RF_MCSM1;
#define RF_MCSM1_OFF	0x13
#define RF_MCSM1_CCA_MODE_ALWAYS			(0 << 4)
#define RF_MCSM1_CCA_MODE_RSSI_BELOW			(1 << 4)
#define RF_MCSM1_CCA_MODE_UNLESS_RECEIVING		(2 << 4)
#define RF_MCSM1_CCA_MODE_RSSI_BELOW_UNLESS_RECEIVING	(3 << 4)
#define RF_MCSM1_RXOFF_MODE_IDLE			(0 << 2)
#define RF_MCSM1_RXOFF_MODE_FSTXON			(1 << 2)
#define RF_MCSM1_RXOFF_MODE_TX				(2 << 2)
#define RF_MCSM1_RXOFF_MODE_RX				(3 << 2)
#define RF_MCSM1_TXOFF_MODE_IDLE			(0 << 0)
#define RF_MCSM1_TXOFF_MODE_FSTXON			(1 << 0)
#define RF_MCSM1_TXOFF_MODE_TX				(2 << 0)
#define RF_MCSM1_TXOFF_MODE_RX				(3 << 0)

__xdata __at (0xdf14) uint8_t RF_MCSM0;
#define RF_MCSM0_OFF	0x14
#define RF_MCSM0_FS_AUTOCAL_NEVER		(0 << 4)
#define RF_MCSM0_FS_AUTOCAL_FROM_IDLE		(1 << 4)
#define RF_MCSM0_FS_AUTOCAL_TO_IDLE		(2 << 4)
#define RF_MCSM0_FS_AUTOCAL_TO_IDLE_EVERY_4	(3 << 4)
#define RF_MCSM0_MAGIC_3			(1 << 3)
#define RF_MCSM0_MAGIC_2			(1 << 2)
#define RF_MCSM0_CLOSE_IN_RX_0DB		(0 << 0)
#define RF_MCSM0_CLOSE_IN_RX_6DB		(1 << 0)
#define RF_MCSM0_CLOSE_IN_RX_12DB		(2 << 0)
#define RF_MCSM0_CLOSE_IN_RX_18DB		(3 << 0)

__xdata __at (0xdf15) uint8_t RF_FOCCFG;
#define RF_FOCCFG_OFF	0x15
#define RF_FOCCFG_FOC_BS_CS_GATE		(1 << 5)
#define RF_FOCCFG_FOC_PRE_K_1K			(0 << 3)
#define RF_FOCCFG_FOC_PRE_K_2K			(1 << 3)
#define RF_FOCCFG_FOC_PRE_K_3K			(2 << 3)
#define RF_FOCCFG_FOC_PRE_K_4K			(3 << 3)
#define RF_FOCCFG_FOC_POST_K_PRE_K		(0 << 2)
#define RF_FOCCFG_FOC_POST_K_PRE_K_OVER_2	(1 << 2)
#define RF_FOCCFG_FOC_LIMIT_0			(0 << 0)
#define RF_FOCCFG_FOC_LIMIT_BW_OVER_8		(1 << 0)
#define RF_FOCCFG_FOC_LIMIT_BW_OVER_4		(2 << 0)
#define RF_FOCCFG_FOC_LIMIT_BW_OVER_2		(3 << 0)

__xdata __at (0xdf16) uint8_t RF_BSCFG;
#define RF_BSCFG_OFF	0x16
#define RF_BSCFG_BS_PRE_K_1K			(0 << 6)
#define RF_BSCFG_BS_PRE_K_2K			(1 << 6)
#define RF_BSCFG_BS_PRE_K_3K			(2 << 6)
#define RF_BSCFG_BS_PRE_K_4K			(3 << 6)
#define RF_BSCFG_BS_PRE_KP_1KP			(0 << 4)
#define RF_BSCFG_BS_PRE_KP_2KP			(1 << 4)
#define RF_BSCFG_BS_PRE_KP_3KP			(2 << 4)
#define RF_BSCFG_BS_PRE_KP_4KP			(3 << 4)
#define RF_BSCFG_BS_POST_KI_PRE_KI		(0 << 3)
#define RF_BSCFG_BS_POST_KI_PRE_KI_OVER_2	(1 << 3)
#define RF_BSCFG_BS_POST_KP_PRE_KP		(0 << 2)
#define RF_BSCFG_BS_POST_KP_PRE_KP_OVER_2	(1 << 2)
#define RF_BSCFG_BS_LIMIT_0			(0 << 0)
#define RF_BSCFG_BS_LIMIT_3_125			(1 << 0)
#define RF_BSCFG_BS_LIMIT_6_25			(2 << 0)
#define RF_BSCFG_BS_LIMIT_12_5			(3 << 0)

__xdata __at (0xdf17) uint8_t RF_AGCCTRL2;
#define RF_AGCCTRL2_OFF	0x17

#define RF_AGCCTRL2_MAX_DVGA_GAIN_ALL		(0 << 6)
#define RF_AGCCTRL2_MAX_DVGA_GAIN_BUT_1		(1 << 6)
#define RF_AGCCTRL2_MAX_DVGA_GAIN_BUT_2		(2 << 6)
#define RF_AGCCTRL2_MAX_DVGA_GAIN_BUT_3		(3 << 6)
#define RF_AGCCTRL2_MAX_LNA_GAIN_0		(0 << 3)
#define RF_AGCCTRL2_MAX_LNA_GAIN_2_6		(1 << 3)
#define RF_AGCCTRL2_MAX_LNA_GAIN_6_1		(2 << 3)
#define RF_AGCCTRL2_MAX_LNA_GAIN_7_4		(3 << 3)
#define RF_AGCCTRL2_MAX_LNA_GAIN_9_2		(4 << 3)
#define RF_AGCCTRL2_MAX_LNA_GAIN_11_5		(5 << 3)
#define RF_AGCCTRL2_MAX_LNA_GAIN_14_6		(6 << 3)
#define RF_AGCCTRL2_MAX_LNA_GAIN_17_1		(7 << 3)
#define RF_AGCCTRL2_MAGN_TARGET_24dB		(0 << 0)
#define RF_AGCCTRL2_MAGN_TARGET_27dB		(1 << 0)
#define RF_AGCCTRL2_MAGN_TARGET_30dB		(2 << 0)
#define RF_AGCCTRL2_MAGN_TARGET_33dB		(3 << 0)
#define RF_AGCCTRL2_MAGN_TARGET_36dB		(4 << 0)
#define RF_AGCCTRL2_MAGN_TARGET_38dB		(5 << 0)
#define RF_AGCCTRL2_MAGN_TARGET_40dB		(6 << 0)
#define RF_AGCCTRL2_MAGN_TARGET_42dB		(7 << 0)

__xdata __at (0xdf18) uint8_t RF_AGCCTRL1;
#define RF_AGCCTRL1_OFF	0x18

#define RF_AGCCTRL1_AGC_LNA_PRIORITY_0		(0 << 6)
#define RF_AGCCTRL1_AGC_LNA_PRIORITY_1		(1 << 6)
#define RF_AGCCTRL1_CARRIER_SENSE_REL_THR_DISABLE	(0 << 4)
#define RF_AGCCTRL1_CARRIER_SENSE_REL_THR_6DB		(1 << 4)
#define RF_AGCCTRL1_CARRIER_SENSE_REL_THR_10DB		(2 << 4)
#define RF_AGCCTRL1_CARRIER_SENSE_REL_THR_14DB		(3 << 4)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_DISABLE	(0x8 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_7DB_BELOW	(0x9 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_6DB_BELOW	(0xa << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_5DB_BELOW	(0xb << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_4DB_BELOW	(0xc << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_3DB_BELOW	(0xd << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_2DB_BELOW	(0xe << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_1DB_BELOW	(0xf << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_0DB		(0x0 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_1DB_ABOVE	(0x1 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_2DB_ABOVE	(0x2 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_3DB_ABOVE	(0x3 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_4DB_ABOVE	(0x4 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_5DB_ABOVE	(0x5 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_6DB_ABOVE	(0x6 << 0)
#define RF_AGCCTRL1_CARRIER_SENSE_ABS_THR_7DB_ABOVE	(0x7 << 0)

__xdata __at (0xdf19) uint8_t RF_AGCCTRL0;
#define RF_AGCCTRL0_OFF	0x19

#define RF_AGCCTRL0_HYST_LEVEL_NONE		(0 << 6)
#define RF_AGCCTRL0_HYST_LEVEL_LOW		(1 << 6)
#define RF_AGCCTRL0_HYST_LEVEL_MEDIUM		(2 << 6)
#define RF_AGCCTRL0_HYST_LEVEL_HIGH		(3 << 6)
#define RF_AGCCTRL0_WAIT_TIME_8			(0 << 4)
#define RF_AGCCTRL0_WAIT_TIME_16		(1 << 4)
#define RF_AGCCTRL0_WAIT_TIME_24		(2 << 4)
#define RF_AGCCTRL0_WAIT_TIME_32		(3 << 4)
#define RF_AGCCTRL0_AGC_FREEZE_NORMAL		(0 << 2)
#define RF_AGCCTRL0_AGC_FREEZE_SYNC		(1 << 2)
#define RF_AGCCTRL0_AGC_FREEZE_MANUAL_ANALOG	(2 << 2)
#define RF_AGCCTRL0_AGC_FREEZE_MANUAL_BOTH	(3 << 2)
#define RF_AGCCTRL0_FILTER_LENGTH_8		(0 << 0)
#define RF_AGCCTRL0_FILTER_LENGTH_16		(1 << 0)
#define RF_AGCCTRL0_FILTER_LENGTH_32		(2 << 0)
#define RF_AGCCTRL0_FILTER_LENGTH_64		(3 << 0)

__xdata __at (0xdf1a) uint8_t RF_FREND1;
#define RF_FREND1_OFF	0x1a

#define RF_FREND1_LNA_CURRENT_SHIFT		6
#define RF_FREND1_LNA2MIX_CURRENT_SHIFT		4
#define RF_FREND1_LODIV_BUF_CURRENT_RX_SHIFT	2
#define RF_FREND1_MIX_CURRENT_SHIFT		0

__xdata __at (0xdf1b) uint8_t RF_FREND0;
#define RF_FREND0_OFF	0x1b

#define RF_FREND0_LODIV_BUF_CURRENT_TX_MASK	(0x3 << 4)
#define RF_FREND0_LODIV_BUF_CURRENT_TX_SHIFT	4
#define RF_FREND0_PA_POWER_MASK			(0x7)
#define RF_FREND0_PA_POWER_SHIFT		0

__xdata __at (0xdf1c) uint8_t RF_FSCAL3;
#define RF_FSCAL3_OFF	0x1c

__xdata __at (0xdf1d) uint8_t RF_FSCAL2;
#define RF_FSCAL2_OFF	0x1d

__xdata __at (0xdf1e) uint8_t RF_FSCAL1;
#define RF_FSCAL1_OFF	0x1e

__xdata __at (0xdf1f) uint8_t RF_FSCAL0;
#define RF_FSCAL0_OFF	0x1f

__xdata __at (0xdf23) uint8_t RF_TEST2;
#define RF_TEST2_OFF	0x23

#define RF_TEST2_NORMAL_MAGIC		0x88
#define RF_TEST2_RX_LOW_DATA_RATE_MAGIC	0x81

__xdata __at (0xdf24) uint8_t RF_TEST1;
#define RF_TEST1_OFF	0x24

#define RF_TEST1_TX_MAGIC		0x31
#define RF_TEST1_RX_LOW_DATA_RATE_MAGIC	0x35

__xdata __at (0xdf25) uint8_t RF_TEST0;
#define RF_TEST0_OFF	0x25

#define RF_TEST0_7_2_MASK		(0xfc)
#define RF_TEST0_VCO_SEL_CAL_EN		(1 << 1)
#define RF_TEST0_0_MASK			(1)

/* These are undocumented, and must be computed
 * using the provided tool.
 */
__xdata __at (0xdf27) uint8_t RF_PA_TABLE7;
#define RF_PA_TABLE7_OFF	0x27

__xdata __at (0xdf28) uint8_t RF_PA_TABLE6;
#define RF_PA_TABLE6_OFF	0x28

__xdata __at (0xdf29) uint8_t RF_PA_TABLE5;
#define RF_PA_TABLE5_OFF	0x29

__xdata __at (0xdf2a) uint8_t RF_PA_TABLE4;
#define RF_PA_TABLE4_OFF	0x2a

__xdata __at (0xdf2b) uint8_t RF_PA_TABLE3;
#define RF_PA_TABLE3_OFF	0x2b

__xdata __at (0xdf2c) uint8_t RF_PA_TABLE2;
#define RF_PA_TABLE2_OFF	0x2c

__xdata __at (0xdf2d) uint8_t RF_PA_TABLE1;
#define RF_PA_TABLE1_OFF	0x2d

__xdata __at (0xdf2e) uint8_t RF_PA_TABLE0;
#define RF_PA_TABLE0_OFF	0x2e

__xdata __at (0xdf36) uint8_t RF_PARTNUM;
#define RF_PARTNUM_OFF	0x36

__xdata __at (0xdf37) uint8_t RF_VERSION;
#define RF_VERSION_OFF	0x37

__xdata __at (0xdf38) uint8_t RF_FREQEST;
#define RF_FREQEST_OFF	0x38

__xdata __at (0xdf39) uint8_t RF_LQI;
#define RF_LQI_OFF	0x39

#define RF_LQI_CRC_OK			(1 << 7)
#define RF_LQI_LQI_EST_MASK		(0x7f)

__xdata __at (0xdf3a) uint8_t RF_RSSI;
#define RF_RSSI_OFF	0x3a

__xdata __at (0xdf3b) uint8_t RF_MARCSTATE;
#define RF_MARCSTATE_OFF	0x3b

#define RF_MARCSTATE_MASK		0x1f
#define RF_MARCSTATE_SLEEP		0x00
#define RF_MARCSTATE_IDLE		0x01
#define RF_MARCSTATE_VCOON_MC		0x03
#define RF_MARCSTATE_REGON_MC		0x04
#define RF_MARCSTATE_MANCAL		0x05
#define RF_MARCSTATE_VCOON		0x06
#define RF_MARCSTATE_REGON		0x07
#define RF_MARCSTATE_STARTCAL		0x08
#define RF_MARCSTATE_BWBOOST		0x09
#define RF_MARCSTATE_FS_LOCK		0x0a
#define RF_MARCSTATE_IFADCON		0x0b
#define RF_MARCSTATE_ENDCAL		0x0c
#define RF_MARCSTATE_RX			0x0d
#define RF_MARCSTATE_RX_END		0x0e
#define RF_MARCSTATE_RX_RST		0x0f
#define RF_MARCSTATE_TXRX_SWITCH	0x10
#define RF_MARCSTATE_RX_OVERFLOW	0x11
#define RF_MARCSTATE_FSTXON		0x12
#define RF_MARCSTATE_TX			0x13
#define RF_MARCSTATE_TX_END		0x14
#define RF_MARCSTATE_RXTX_SWITCH	0x15
#define RF_MARCSTATE_TX_UNDERFLOW	0x16


__xdata __at (0xdf3c) uint8_t RF_PKTSTATUS;
#define RF_PKTSTATUS_OFF	0x3c

#define RF_PKTSTATUS_CRC_OK		(1 << 7)
#define RF_PKTSTATUS_CS			(1 << 6)
#define RF_PKTSTATUS_PQT_REACHED	(1 << 5)
#define RF_PKTSTATUS_CCA		(1 << 4)
#define RF_PKTSTATUS_SFD		(1 << 3)

__xdata __at (0xdf3d) uint8_t RF_VCO_VC_DAC;
#define RF_VCO_VC_DAC_OFF	0x3d

/* AES engine */

__sfr __at 0xB1 ENCDI;
__sfr __at 0xB2 ENCDO;
__xdata __at (0xDFB1) volatile uint8_t ENCDIXADDR;
__xdata __at (0xDFB2) volatile uint8_t ENCDOXADDR;

__sfr __at 0xB3 ENCCCS;

#define ENCCCS_MODE_CBC		(0 << 4)
#define ENCCCS_MODE_CFB		(1 << 4)
#define ENCCCS_MODE_OFB		(2 << 4)
#define ENCCCS_MODE_CTR		(3 << 4)
#define ENCCCS_MODE_ECB		(4 << 4)
#define ENCCCS_MODE_CBC_MAC	(5 << 4)
#define ENCCCS_RDY		(1 << 3)
#define ENCCCS_CMD_ENCRYPT	(0 << 1)
#define ENCCCS_CMD_DECRYPT	(1 << 1)
#define ENCCCS_CMD_LOAD_KEY	(2 << 1)
#define ENCCCS_CMD_LOAD_IV	(3 << 1)
#define ENCCCS_START		(1 << 0)

#endif
