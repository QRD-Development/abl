/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided
 *  with the distribution.
 *   * Neither the name of The Linux Foundation nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef __OEM_PUBLIC_KEY_H__
#define __OEM_PUBLIC_KEY_H__

/**
 * Internal builds use TestKeyRSA4096Public
 * OEM should replace this Array with public key used to sign boot.img
 * avbtool extract_public_key  --key KEY --output OUTPUT
 */
static const char OEMPublicKey[] = {
    0x00, 0x00, 0x10, 0x00, 0x55, 0xd9, 0x04, 0xad, 0xd8, 0x04, 0xaf, 0xe3,
    0xd3, 0x84, 0x6c, 0x7e, 0x0d, 0x89, 0x3d, 0xc2, 0x8c, 0xd3, 0x12, 0x55,
    0xe9, 0x62, 0xc9, 0xf1, 0x0f, 0x5e, 0xcc, 0x16, 0x72, 0xab, 0x44, 0x7c,
    0x2c, 0x65, 0x4a, 0x94, 0xb5, 0x16, 0x2b, 0x00, 0xbb, 0x06, 0xef, 0x13,
    0x07, 0x53, 0x4c, 0xf9, 0x64, 0xb9, 0x28, 0x7a, 0x1b, 0x84, 0x98, 0x88,
    0xd8, 0x67, 0xa4, 0x23, 0xf9, 0xa7, 0x4b, 0xdc, 0x4a, 0x0f, 0xf7, 0x3a,
    0x18, 0xae, 0x54, 0xa8, 0x15, 0xfe, 0xb0, 0xad, 0xac, 0x35, 0xda, 0x3b,
    0xad, 0x27, 0xbc, 0xaf, 0xe8, 0xd3, 0x2f, 0x37, 0x34, 0xd6, 0x51, 0x2b,
    0x6c, 0x5a, 0x27, 0xd7, 0x96, 0x06, 0xaf, 0x6b, 0xb8, 0x80, 0xca, 0xfa,
    0x30, 0xb4, 0xb1, 0x85, 0xb3, 0x4d, 0xaa, 0xaa, 0xc3, 0x16, 0x34, 0x1a,
    0xb8, 0xe7, 0xc7, 0xfa, 0xf9, 0x09, 0x77, 0xab, 0x97, 0x93, 0xeb, 0x44,
    0xae, 0xcf, 0x20, 0xbc, 0xf0, 0x80, 0x11, 0xdb, 0x23, 0x0c, 0x47, 0x71,
    0xb9, 0x6d, 0xd6, 0x7b, 0x60, 0x47, 0x87, 0x16, 0x56, 0x93, 0xb7, 0xc2,
    0x2a, 0x9a, 0xb0, 0x4c, 0x01, 0x0c, 0x30, 0xd8, 0x93, 0x87, 0xf0, 0xed,
    0x6e, 0x8b, 0xbe, 0x30, 0x5b, 0xf6, 0xa6, 0xaf, 0xdd, 0x80, 0x7c, 0x45,
    0x5e, 0x8f, 0x91, 0x93, 0x5e, 0x44, 0xfe, 0xb8, 0x82, 0x07, 0xee, 0x79,
    0xca, 0xbf, 0x31, 0x73, 0x62, 0x58, 0xe3, 0xcd, 0xc4, 0xbc, 0xc2, 0x11,
    0x1d, 0xa1, 0x4a, 0xbf, 0xfe, 0x27, 0x7d, 0xa1, 0xf6, 0x35, 0xa3, 0x5e,
    0xca, 0xdc, 0x57, 0x2f, 0x3e, 0xf0, 0xc9, 0x5d, 0x86, 0x6a, 0xf8, 0xaf,
    0x66, 0xa7, 0xed, 0xcd, 0xb8, 0xed, 0xa1, 0x5f, 0xba, 0x9b, 0x85, 0x1a,
    0xd5, 0x09, 0xae, 0x94, 0x4e, 0x3b, 0xcf, 0xcb, 0x5c, 0xc9, 0x79, 0x80,
    0xf7, 0xcc, 0xa6, 0x4a, 0xa8, 0x6a, 0xd8, 0xd3, 0x31, 0x11, 0xf9, 0xf6,
    0x02, 0x63, 0x2a, 0x1a, 0x2d, 0xd1, 0x1a, 0x66, 0x1b, 0x16, 0x41, 0xbd,
    0xbd, 0xf7, 0x4d, 0xc0, 0x4a, 0xe5, 0x27, 0x49, 0x5f, 0x7f, 0x58, 0xe3,
    0x27, 0x2d, 0xe5, 0xc9, 0x66, 0x0e, 0x52, 0x38, 0x16, 0x38, 0xfb, 0x16,
    0xeb, 0x53, 0x3f, 0xe6, 0xfd, 0xe9, 0xa2, 0x5e, 0x25, 0x59, 0xd8, 0x79,
    0x45, 0xff, 0x03, 0x4c, 0x26, 0xa2, 0x00, 0x5a, 0x8e, 0xc2, 0x51, 0xa1,
    0x15, 0xf9, 0x7b, 0xf4, 0x5c, 0x81, 0x9b, 0x18, 0x47, 0x35, 0xd8, 0x2d,
    0x05, 0xe9, 0xad, 0x0f, 0x35, 0x74, 0x15, 0xa3, 0x8e, 0x8b, 0xcc, 0x27,
    0xda, 0x7c, 0x5d, 0xe4, 0xfa, 0x04, 0xd3, 0x05, 0x0b, 0xba, 0x3a, 0xb2,
    0x49, 0x45, 0x2f, 0x47, 0xc7, 0x0d, 0x41, 0x3f, 0x97, 0x80, 0x4d, 0x3f,
    0xc1, 0xb5, 0xbb, 0x70, 0x5f, 0xa7, 0x37, 0xaf, 0x48, 0x22, 0x12, 0x45,
    0x2e, 0xf5, 0x0f, 0x87, 0x92, 0xe2, 0x84, 0x01, 0xf9, 0x12, 0x0f, 0x14,
    0x15, 0x24, 0xce, 0x89, 0x99, 0xee, 0xb9, 0xc4, 0x17, 0x70, 0x70, 0x15,
    0xea, 0xbe, 0xc6, 0x6c, 0x1f, 0x62, 0xb3, 0xf4, 0x2d, 0x16, 0x87, 0xfb,
    0x56, 0x1e, 0x45, 0xab, 0xae, 0x32, 0xe4, 0x5e, 0x91, 0xed, 0x53, 0x66,
    0x5e, 0xbd, 0xed, 0xad, 0xe6, 0x12, 0x39, 0x0d, 0x83, 0xc9, 0xe8, 0x6b,
    0x6c, 0x2d, 0xa5, 0xee, 0xc4, 0x5a, 0x66, 0xae, 0x8c, 0x97, 0xd7, 0x0d,
    0x6c, 0x49, 0xc7, 0xf5, 0xc4, 0x92, 0x31, 0x8b, 0x09, 0xee, 0x33, 0xda,
    0xa9, 0x37, 0xb6, 0x49, 0x18, 0xf8, 0x0e, 0x60, 0x45, 0xc8, 0x33, 0x91,
    0xef, 0x20, 0x57, 0x10, 0xbe, 0x78, 0x2d, 0x83, 0x26, 0xd6, 0xca, 0x61,
    0xf9, 0x2f, 0xe0, 0xbf, 0x05, 0x30, 0x52, 0x5a, 0x12, 0x1c, 0x00, 0xa7,
    0x5d, 0xcc, 0x7c, 0x2e, 0xc5, 0x95, 0x8b, 0xa3, 0x3b, 0xf0, 0x43, 0x2e,
    0x5e, 0xdd, 0x00, 0xdb, 0x0d, 0xb3, 0x37, 0x99, 0xa9, 0xcd, 0x9c, 0xb7,
    0x43, 0xf7, 0x35, 0x44, 0x21, 0xc2, 0x82, 0x71, 0xab, 0x8d, 0xaa, 0xb4,
    0x41, 0x11, 0xec, 0x1e, 0x8d, 0xfc, 0x14, 0x82, 0x92, 0x4e, 0x83, 0x6a,
    0x0a, 0x6b, 0x35, 0x5e, 0x5d, 0xe9, 0x5c, 0xcc, 0x8c, 0xde, 0x39, 0xd1,
    0x4a, 0x5b, 0x5f, 0x63, 0xa9, 0x64, 0xe0, 0x0a, 0xcb, 0x0b, 0xb8, 0x5a,
    0x7c, 0xc3, 0x0b, 0xe6, 0xbe, 0xfe, 0x8b, 0x0f, 0x7d, 0x34, 0x8e, 0x02,
    0x66, 0x74, 0x01, 0x6c, 0xca, 0x76, 0xac, 0x7c, 0x67, 0x08, 0x2f, 0x3f,
    0x1a, 0xa6, 0x2c, 0x60, 0xb3, 0xff, 0xda, 0x8d, 0xb8, 0x12, 0x0c, 0x00,
    0x7f, 0xcc, 0x50, 0xa1, 0x5c, 0x64, 0xa1, 0xe2, 0x5f, 0x32, 0x65, 0xc9,
    0x9c, 0xbe, 0xd6, 0x0a, 0x13, 0x87, 0x3c, 0x2a, 0x45, 0x47, 0x0c, 0xca,
    0x42, 0x82, 0xfa, 0x89, 0x65, 0xe7, 0x89, 0xb4, 0x8f, 0xf7, 0x1e, 0xe6,
    0x23, 0xa5, 0xd0, 0x59, 0x37, 0x79, 0x92, 0xd7, 0xce, 0x3d, 0xfd, 0xe3,
    0xa1, 0x0b, 0xcf, 0x6c, 0x85, 0xa0, 0x65, 0xf3, 0x5c, 0xc6, 0x4a, 0x63,
    0x5f, 0x6e, 0x3a, 0x3a, 0x2a, 0x8b, 0x6a, 0xb6, 0x2f, 0xbb, 0xf8, 0xb2,
    0x4b, 0x62, 0xbc, 0x1a, 0x91, 0x25, 0x66, 0xe3, 0x69, 0xca, 0x60, 0x49,
    0x0b, 0xf6, 0x8a, 0xbe, 0x3e, 0x76, 0x53, 0xc2, 0x7a, 0xa8, 0x04, 0x17,
    0x75, 0xf1, 0xf3, 0x03, 0x62, 0x1b, 0x85, 0xb2, 0xb0, 0xef, 0x80, 0x15,
    0xb6, 0xd4, 0x4e, 0xdf, 0x71, 0xac, 0xdb, 0x2a, 0x04, 0xd4, 0xb4, 0x21,
    0xba, 0x65, 0x56, 0x57, 0xe8, 0xfa, 0x84, 0xa2, 0x7d, 0x13, 0x0e, 0xaf,
    0xd7, 0x9a, 0x58, 0x2a, 0xa3, 0x81, 0x84, 0x8d, 0x09, 0xa0, 0x6a, 0xc1,
    0xbb, 0xd9, 0xf5, 0x86, 0xac, 0xbd, 0x75, 0x61, 0x09, 0xe6, 0x8c, 0x3d,
    0x77, 0xb2, 0xed, 0x30, 0x20, 0xe4, 0x00, 0x1d, 0x97, 0xe8, 0xbf, 0xc7,
    0x00, 0x1b, 0x21, 0xb1, 0x16, 0xe7, 0x41, 0x67, 0x2e, 0xec, 0x38, 0xbc,
    0xe5, 0x1b, 0xb4, 0x06, 0x23, 0x31, 0x71, 0x1c, 0x49, 0xcd, 0x76, 0x4a,
    0x76, 0x36, 0x8d, 0xa3, 0x89, 0x8b, 0x4a, 0x7a, 0xf4, 0x87, 0xc8, 0x15,
    0x0f, 0x37, 0x39, 0xf6, 0x6d, 0x80, 0x19, 0xef, 0x5c, 0xa8, 0x66, 0xce,
    0x1b, 0x16, 0x79, 0x21, 0xdf, 0xd7, 0x31, 0x30, 0xc4, 0x21, 0xdd, 0x34,
    0x5b, 0xd2, 0x1a, 0x2b, 0x3e, 0x5d, 0xf7, 0xea, 0xca, 0x05, 0x8e, 0xb7,
    0xcb, 0x49, 0x2e, 0xa0, 0xe3, 0xf4, 0xa7, 0x48, 0x19, 0x10, 0x9c, 0x04,
    0xa7, 0xf4, 0x28, 0x74, 0xc8, 0x6f, 0x63, 0x20, 0x2b, 0x46, 0x24, 0x26,
    0x19, 0x1d, 0xd1, 0x2c, 0x31, 0x6d, 0x5a, 0x29, 0xa2, 0x06, 0xa6, 0xb2,
    0x41, 0xcc, 0x0a, 0x27, 0x96, 0x09, 0x96, 0xac, 0x47, 0x65, 0x78, 0x68,
    0x51, 0x98, 0xd6, 0xd8, 0xa6, 0x2d, 0xa0, 0xcf, 0xec, 0xe2, 0x74, 0xf2,
    0x82, 0xe3, 0x97, 0xd9, 0x7e, 0xd4, 0xf8, 0x0b, 0x70, 0x43, 0x3d, 0xb1,
    0x7b, 0x97, 0x80, 0xd6, 0xcb, 0xd7, 0x19, 0xbc, 0x63, 0x0b, 0xfd, 0x4d,
    0x88, 0xfe, 0x67, 0xac, 0xb8, 0xcc, 0x50, 0xb7, 0x68, 0xb3, 0x5b, 0xd6,
    0x1e, 0x25, 0xfc, 0x5f, 0x3c, 0x8d, 0xb1, 0x33, 0x7c, 0xb3, 0x49, 0x01,
    0x3f, 0x71, 0x55, 0x0e, 0x51, 0xba, 0x61, 0x26, 0xfa, 0xea, 0xe5, 0xb5,
    0xe8, 0xaa, 0xcf, 0xcd, 0x96, 0x9f, 0xd6, 0xc1, 0x5f, 0x53, 0x91, 0xad,
    0x05, 0xde, 0x20, 0xe7, 0x51, 0xda, 0x5b, 0x95, 0x67, 0xed, 0xf4, 0xee,
    0x42, 0x65, 0x70, 0x13, 0x0b, 0x70, 0x14, 0x1c, 0xc9, 0xe0, 0x19, 0xca,
    0x5f, 0xf5, 0x1d, 0x70, 0x4b, 0x6c, 0x06, 0x74, 0xec, 0xb5, 0x2e, 0x77,
    0xe1, 0x74, 0xa1, 0xa3, 0x99, 0xa0, 0x85, 0x9e, 0xf1, 0xac, 0xd8, 0x7e};

