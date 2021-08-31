/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#include "evkmimxrt1170_sdram_ini_dcd.h"

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.xip_board"
#endif

#if defined(XIP_BOOT_HEADER_ENABLE) && (XIP_BOOT_HEADER_ENABLE == 1)
#if defined(XIP_BOOT_HEADER_DCD_ENABLE) && (XIP_BOOT_HEADER_DCD_ENABLE == 1)
#if defined(__CC_ARM) || defined(__ARMCC_VERSION) || defined(__GNUC__)
__attribute__((section(".boot_hdr.dcd_data"), used))
#elif defined(__ICCARM__)
#pragma location = ".boot_hdr.dcd_data"
#endif

/* COMMENTS BELOW ARE USED AS SETTINGS FOR DCD DATA */
const uint8_t dcd_data[] = {
    /*0000*/ 0xD2, 0x05, 0x08, 0x41, 0xCC, 0x04, 0x5C, 0x04, 0x40, 0xCC, 0x02, 0x00, 0x00, 0x00, 0x06, 0x02,
    /*0010*/ 0x40, 0x0E, 0x80, 0x10, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x14, 0x00, 0x00, 0x00, 0x00,
    /*0020*/ 0x40, 0x0E, 0x80, 0x18, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x1C, 0x00, 0x00, 0x00, 0x00,
    /*0030*/ 0x40, 0x0E, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x24, 0x00, 0x00, 0x00, 0x00,
    /*0040*/ 0x40, 0x0E, 0x80, 0x28, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x2C, 0x00, 0x00, 0x00, 0x00,
    /*0050*/ 0x40, 0x0E, 0x80, 0x30, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x34, 0x00, 0x00, 0x00, 0x00,
    /*0060*/ 0x40, 0x0E, 0x80, 0x38, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x3C, 0x00, 0x00, 0x00, 0x00,
    /*0070*/ 0x40, 0x0E, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x44, 0x00, 0x00, 0x00, 0x00,
    /*0080*/ 0x40, 0x0E, 0x80, 0x48, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x4C, 0x00, 0x00, 0x00, 0x00,
    /*0090*/ 0x40, 0x0E, 0x80, 0x50, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x54, 0x00, 0x00, 0x00, 0x00,
    /*00a0*/ 0x40, 0x0E, 0x80, 0x58, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x5C, 0x00, 0x00, 0x00, 0x00,
    /*00b0*/ 0x40, 0x0E, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x64, 0x00, 0x00, 0x00, 0x00,
    /*00c0*/ 0x40, 0x0E, 0x80, 0x68, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x6C, 0x00, 0x00, 0x00, 0x00,
    /*00d0*/ 0x40, 0x0E, 0x80, 0x70, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x74, 0x00, 0x00, 0x00, 0x00,
    /*00e0*/ 0x40, 0x0E, 0x80, 0x78, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x7C, 0x00, 0x00, 0x00, 0x00,
    /*00f0*/ 0x40, 0x0E, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x84, 0x00, 0x00, 0x00, 0x00,
    /*0100*/ 0x40, 0x0E, 0x80, 0x88, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x8C, 0x00, 0x00, 0x00, 0x00,
    /*0110*/ 0x40, 0x0E, 0x80, 0x90, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x94, 0x00, 0x00, 0x00, 0x00,
    /*0120*/ 0x40, 0x0E, 0x80, 0x98, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0x9C, 0x00, 0x00, 0x00, 0x00,
    /*0130*/ 0x40, 0x0E, 0x80, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xA4, 0x00, 0x00, 0x00, 0x00,
    /*0140*/ 0x40, 0x0E, 0x80, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xAC, 0x00, 0x00, 0x00, 0x10,
    /*0150*/ 0x40, 0x0E, 0x80, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xB4, 0x00, 0x00, 0x00, 0x00,
    /*0160*/ 0x40, 0x0E, 0x80, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xBC, 0x00, 0x00, 0x00, 0x00,
    /*0170*/ 0x40, 0x0E, 0x80, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xC4, 0x00, 0x00, 0x00, 0x00,
    /*0180*/ 0x40, 0x0E, 0x80, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xCC, 0x00, 0x00, 0x00, 0x00,
    /*0190*/ 0x40, 0x0E, 0x80, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xD4, 0x00, 0x00, 0x00, 0x00,
    /*01a0*/ 0x40, 0x0E, 0x80, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xDC, 0x00, 0x00, 0x00, 0x00,
    /*01b0*/ 0x40, 0x0E, 0x80, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xE4, 0x00, 0x00, 0x00, 0x00,
    /*01c0*/ 0x40, 0x0E, 0x80, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xEC, 0x00, 0x00, 0x00, 0x00,
    /*01d0*/ 0x40, 0x0E, 0x80, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xF4, 0x00, 0x00, 0x00, 0x00,
    /*01e0*/ 0x40, 0x0E, 0x80, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x80, 0xFC, 0x00, 0x00, 0x00, 0x00,
    /*01f0*/ 0x40, 0x0E, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00,
    /*0200*/ 0x40, 0x0E, 0x81, 0x08, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x82, 0x54, 0x00, 0x00, 0x00, 0x08,
    /*0210*/ 0x40, 0x0E, 0x82, 0x58, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x5C, 0x00, 0x00, 0x00, 0x08,
    /*0220*/ 0x40, 0x0E, 0x82, 0x60, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x64, 0x00, 0x00, 0x00, 0x08,
    /*0230*/ 0x40, 0x0E, 0x82, 0x68, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x6C, 0x00, 0x00, 0x00, 0x08,
    /*0240*/ 0x40, 0x0E, 0x82, 0x70, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x74, 0x00, 0x00, 0x00, 0x08,
    /*0250*/ 0x40, 0x0E, 0x82, 0x78, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x7C, 0x00, 0x00, 0x00, 0x08,
    /*0260*/ 0x40, 0x0E, 0x82, 0x80, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x84, 0x00, 0x00, 0x00, 0x08,
    /*0270*/ 0x40, 0x0E, 0x82, 0x88, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x8C, 0x00, 0x00, 0x00, 0x08,
    /*0280*/ 0x40, 0x0E, 0x82, 0x90, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x94, 0x00, 0x00, 0x00, 0x08,
    /*0290*/ 0x40, 0x0E, 0x82, 0x98, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0x9C, 0x00, 0x00, 0x00, 0x08,
    /*02a0*/ 0x40, 0x0E, 0x82, 0xA0, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xA4, 0x00, 0x00, 0x00, 0x08,
    /*02b0*/ 0x40, 0x0E, 0x82, 0xA8, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xAC, 0x00, 0x00, 0x00, 0x08,
    /*02c0*/ 0x40, 0x0E, 0x82, 0xB0, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xB4, 0x00, 0x00, 0x00, 0x08,
    /*02d0*/ 0x40, 0x0E, 0x82, 0xB8, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xBC, 0x00, 0x00, 0x00, 0x08,
    /*02e0*/ 0x40, 0x0E, 0x82, 0xC0, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xC4, 0x00, 0x00, 0x00, 0x08,
    /*02f0*/ 0x40, 0x0E, 0x82, 0xC8, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xCC, 0x00, 0x00, 0x00, 0x08,
    /*0300*/ 0x40, 0x0E, 0x82, 0xD0, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xD4, 0x00, 0x00, 0x00, 0x08,
    /*0310*/ 0x40, 0x0E, 0x82, 0xD8, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xDC, 0x00, 0x00, 0x00, 0x08,
    /*0320*/ 0x40, 0x0E, 0x82, 0xE0, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xE4, 0x00, 0x00, 0x00, 0x08,
    /*0330*/ 0x40, 0x0E, 0x82, 0xE8, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xEC, 0x00, 0x00, 0x00, 0x08,
    /*0340*/ 0x40, 0x0E, 0x82, 0xF0, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xF4, 0x00, 0x00, 0x00, 0x08,
    /*0350*/ 0x40, 0x0E, 0x82, 0xF8, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x82, 0xFC, 0x00, 0x00, 0x00, 0x08,
    /*0360*/ 0x40, 0x0E, 0x83, 0x00, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x83, 0x04, 0x00, 0x00, 0x00, 0x08,
    /*0370*/ 0x40, 0x0E, 0x83, 0x08, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x83, 0x0C, 0x00, 0x00, 0x00, 0x08,
    /*0380*/ 0x40, 0x0E, 0x83, 0x10, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x83, 0x14, 0x00, 0x00, 0x00, 0x08,
    /*0390*/ 0x40, 0x0E, 0x83, 0x18, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x83, 0x1C, 0x00, 0x00, 0x00, 0x08,
    /*03a0*/ 0x40, 0x0E, 0x83, 0x20, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x83, 0x24, 0x00, 0x00, 0x00, 0x08,
    /*03b0*/ 0x40, 0x0E, 0x83, 0x28, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x83, 0x2C, 0x00, 0x00, 0x00, 0x08,
    /*03c0*/ 0x40, 0x0E, 0x83, 0x30, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x83, 0x34, 0x00, 0x00, 0x00, 0x08,
    /*03d0*/ 0x40, 0x0E, 0x83, 0x38, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x83, 0x3C, 0x00, 0x00, 0x00, 0x08,
    /*03e0*/ 0x40, 0x0E, 0x84, 0x00, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x84, 0x04, 0x00, 0x00, 0x00, 0x08,
    /*03f0*/ 0x40, 0x0E, 0x84, 0x08, 0x00, 0x00, 0x00, 0x08, 0x40, 0x0E, 0x84, 0x0C, 0x00, 0x00, 0x00, 0x08,
    /*0400*/ 0x40, 0x0D, 0x40, 0x00, 0x10, 0x00, 0x00, 0x04, 0x40, 0x0D, 0x40, 0x08, 0x00, 0x00, 0x00, 0x81,
    /*0410*/ 0x40, 0x0D, 0x40, 0x0C, 0x00, 0x00, 0x00, 0x81, 0x40, 0x0D, 0x40, 0x10, 0x80, 0x00, 0x00, 0x1D,
    /*0420*/ 0x40, 0x0D, 0x40, 0x40, 0x00, 0x00, 0x0F, 0x32, 0x40, 0x0D, 0x40, 0x44, 0x00, 0x77, 0x2A, 0x22,
    /*0430*/ 0x40, 0x0D, 0x40, 0x48, 0x00, 0x01, 0x0A, 0x0D, 0x40, 0x0D, 0x40, 0x4C, 0x21, 0x21, 0x04, 0x08,
    /*0440*/ 0x40, 0x0D, 0x40, 0x90, 0x80, 0x00, 0x00, 0x00, 0x40, 0x0D, 0x40, 0x94, 0x00, 0x00, 0x00, 0x02,
    /*0450*/ 0x40, 0x0D, 0x40, 0x98, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0D, 0x40, 0x9C, 0xA5, 0x5A, 0x00, 0x0F,
    /*0460*/ 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00,
    /*0470*/ 0xC0, 0x00, 0x04, 0x00, 0xCC, 0x00, 0x14, 0x04, 0x40, 0x0D, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x03,
    /*0480*/ 0x40, 0x0D, 0x40, 0x9C, 0xA5, 0x5A, 0x00, 0x0C, 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00,
    /*0490*/ 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0xCC, 0x00, 0x14, 0x04,
    /*04a0*/ 0x40, 0x0D, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x03, 0x40, 0x0D, 0x40, 0x9C, 0xA5, 0x5A, 0x00, 0x0C,
    /*04b0*/ 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00,
    /*04c0*/ 0xC0, 0x00, 0x04, 0x00, 0xCC, 0x00, 0x1C, 0x04, 0x40, 0x0D, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x03,
    /*04d0*/ 0x40, 0x0D, 0x40, 0xA0, 0x00, 0x00, 0x00, 0x33, 0x40, 0x0D, 0x40, 0x9C, 0xA5, 0x5A, 0x00, 0x0A,
    /*04e0*/ 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00,
    /*04f0*/ 0xC0, 0x00, 0x04, 0x00, 0xCC, 0x00, 0x14, 0x04, 0x40, 0x0D, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x03,
    /*0500*/ 0x40, 0x0D, 0x40, 0x4C, 0x21, 0x21, 0x04, 0x09,
};
/* BE CAREFUL MODIFYING THIS SETTINGS - IT IS YAML SETTINGS FOR TOOLS */

#else
const uint8_t dcd_data[] = {0x00};
#endif /* XIP_BOOT_HEADER_DCD_ENABLE */
#endif /* XIP_BOOT_HEADER_ENABLE */