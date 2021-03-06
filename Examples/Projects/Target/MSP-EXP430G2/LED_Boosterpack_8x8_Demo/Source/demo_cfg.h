/******************************************************************************
* Copyright (c) 2012-2013, Leo Hendrawan
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*    * Redistributions of source code must retain the above copyright
*      notice, this list of conditions and the following disclaimer.
*    * Redistributions in binary form must reproduce the above copyright
*      notice, this list of conditions and the following disclaimer in the
*      documentation and/or other materials provided with the distribution.
*    * Neither the name of the MSS PROJECT nor the names of its contributors
*      may be used to endorse or promote products derived from this software
*      without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
* THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
* PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE MSS PROJECT OR ITS
* CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
* OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
* ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************************/

/**************************************************************************//**
* 
* @file     demo_cfg.h
* 
* @brief    MSP430 Launchpad LED Boosterpack MSS demo configuration
*           header file
* 
* @version  0.2.1
* 
* @author   Leo Hendrawan
*
* @remark
* 
******************************************************************************/

#ifndef _DEMO_CFG_H_
#define _DEMO_CFG_H_

//*****************************************************************************
// Include section
//*****************************************************************************


//*****************************************************************************
// Global variable declarations 
//*****************************************************************************


//*****************************************************************************
// Macros (defines) and data types 
//*****************************************************************************

// text display data - see led_matrix.h for character definitions
#define TEXT_DISPLAY_DATA  \
{ \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_TI_LOGO, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_M, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_S, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_S, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_O, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_N, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_M, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_S, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_P, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_4, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_3, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_0, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_G, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_2, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_X, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_X, \
	LED_MATRIX_CHAR_BLANK, \
	LED_MATRIX_CHAR_BLANK \
}