static const char CalyxPublicKey[] = {
0x00, 0x00, 0x10, 0x00, 0x29, 0x80, 0xbd, 0x49, 0xd2, 0x23, 0x33, 0x13, 0x10, 0x1f, 0x7a, 0x20,
0x2f, 0x8a, 0x6d, 0x8f, 0xd1, 0x77, 0x1d, 0x4f, 0x12, 0x26, 0xb3, 0x82, 0x1e, 0xc3, 0xb7, 0x3c,
0x4d, 0x7d, 0xf6, 0xad, 0x08, 0x7c, 0x12, 0x1b, 0x89, 0xe8, 0x78, 0xad, 0xc6, 0xb1, 0xff, 0x3a,
0x6b, 0x14, 0xe1, 0xc9, 0x78, 0xbb, 0xac, 0x10, 0xe0, 0x58, 0xf8, 0xba, 0x27, 0xed, 0x1c, 0xdc,
0xcf, 0x6b, 0x85, 0xf0, 0x2f, 0xf8, 0xe1, 0xb0, 0x4e, 0x32, 0xab, 0xac, 0xd2, 0x39, 0x2f, 0x38,
0x72, 0x51, 0x2c, 0x3b, 0x52, 0x9e, 0x1d, 0xcf, 0x03, 0xd9, 0xbf, 0xa0, 0xc9, 0xfe, 0x54, 0xf3,
0x78, 0x17, 0xb3, 0x80, 0x0e, 0x19, 0x9d, 0x66, 0x48, 0xdb, 0x35, 0xc2, 0xd9, 0x97, 0xf9, 0xe0,
0xb2, 0xd3, 0x03, 0xfb, 0x45, 0x87, 0xf2, 0x23, 0x39, 0x99, 0xa1, 0xc3, 0xae, 0x67, 0xff, 0xb0,
0x8b, 0xf4, 0xed, 0xfe, 0xa1, 0xec, 0x6e, 0xfe, 0x6c, 0xdc, 0x80, 0xa8, 0x43, 0x3b, 0x0a, 0x87,
0x74, 0x06, 0x4a, 0x2e, 0x03, 0x8e, 0x4a, 0xe8, 0xc8, 0xba, 0xe7, 0x7d, 0x75, 0x04, 0xc0, 0x71,
0x22, 0x7d, 0xc9, 0x5a, 0xac, 0xa7, 0xd7, 0x67, 0xb5, 0xdc, 0x9c, 0xb7, 0x37, 0x30, 0x56, 0xb9,
0xc9, 0x8d, 0xce, 0x4c, 0xe4, 0xd5, 0xd2, 0x32, 0xb0, 0x1a, 0xea, 0x62, 0xd0, 0x16, 0x28, 0xed,
0x4c, 0xda, 0x4b, 0x66, 0x20, 0x2a, 0x24, 0x47, 0x90, 0x71, 0x6b, 0x39, 0xe6, 0x1a, 0x2d, 0x60,
0xba, 0xe0, 0x49, 0xfe, 0x24, 0x42, 0xcc, 0x94, 0x17, 0x72, 0xa9, 0x66, 0x6b, 0x95, 0x2b, 0x84,
0x2f, 0x82, 0xd7, 0x55, 0xea, 0x09, 0x70, 0x7c, 0xf3, 0x69, 0x0d, 0xe3, 0x10, 0x52, 0x75, 0xfd,
0xac, 0x42, 0x61, 0xb1, 0xdd, 0xa9, 0x6e, 0x95, 0x9d, 0xba, 0x55, 0x72, 0xe7, 0x7d, 0x9f, 0x16,
0xf5, 0xac, 0x50, 0xb4, 0x3e, 0x63, 0xcb, 0x1a, 0xce, 0x8f, 0x47, 0xf6, 0x9c, 0x90, 0x60, 0x1e,
0x22, 0xdd, 0xdd, 0x7f, 0x60, 0x38, 0x3f, 0x88, 0xfe, 0xf4, 0x5d, 0xa2, 0x69, 0xbe, 0x37, 0x75,
0x8c, 0x81, 0x11, 0x34, 0x7f, 0x40, 0xb7, 0xc7, 0xad, 0xcc, 0x5f, 0xe0, 0x7c, 0xcb, 0x38, 0xa2,
0xee, 0xc8, 0xed, 0xb7, 0x9b, 0x97, 0x89, 0x45, 0x18, 0xca, 0x19, 0x34, 0xad, 0xb1, 0x9d, 0x01,
0xee, 0x7e, 0xb9, 0x32, 0x6c, 0x59, 0xdb, 0xba, 0x30, 0x0c, 0xf7, 0x88, 0xec, 0xca, 0x87, 0x9c,
0x22, 0xdd, 0x50, 0x3b, 0x7e, 0x42, 0xf7, 0x2e, 0x46, 0x9a, 0x38, 0xb3, 0x52, 0xe8, 0x6b, 0x37,
0xdf, 0xe2, 0x53, 0x76, 0xd3, 0x21, 0x8f, 0x4f, 0xcc, 0xf0, 0xb8, 0x22, 0x7d, 0xf2, 0x78, 0x7e,
0x14, 0x5b, 0x11, 0xdc, 0xf9, 0xc2, 0x00, 0xa2, 0xc5, 0xb4, 0xe7, 0x3a, 0x52, 0x5f, 0x6e, 0x3a,
0x26, 0x48, 0x5b, 0x25, 0x12, 0x0d, 0xc6, 0xb6, 0x85, 0x23, 0xb8, 0xca, 0xe9, 0x56, 0x5e, 0x24,
0x9b, 0x64, 0xf4, 0x5f, 0xb8, 0x3c, 0xb5, 0xf4, 0x6b, 0x4d, 0xf6, 0xf7, 0x9d, 0x47, 0xba, 0x32,
0x68, 0x1d, 0x5e, 0xb1, 0xae, 0xcb, 0x8d, 0x7a, 0xde, 0xef, 0x07, 0x0a, 0xf6, 0xa4, 0x88, 0xcf,
0xd8, 0x03, 0xc3, 0x01, 0x66, 0x39, 0x2a, 0x4e, 0xe4, 0x3b, 0xa5, 0xac, 0x17, 0xd5, 0xf1, 0x3c,
0x03, 0xa5, 0xa0, 0x22, 0x56, 0x5a, 0xe3, 0x24, 0xfd, 0xce, 0x94, 0xa7, 0xac, 0x22, 0xc5, 0xf8,
0xfb, 0x11, 0x90, 0xa8, 0x4a, 0xae, 0x45, 0xc0, 0xf6, 0xb0, 0x3a, 0x1b, 0xb7, 0x7d, 0x63, 0x8c,
0xa1, 0xd2, 0x73, 0x4f, 0x2e, 0x48, 0xf8, 0xc7, 0x87, 0x24, 0x81, 0x22, 0x1e, 0x4b, 0xdf, 0x9b,
0x73, 0x66, 0x9f, 0xd5, 0xb7, 0x05, 0x63, 0x9c, 0x73, 0x26, 0x84, 0x32, 0x5e, 0x33, 0x08, 0x0c,
0xf5, 0x1a, 0x5f, 0x46, 0x2a, 0x03, 0x3b, 0x07, 0xce, 0xb0, 0x5b, 0x70, 0x6c, 0x5d, 0xa0, 0x4d,
0xca, 0xbb, 0x50, 0x62, 0xda, 0x3e, 0x25, 0x22, 0x05, 0xb7, 0xd2, 0x8c, 0xe0, 0x95, 0xb5, 0x19,
0xcc, 0x27, 0xa0, 0xa6, 0x52, 0x13, 0x77, 0x67, 0x67, 0x66, 0xe2, 0x9a, 0x90, 0x61, 0x8a, 0x87,
0xcc, 0x87, 0x19, 0x6d, 0x1a, 0x44, 0x50, 0x32, 0x20, 0xd9, 0x5e, 0xba, 0x6d, 0x05, 0xb6, 0xa5,
0x05, 0xbc, 0x2e, 0x61, 0x51, 0x1e, 0x3a, 0x4b, 0x90, 0x2e, 0xc6, 0x49, 0xec, 0xfa, 0xb3, 0xa9,
0xc8, 0x0e, 0xf9, 0x3b, 0x89, 0x1a, 0x90, 0x67, 0x26, 0x46, 0xad, 0x5f, 0x0a, 0x30, 0x59, 0xaa,
0x9f, 0xca, 0x7d, 0xfa, 0x77, 0xd4, 0x5b, 0x82, 0xf9, 0x9c, 0xca, 0xc8, 0xee, 0x23, 0x5c, 0xdd,
0x00, 0x3f, 0xc5, 0x21, 0xe4, 0xf6, 0x3c, 0x2a, 0xaa, 0x93, 0x5e, 0xa4, 0x40, 0xd3, 0x90, 0x53,
0xbb, 0xa9, 0x6f, 0x24, 0xd2, 0xdb, 0x62, 0x21, 0xc6, 0x97, 0x53, 0x82, 0xf1, 0x9f, 0x3b, 0x80,
0xf7, 0xa5, 0x5a, 0x46, 0xce, 0x94, 0x38, 0xb8, 0x30, 0xa4, 0xf4, 0x15, 0xdd, 0x4c, 0x52, 0xea,
0x72, 0x3d, 0xa4, 0x75, 0xf6, 0xbc, 0xef, 0x64, 0x78, 0xd0, 0xa3, 0xe9, 0xd2, 0x3c, 0x36, 0x9e,
0x96, 0x49, 0xb3, 0xc2, 0xc0, 0x08, 0xd4, 0x38, 0x16, 0xcc, 0xbf, 0x7c, 0x15, 0xbc, 0x49, 0xbd,
0x51, 0x6c, 0x94, 0x87, 0x98, 0xde, 0xa7, 0x8e, 0x25, 0x0a, 0xb6, 0xab, 0xdc, 0x68, 0xb3, 0x43,
0xd4, 0xc0, 0x64, 0xff, 0x5b, 0x46, 0x74, 0xfc, 0xdc, 0x2b, 0xef, 0x9f, 0x5b, 0x92, 0x86, 0xc6,
0xba, 0x84, 0xc6, 0x36, 0x7f, 0x5b, 0xc3, 0xe9, 0x05, 0xdc, 0x4d, 0xe3, 0x76, 0xd9, 0xff, 0xbc,
0xe0, 0x46, 0xcd, 0xcc, 0xde, 0x09, 0xed, 0xae, 0xc4, 0x56, 0x7d, 0x75, 0xc2, 0xcf, 0xec, 0x30,
0x22, 0x57, 0x7c, 0xde, 0xf6, 0x4b, 0x3d, 0xb9, 0x24, 0xb3, 0x38, 0x7f, 0xc0, 0x5c, 0x8f, 0x38,
0xa0, 0x7a, 0x6e, 0x08, 0x9a, 0x4b, 0xc8, 0x76, 0x8d, 0x0c, 0x1c, 0xc2, 0x69, 0x6f, 0xfa, 0x37,
0x7e, 0x39, 0x24, 0x86, 0xa5, 0x53, 0x23, 0x68, 0x8f, 0x97, 0x34, 0x09, 0xed, 0xa9, 0xf9, 0xcd,
0xaa, 0x5a, 0xc7, 0x55, 0xde, 0xd6, 0x53, 0xb3, 0xdb, 0xaa, 0x44, 0x9e, 0x43, 0xe9, 0x06, 0x99,
0xb3, 0xe9, 0x56, 0xd7, 0x0a, 0xfa, 0x09, 0x4b, 0x6c, 0x50, 0x3a, 0x85, 0x46, 0xf9, 0xd2, 0x05,
0x5a, 0xab, 0xe1, 0xa8, 0x34, 0x68, 0x70, 0x52, 0x2b, 0x21, 0x9f, 0x9f, 0x32, 0xae, 0x42, 0xc7,
0x65, 0x2c, 0xa4, 0x0c, 0xb4, 0xfc, 0x3d, 0xb2, 0x38, 0xb1, 0x55, 0x16, 0x21, 0x42, 0x7b, 0x89,
0x90, 0x0c, 0x51, 0xb1, 0x5e, 0x9f, 0x9b, 0xb0, 0xed, 0x54, 0x51, 0x11, 0xb5, 0x61, 0x2c, 0xf2,
0x0e, 0xa3, 0x9e, 0x42, 0xbc, 0x53, 0x45, 0xf2, 0xef, 0xdb, 0xd3, 0x3d, 0x00, 0x7a, 0xc0, 0x4c,
0x2e, 0x8d, 0x7e, 0x83, 0x4c, 0xf5, 0xbc, 0xfd, 0xa0, 0xa2, 0x2a, 0x4c, 0x11, 0x62, 0x67, 0x3f,
0x60, 0x4c, 0xce, 0xc9, 0x4b, 0x5e, 0xc4, 0xfd, 0x41, 0x05, 0x83, 0x09, 0xd7, 0xeb, 0xfc, 0xa3,
0xb1, 0x05, 0xf9, 0xec, 0x21, 0x9b, 0x02, 0xe3, 0xc9, 0x60, 0xb4, 0x20, 0xe7, 0x21, 0x33, 0x22,
0x14, 0x8a, 0x67, 0xb6, 0x74, 0xc9, 0xa0, 0x88, 0x1e, 0x53, 0xf6, 0x30, 0xac, 0x54, 0xfc, 0xbc,
0xd4, 0x4b, 0x2d, 0x68, 0xf0, 0x89, 0x87, 0xc4, 0xb2, 0x46, 0x5e, 0x8f, 0x3f, 0xe4, 0x73, 0x7d,
0x96, 0x2a, 0xb7, 0x95, 0x3c, 0x59, 0x08, 0x0b, 0xd4, 0xd1, 0x03, 0x14, 0xce, 0x7d, 0x7a, 0xef,
0x6a, 0xe5, 0xc7, 0x3b, 0x1b, 0x4b, 0x6c, 0x60, 0x49, 0x51, 0xa0, 0x8c, 0xef, 0x68, 0x6b, 0x46,
0xa7, 0xdc, 0xf8, 0x3a, 0xae, 0xd0, 0x57, 0x62
};

#endif /* __OEM_PUBLIC_KEY_H__ */
