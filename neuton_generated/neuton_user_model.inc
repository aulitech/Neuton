/* 2023-07-10T21:24:42Z */

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
	-2, 124, 124, 124, 61, -65, 109, -74, 56, 29, 123, -34, 59, -44, -128,
	125, 77, 28, 97, -39, 125, 114, 125, -113, -40, -24, -128, 124, 121, 43,
	-128, 24, 44, 44, 125, -109, 80, -50, -19, -103, 47, 57, 112, -15, 93,
	-104, -128, 13, 20, -2, -22, -118, 76, 6, -28, -88, 35, -127, -22, 100,
	90, -36, 32, 26, -128, 7, 43, -128, 119, -1, -6, 50, 12, -91, -34, -74,
	125, -15, -128, -49, 124, -51, 107, 97, -27, -82, -32, 103, 80, -126, -45,
	-128, 0, 109, -70, -2, -56, -94, -53, 40, 80, -23, -5, 122, 39, -124, -82,
	-128, 125, 93, -122, -4, -18, -76, -128, 110, -128, -68, 122, 11, -128,
	11, 125, -128, -18, 0, -126, 52, 21, -128, -24, -6, -128, -60, 5, -128,
	120, 23, 28, 36, -33, 55, -126, -49, 0, 31, 48, -127, -115, 33, -3, -32,
	-54, 122, 124, -11, 11, -128, -128, -128, -105, 26, -123, 86, 3, -101,
	-42, 48, 125, -128, -128, -128, -65, -65, -2, 112, -33, -80, 19, -125,
	-84, -93, -128, 95, 126, -24, -57, -6, 54, 53, -128, -119, 46, 81, 121,
	-128, -83, -83, -128, -6, -127, -38, -44, -52, 69, 123, -128, 123, -128,
	-128, -110, 123, 45, -26, -31, -115, 31, 25, 119, -104, 117, -43, -128,
	-128, -128, -98, 45, 45, 37, -120, -22, 122, -39, -120, 70, -16, 124, -128,
	-40, -128, -128, 88, -128, -25, 39, 125, -119, -49, -62, 61, 118, -115,
	37, -72, -26, 120, -128, 124, -76, -76, -32, -128, 77, 28, -42, -128, -39,
	-128, 103, -128, 49, 33, -128, -128, -31, -84, 85, -128, 116, 125, -113,
	-49 };

static const neuton_sources_num_t MODEL_LINKS[] = {
	18, 38, 48, 50, 51, 63, 43, 52, 54, 58, 62, 63, 38, 39, 40, 50, 52, 63,
	27, 30, 39, 47, 62, 63, 0, 3, 19, 26, 41, 63, 4, 63, 0, 2, 19, 24, 34,
	36, 63, 6, 63, 7, 48, 49, 56, 61, 62, 63, 10, 29, 46, 50, 61, 63, 2, 9,
	15, 45, 61, 63, 10, 9, 19, 27, 30, 57, 63, 11, 30, 32, 39, 42, 52, 63,
	12, 15, 16, 34, 50, 63, 13, 5, 9, 11, 51, 63, 9, 6, 9, 19, 21, 31, 63,
	20, 25, 44, 46, 61, 63, 0, 1, 2, 3, 12, 56, 63, 1, 12, 13, 23, 33, 63,
	1, 2, 3, 4, 8, 50, 63, 0, 2, 3, 4, 37, 46, 63, 8, 20, 63, 13, 14, 27, 52,
	59, 63, 9, 22, 63, 0, 1, 2, 3, 17, 35, 63, 4, 37, 40, 50, 53, 63, 2, 11,
	12, 22, 30, 63, 10, 12, 25, 26, 63, 0, 1, 2, 4, 9, 27, 63, 2, 14, 55, 59,
	61, 63, 0, 1, 2, 3, 42, 63, 2, 25, 22, 55, 57, 58, 63, 13, 15, 0, 8, 35,
	63, 28, 29, 32, 27, 28, 63, 0, 2, 3, 10, 6, 63, 0, 13, 18, 19, 32, 33,
	34, 63, 0, 1, 2, 3, 17, 42, 63, 3, 16, 28, 29, 36, 63, 10, 28, 36, 14,
	60, 63, 0, 1, 3, 4, 16, 63, 2, 15, 30, 38, 39, 63, 1, 2, 3, 4, 1, 63, 0,
	2, 3, 4, 18, 34, 63, 9, 32, 25, 50, 54, 63, 1, 14, 24, 41, 42, 43, 63,
	8, 31, 28, 38, 56, 63, 11, 17, 31, 45, 63 };

static const neuton_weights_num_t MODEL_INTERNAL_LINKS_BOUNDARIES[] = {
	0, 6, 12, 18, 25, 31, 32, 40, 41, 48, 56, 61, 68, 74, 81, 87, 93, 104,
	108, 117, 123, 128, 130, 137, 142, 145, 155, 161, 167, 171, 179, 183, 190,
	197, 204, 213, 219, 226, 230, 238, 244, 249, 257, 260, 270, 273, 281 };

static const neuton_weights_num_t MODEL_EXTERNAL_LINKS_BOUNDARIES[] = {
	6, 12, 18, 24, 30, 32, 39, 41, 48, 54, 60, 67, 74, 80, 86, 93, 99, 106,
	112, 119, 126, 129, 135, 138, 145, 151, 157, 162, 169, 175, 181, 188, 194,
	200, 206, 214, 221, 227, 233, 239, 245, 251, 258, 264, 271, 277, 282 };

static const neuton_coeff_t MODEL_ACTIVATION_COEFFS[] = {
	160, 157, 128, 156, 158, 157, 151, 66, 157, 160, 154, 144, 158, 160, 160,
	96, 134, 37, 157, 145, 103, 160, 136, 157, 89, 151, 144, 107, 157, 150,
	47, 157, 160, 158, 88, 160, 93, 157, 97, 58, 158, 157, 154, 100, 160, 158,
	151 };

static const neuton_neurons_num_t MODEL_OUTPUT_NEURONS[] = {
	35, 44, 40, 37, 5, 7, 21, 23, 27, 46 };