// animation data
#define ANIMATION_DATA \
{ \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x00}, 100}, \
    {{0x00, 0x01, 0x00, 0x01, 0x03, 0x07, 0x01, 0x00}, 100}, \
    {{0x00, 0x03, 0x01, 0x03, 0x07, 0x0F, 0x03, 0x01}, 100}, \
    {{0x01, 0x07, 0x03, 0x07, 0x0F, 0x1F, 0x07, 0x03}, 100}, \
    {{0x03, 0x0E, 0x07, 0x0F, 0x1F, 0x3F, 0x0F, 0x06}, 100}, \
    {{0x07, 0x1C, 0x0F, 0x1F, 0x3E, 0x7E, 0x1E, 0x0C}, 100}, \
    {{0x08, 0x38, 0x1F, 0x3F, 0x7C, 0xFC, 0x3C, 0x18}, 2000}, \
    {{0x10, 0x70, 0x3E, 0x7E, 0xF8, 0xF8, 0x78, 0x30}, 100}, \
    {{0x20, 0xE0, 0x7C, 0xFC, 0xF0, 0xF0, 0xF0, 0x60}, 100}, \
    {{0x40, 0xC0, 0xF8, 0xF8, 0xE0, 0xE0, 0xE0, 0xC0}, 100}, \
    {{0x80, 0x80, 0xF0, 0xF0, 0xC0, 0xC0, 0xC0, 0x80}, 100}, \
    {{0x00, 0x00, 0xE0, 0xE0, 0x80, 0x80, 0x80, 0x00}, 100}, \
    {{0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x7E, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0xFC, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0xF8, 0x7E, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00}, 100}, \
    {{0xF0, 0xFC, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00}, 100}, \
    {{0xE0, 0xF8, 0x7E, 0x1F, 0x07, 0x01, 0x00, 0x00}, 100}, \
    {{0xC0, 0xF0, 0xFC, 0x3F, 0x0F, 0x03, 0x00, 0x00}, 100}, \
    {{0x80, 0xE0, 0xF8, 0x7E, 0x1F, 0x07, 0x01, 0x00}, 100}, \
    {{0x00, 0xC0, 0xF0, 0xFC, 0x3F, 0x0F, 0x03, 0x00}, 100}, \
    {{0x00, 0x80, 0xE0, 0xF8, 0x7E, 0x1F, 0x07, 0x01}, 100}, \
    {{0x00, 0x00, 0xC0, 0xF0, 0xFC, 0x3F, 0x0F, 0x03}, 100}, \
    {{0x00, 0x00, 0x80, 0xE0, 0xF8, 0x7E, 0x1F, 0x07}, 100}, \
    {{0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0x3F, 0x0F}, 100}, \
    {{0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0x7E, 0x1F}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0x3F}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 500}, \
 \
    {{0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x7E, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x3F, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x1F, 0x7E, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00}, 100}, \
    {{0x0F, 0x3F, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x00}, 100}, \
    {{0x07, 0x1F, 0x7E, 0xF8, 0xE0, 0x80, 0x00, 0x00}, 100}, \
    {{0x03, 0x0F, 0x3F, 0xFC, 0xF0, 0xC0, 0x00, 0x00}, 100}, \
    {{0x01, 0x07, 0x1F, 0x7E, 0xF8, 0xE0, 0x80, 0x00}, 100}, \
    {{0x00, 0x03, 0x0F, 0x3F, 0xFC, 0xF0, 0xC0, 0x00}, 100}, \
    {{0x00, 0x01, 0x07, 0x1F, 0x7E, 0xF8, 0xE0, 0x80}, 100}, \
    {{0x00, 0x00, 0x03, 0x0F, 0x3F, 0xFC, 0xF0, 0xC0}, 100}, \
    {{0x00, 0x00, 0x01, 0x07, 0x1F, 0x7E, 0xF8, 0xE0}, 100}, \
    {{0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0xFC, 0xF0}, 100}, \
    {{0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x7E, 0xF8}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0xFC}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x7E}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80}, 100}, \
    {{0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0}, 100}, \
    {{0x07, 0x07, 0x07, 0x00, 0x00, 0xE0, 0xE0, 0xE0}, 100}, \
    {{0x0F, 0x0F, 0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0}, 500}, \
 \
    {{0x1E, 0x1E, 0x1E, 0x1E, 0x78, 0x78, 0x78, 0x78}, 100}, \
    {{0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C}, 100}, \
    {{0x78, 0x78, 0x78, 0x78, 0x1E, 0x1E, 0x1E, 0x1E}, 100}, \
    {{0xF0, 0xF0, 0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F}, 500}, \
 \
    {{0x00, 0xF0, 0xF0, 0xFF, 0xFF, 0x0F, 0x0F, 0x00}, 100}, \
    {{0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00}, 100}, \
    {{0x00, 0x0F, 0x0F, 0xFF, 0xFF, 0xF0, 0xF0, 0x00}, 100}, \
    {{0x0F, 0x0F, 0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0}, 500}, \
 \
    {{0x1E, 0x1E, 0x1E, 0x1E, 0x78, 0x78, 0x78, 0x78}, 100}, \
    {{0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C}, 100}, \
    {{0x78, 0x78, 0x78, 0x78, 0x1E, 0x1E, 0x1E, 0x1E}, 100}, \
    {{0xF0, 0xF0, 0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F}, 500}, \
 \
    {{0x00, 0xF0, 0xF0, 0xFF, 0xFF, 0x0F, 0x0F, 0x00}, 100}, \
    {{0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00}, 100}, \
    {{0x00, 0x0F, 0x0F, 0xFF, 0xFF, 0xF0, 0xF0, 0x00}, 100}, \
    {{0x0F, 0x0F, 0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0}, 500}, \
 \
    {{0x07, 0x07, 0x07, 0x00, 0x00, 0xE0, 0xE0, 0xE0}, 100}, \
    {{0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0}, 100}, \
    {{0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00}, 100}, \
    {{0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00}, 100}, \
    {{0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00}, 100}, \
    {{0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00}, 100}, \
    {{0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01}, 500}, \
 \
    {{0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03}, 100}, \
    {{0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07}, 100}, \
    {{0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F}, 100}, \
    {{0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F}, 100}, \
    {{0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F}, 100}, \
    {{0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 500}, \
 \
    {{0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE}, 100}, \
    {{0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC}, 100}, \
    {{0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8}, 100}, \
    {{0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0}, 100}, \
    {{0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0}, 100}, \
    {{0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0}, 100}, \
    {{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}, 500}, \
 \
    {{0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0}, 100}, \
    {{0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0xE0}, 100}, \
    {{0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xF0}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xF8}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xFC}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFE}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, 500}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 500}, \
 \
    {{0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E}, 100}, \
    {{0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C}, 100}, \
    {{0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18}, 100}, \
    {{0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00}, 100}, \
    {{0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0x3C, 0x24, 0x24, 0x3C, 0x00, 0x00}, 100}, \
    {{0x00, 0x7E, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x00}, 100}, \
    {{0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF}, 100}, \
    {{0x00, 0x7E, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x00}, 100}, \
    {{0x00, 0x00, 0x3C, 0x24, 0x24, 0x3C, 0x00, 0x00}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0x3C, 0x24, 0x24, 0x3C, 0x00, 0x00}, 100}, \
    {{0x00, 0x7E, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x00}, 100}, \
    {{0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF}, 100}, \
    {{0x00, 0x7E, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x00}, 100}, \
    {{0x00, 0x00, 0x3C, 0x24, 0x24, 0x3C, 0x00, 0x00}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00}, 100}, \
    {{0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 500}, \
    {{0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80}, 100}, \
    {{0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80}, 100}, \
    {{0x01, 0x01, 0x01, 0x00, 0x00, 0x80, 0x80, 0x80}, 100}, \
    {{0x01, 0x01, 0x01, 0x01, 0x80, 0x80, 0x80, 0x80}, 100}, \
    {{0x01, 0x01, 0x01, 0x81, 0x81, 0x80, 0x80, 0x80}, 100}, \
    {{0x01, 0x01, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80}, 100}, \
    {{0x01, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80}, 100}, \
    {{0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81}, 100}, \
    {{0xC1, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x83}, 100}, \
    {{0xE1, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x87}, 100}, \
    {{0xF1, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x8F}, 100}, \
    {{0xF9, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x9F}, 100}, \
    {{0xFD, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xBF}, 100}, \
    {{0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF}, 100}, \
    {{0xFF, 0x83, 0x81, 0x81, 0x81, 0x81, 0xC1, 0xFF}, 100}, \
    {{0xFF, 0x83, 0x83, 0x81, 0x81, 0xC1, 0xC1, 0xFF}, 100}, \
    {{0xFF, 0x83, 0x83, 0x83, 0xC1, 0xC1, 0xC1, 0xFF}, 100}, \
    {{0xFF, 0x83, 0x83, 0xC3, 0xC3, 0xC1, 0xC1, 0xFF}, 100}, \
    {{0xFF, 0x83, 0xC3, 0xC3, 0xC3, 0xC3, 0xC1, 0xFF}, 100}, \
    {{0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF}, 100}, \
    {{0xFF, 0xE3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC7, 0xFF}, 100}, \
    {{0xFF, 0xF3, 0xC3, 0xC3, 0xC3, 0xC3, 0xCF, 0xFF}, 100}, \
    {{0xFF, 0xFB, 0xC3, 0xC3, 0xC3, 0xC3, 0xDF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xC7, 0xC3, 0xC3, 0xE3, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xC7, 0xC7, 0xE3, 0xE3, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xC7, 0xE7, 0xE7, 0xE3, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xF7, 0xE7, 0xE7, 0xEF, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xEF, 0xF7, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 1000}, \
 \
    {{0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE}, 100}, \
    {{0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC}, 100}, \
    {{0x1F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF8}, 100}, \
    {{0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0}, 100}, \
    {{0x07, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0}, 100}, \
    {{0x03, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0}, 100}, \
    {{0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x80}, 100}, \
    {{0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x3F, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0xFC, 0xFC, 0x3F, 0x3F, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0xF0, 0xF0, 0x0F, 0x0F, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0xE0, 0xE0, 0x07, 0x07, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0xC0, 0xC0, 0x03, 0x03, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0x80, 0x80, 0x01, 0x01, 0x00, 0x00}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x40}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x40, 0x40}, 100}, \
    {{0x00, 0x00, 0x00, 0x80, 0x00, 0x40, 0x40, 0x20}, 100}, \
    {{0x00, 0x00, 0x80, 0x00, 0x40, 0x40, 0x20, 0x20}, 100}, \
    {{0x00, 0x80, 0x00, 0x40, 0x40, 0x20, 0x20, 0x30}, 100}, \
    {{0x80, 0x00, 0x40, 0x40, 0x20, 0x20, 0x30, 0x10}, 100}, \
    {{0x80, 0x40, 0x40, 0x20, 0x20, 0x30, 0x10, 0x18}, 100}, \
    {{0xC0, 0x40, 0x20, 0x20, 0x30, 0x10, 0x18, 0x18}, 100}, \
    {{0xC0, 0x60, 0x20, 0x30, 0x10, 0x18, 0x18, 0x0C}, 100}, \
    {{0xE0, 0x60, 0x30, 0x10, 0x18, 0x18, 0x0C, 0x0C}, 100}, \
    {{0xE0, 0x70, 0x30, 0x18, 0x18, 0x0C, 0x0C, 0x0E}, 100}, \
    {{0xF0, 0x70, 0x38, 0x18, 0x0C, 0x0C, 0x0E, 0x06}, 100}, \
    {{0xF0, 0x78, 0x38, 0x1C, 0x0C, 0x0E, 0x06, 0x07}, 100}, \
    {{0xF8, 0x78, 0x3C, 0x1C, 0x0E, 0x06, 0x07, 0x07}, 100}, \
    {{0xF8, 0x7C, 0x3C, 0x1E, 0x0E, 0x07, 0x07, 0x03}, 100}, \
    {{0xFC, 0x7C, 0x3E, 0x1E, 0x0F, 0x07, 0x03, 0x03}, 100}, \
    {{0xFC, 0x7E, 0x3E, 0x1F, 0x0F, 0x07, 0x03, 0x03}, 100}, \
    {{0xFE, 0x7E, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01}, 100}, \
    {{0xFE, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01}, 100}, \
    {{0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01}, 1000}, \
 \
    {{0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x81}, 100}, \
    {{0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x83, 0xC1}, 100}, \
    {{0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x87, 0xC3, 0xE1}, 100}, \
    {{0xFF, 0x7F, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1}, 100}, \
    {{0xFF, 0x7F, 0x3F, 0x9F, 0xCF, 0xE7, 0xF3, 0xF9}, 100}, \
    {{0xFF, 0x7F, 0xBF, 0xDF, 0xEF, 0xF7, 0xFB, 0xFD}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 1000}, \
 \
    {{0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x1F, 0x1F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x0F, 0x0F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x07, 0x07, 0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF}, 100}, \
    {{0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01}, 100}, \
    {{0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01}, 100}, \
    {{0x40, 0xA0, 0x40, 0x00, 0x00, 0x05, 0x02, 0x05}, 100}, \
    {{0x50, 0xA0, 0x50, 0xA0, 0x0A, 0x05, 0x0A, 0x05}, 100}, \
    {{0x50, 0xA8, 0x50, 0xBD, 0x5A, 0x15, 0x0A, 0x15}, 100}, \
    {{0x54, 0xA8, 0x7E, 0xBD, 0x7E, 0xBD, 0x2A, 0x15}, 100}, \
    {{0x54, 0xFF, 0x7E, 0xFF, 0x7E, 0xFF, 0x7E, 0x55}, 100}, \
 \
    {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 1000}, \
 \
    {{0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00}, 100}, \
    {{0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00}, 100}, \
    {{0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07}, 100}, \
    {{0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F}, 100}, \
    {{0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F}, 100}, \
    {{0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F}, 100}, \
    {{0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F}, 100}, \
    {{0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF}, 100}, \
    {{0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF}, 100}, \
    {{0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 1000}, \
    {{0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F}, 100}, \
    {{0xFC, 0xFC, 0xFC, 0xFC, 0x3F, 0x3F, 0x3F, 0x3F}, 100}, \
    {{0xF8, 0xF8, 0xF8, 0xF8, 0x1F, 0x1F, 0x1F, 0x1F}, 100}, \
    {{0xF0, 0xF0, 0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F}, 100}, \
    {{0xE0, 0xE0, 0xE0, 0xE0, 0x07, 0x07, 0x07, 0x07}, 100}, \
    {{0xC0, 0xC0, 0xC0, 0xC0, 0x03, 0x03, 0x03, 0x03}, 100}, \
    {{0x80, 0x80, 0x80, 0x80, 0x01, 0x01, 0x01, 0x01}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
 \
    {{0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC}, 100}, \
    {{0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC}, 100}, \
    {{0x33, 0x33, 0x33, 0x00, 0x00, 0xCC, 0xCC, 0xCC}, 100}, \
    {{0x33, 0x33, 0x33, 0x33, 0xCC, 0xCC, 0xCC, 0xCC}, 100}, \
    {{0x33, 0x33, 0x33, 0xFF, 0xFF, 0xCC, 0xCC, 0xCC}, 100}, \
    {{0x33, 0x33, 0xFF, 0xFF, 0xFF, 0xFF, 0xCC, 0xCC}, 100}, \
    {{0x33, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCC}, 100}, \
    {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, 1000}, \
    {{0xFE, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F}, 100}, \
    {{0xFC, 0x3F, 0xFC, 0x3F, 0xFC, 0xCF, 0xFC, 0x3F}, 100}, \
    {{0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F}, 100}, \
    {{0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F}, 100}, \
    {{0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07}, 100}, \
    {{0xC0, 0x03, 0xC0, 0x03, 0xC0, 0x03, 0xC0, 0x03}, 100}, \
    {{0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01}, 100}, \
 \
    {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 1000}, \
}

// buzzer tone data - see buzzer.h for buzzer tone definitions
#define BUZZER_TONE_DATA  \
{                         \
    {A3_TICK_CNT,  475},  \
    {PAUSE,        25},   \
    {A3_TICK_CNT,  475},  \
    {PAUSE,        25},   \
    {A3_TICK_CNT,  475},  \
    {PAUSE,        25},   \
    {F3_TICK_CNT,  375},  \
    {C4_TICK_CNT,  125},  \
    {A3_TICK_CNT,  500},  \
    {F3_TICK_CNT,  375},  \
    {C4_TICK_CNT,  125},  \
    {A3_TICK_CNT,  1000}, \
    {E4_TICK_CNT,  475},  \
    {PAUSE,        25},   \
    {E4_TICK_CNT,  475},  \
    {PAUSE,        25},   \
    {E4_TICK_CNT,  475},  \
    {PAUSE,        25},   \
    {F4_TICK_CNT,  375},  \
    {C4_TICK_CNT,  125},  \
    {Ab3_TICK_CNT, 500},  \
    {F3_TICK_CNT,  375},  \
    {C4_TICK_CNT,  125},  \
    {A3_TICK_CNT,  1000}, \
    {A4_TICK_CNT,  475},  \
    {PAUSE,        25},   \
    {A3_TICK_CNT,  350},  \
    {PAUSE,        25},   \
    {A3_TICK_CNT,  125},  \
    {A4_TICK_CNT,  475},  \
    {PAUSE,        25},   \
    {Ab4_TICK_CNT, 375},  \
    {G4_TICK_CNT,  125},  \
    {Gb4_TICK_CNT, 85},   \
    {F4_TICK_CNT,  85},   \
    {Gb4_TICK_CNT, 85},   \
    {PAUSE,        250},  \
    {Bb3_TICK_CNT, 250},  \
    {Eb4_TICK_CNT, 500},  \
    {D4_TICK_CNT,  375},  \
    {Db4_TICK_CNT, 125},  \
    {C4_TICK_CNT,  85},   \
    {B3_TICK_CNT,  85},   \
    {C4_TICK_CNT,  85},   \
    {PAUSE,        250},  \
    {F3_TICK_CNT,  250},  \
    {Ab3_TICK_CNT, 500},  \
    {F3_TICK_CNT,  375},  \
    {C4_TICK_CNT,  125},  \
    {A3_TICK_CNT,  500},  \
    {F3_TICK_CNT,  375},  \
    {C4_TICK_CNT,  125},  \
    {A3_TICK_CNT,  1000}, \
    {PAUSE,        2000}, \
  }



//*****************************************************************************
// External function declarations
//*****************************************************************************


#endif /* _DEMO_CFG_H_*/
