/* 2023-06-21T19:45:22Z */

/* ----------------------------------------------------------------------
Copyright (c) 2022-2023 Neuton.AI, Inc.
*
The source code and its binary form are being made available on the following terms:
Redistribution, use, and modification are permitted provided that the following
conditions are met:
*
1. Redistributions of source code and/or its binary form must retain the above copyright notice,
* this list of conditions (and the disclaimer) either in the body of the source code or in
* the documentation and/or other materials provided with the distribution of the binary form, as
applicable.
*
2. The name of the copyright holder may not be used to endorse or promote products derived from this
* source code or its binary form without specific prior written permission of Neuton.AI, Inc.
*
3. Disclaimer. THIS SOURCE CODE AND ITS BINARY FORM ARE PROVIDED BY THE COPYRIGHT HOLDER "AS IS".
* THE COPYRIGHT HOLDER HEREBY DISCLAIMS ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
* BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
* PARTICULAR PURPOSE. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE HELD LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; INFRINGEMENT OF INTELLECTUAL PROPERTY RIGHTS
* OF THIRD PARTIES; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOURCE CODE OR ITS BINARY FORM, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------------- */


static const neuton_weight_t MODEL_WEIGHTS[] = {
	-101, 3, 49, -78, 124, 124, 43, 88, -100, -128, 75, 60, 127, 24, -128,
	-82, 18, 40, 76, 79, 122, 66, -34, 35, 32, -78, -59, -47, 96, 116, 122,
	-51, 5, -98, 93, -76, 109, 109, -3, -17, 48, 61, 36, 19, -126, -11, -2,
	124, -2, -128, 124, -2, -24, -81, 91, 29, 88, -63, -56, 98, 73, 113, 51,
	-117, -29, -44, -128, 94, 126, 51, -99, -52, 1, -44, 121, -126, 48, 120,
	-38, -82, -128, 64, 114, -98, -128, 23, 124, -65, -128, 61, 61, 61, -2,
	-81, 124, -55, 127, -9, -31, 103, -122, -15, 123, -48, -54, -89, 25, 19,
	1, -43, -58, 15, 121, -128, -26, -128, 63, -77, -43, 86, -125, 16, 124,
	103, -91, -106, -128, 80, -14, 41, -117, -54, -24, -118, 69, 60, 37, -128,
	-51, 19, -52, -125, 61, -106, -128, 125, 34, 120, -64, -72, -83, 96, -127,
	43, -105, -128, -128, 48, -28, -125, -64, 121, -81, -66, 11, -112, -128,
	124, 46, 124, 91, 110, -128, -110, 112, -82, -2, -58, -128, 70, -123, -29,
	124, -87, -112, -128, 116, 117, -52, 125, -124, -126, -48, -128, 103, 88,
	70, -30, -38, 125, -59, -80, -66, -78, -128, 29, -118, 74, -126, -127,
	120, 64, -96, 21, -53, 121, -83, -128, -44, -35, 120, -88, -128, 116, 40,
	126, -102, -121, -22, -74, 60, -50, 10, -109, -56, -128, -128, -101, 68,
	-36, -73, -11, -117, -128, 122, -63, 59, -106, -126, 124, 82, -43, -100,
	-67, -121, 49, 56, 11, -116, -122, -29, -125, 124, 96, 39, 123, 119, -124,
	-104, 125, -128, -95, -128, -128, 17, -74, -83, -98, -98, -128, -34, -128,
	-105, -122, -38, -18, 83, 24, 34, -128, -128, -128, -128, -128, 125, 66 };

static const neuton_sources_num_t MODEL_LINKS[] = {
	45, 295, 389, 449, 478, 504, 528, 47, 378, 391, 427, 485, 511, 528, 310,
	335, 360, 374, 467, 528, 311, 335, 366, 510, 517, 528, 89, 188, 298, 454,
	462, 477, 528, 13, 479, 488, 503, 526, 528, 313, 393, 511, 524, 525, 527,
	528, 319, 491, 505, 514, 525, 528, 6, 235, 299, 472, 492, 526, 528, 8,
	208, 233, 455, 492, 526, 528, 206, 434, 478, 511, 519, 524, 528, 43, 375,
	436, 515, 527, 528, 6, 74, 88, 435, 464, 485, 528, 12, 285, 499, 509, 514,
	517, 528, 74, 399, 433, 454, 514, 528, 185, 435, 436, 479, 497, 528, 4,
	15, 528, 0, 1, 2, 3, 9, 12, 528, 89, 443, 468, 499, 504, 514, 528, 10,
	204, 425, 506, 507, 527, 528, 9, 19, 281, 490, 492, 510, 528, 6, 150, 302,
	321, 466, 482, 528, 3, 14, 21, 528, 221, 290, 349, 357, 422, 437, 528,
	9, 19, 23, 528, 4, 13, 15, 302, 358, 505, 528, 2, 13, 25, 528, 10, 21,
	7, 193, 206, 425, 475, 528, 8, 10, 20, 27, 528, 1, 2, 3, 83, 111, 196,
	528, 70, 154, 234, 309, 461, 494, 528, 6, 13, 100, 448, 516, 528, 1, 12,
	31, 528, 246, 393, 435, 494, 517, 528, 0, 1, 2, 3, 303, 501, 528, 7, 113,
	341, 395, 490, 528, 21, 30, 31, 37, 182, 309, 499, 528, 6, 17, 34, 35,
	36, 528, 0, 1, 2, 3, 509, 528, 6, 87, 145, 282, 485, 528, 430, 452, 480,
	486, 495, 513, 528, 7, 18, 29, 33, 38, 40, 528, 0, 1, 2, 3, 7, 95, 528,
	5, 42, 528, 0, 1, 2, 3, 496, 528, 25, 70, 213, 222, 435, 469, 483, 528,
	0, 11, 30, 39, 44, 45, 528 };

static const neuton_weights_num_t MODEL_INTERNAL_LINKS_BOUNDARIES[] = {
	0, 7, 14, 20, 26, 33, 39, 46, 53, 60, 66, 73, 80, 87, 93, 99, 107, 114,
	115, 123, 131, 137, 146, 147, 157, 161, 168, 171, 181, 185, 189, 197, 205,
	206, 216, 220, 228, 238, 243, 246, 251, 264, 269, 274, 279, 282, 295 };

static const neuton_weights_num_t MODEL_EXTERNAL_LINKS_BOUNDARIES[] = {
	7, 14, 20, 26, 33, 39, 46, 52, 59, 66, 73, 79, 86, 93, 99, 105, 108, 115,
	122, 129, 136, 143, 147, 154, 158, 165, 169, 177, 182, 189, 196, 202, 206,
	212, 219, 225, 233, 239, 245, 251, 258, 265, 272, 275, 281, 289, 296 };

static const neuton_coeff_t MODEL_ACTIVATION_COEFFS[] = {
	157, 158, 152, 157, 101, 154, 139, 76, 56, 144, 160, 157, 157, 157, 157,
	156, 119, 49, 158, 160, 28, 157, 54, 158, 64, 144, 57, 160, 129, 136, 158,
	156, 113, 142, 157, 157, 136, 142, 157, 160, 154, 148, 160, 125, 1, 91,
	158 };

static const neuton_neurons_num_t MODEL_OUTPUT_NEURONS[] = {
	46, 32, 26, 22, 16, 43, 37, 41, 28, 24 };

