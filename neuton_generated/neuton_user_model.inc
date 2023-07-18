/* 2023-07-18T06:25:00Z */

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
	-75, 75, 113, 103, -29, -97, -13, 35, -51, 32, -93, 45, 2, -10, -97, 100,
	35, -17, -3, -44, 98, -35, -128, 110, 26, -128, 21, -125, 121, -128, -39,
	-104, 64, -128, -38, 20, -5, -68, -3, -59, 9, 20, 18, 110, -18, -63, -128,
	-125, -76, -63, 121, -128, 44, -128, 124, -65, 121, -2, -128, 117, -102,
	-121, -128, 106, -5, -83, 125, 100, -12, 59, -53, -127, -128, -56, -91,
	-98, 41, -128, -128, 31 };

static const neuton_sources_num_t MODEL_LINKS[] = {
	13, 16, 20, 25, 31, 32, 33, 9, 14, 23, 25, 28, 33, 8, 17, 24, 27, 32, 33,
	2, 17, 18, 21, 30, 33, 3, 33, 1, 25, 26, 27, 32, 33, 5, 2, 3, 12, 19, 33,
	0, 1, 2, 3, 6, 29, 33, 7, 0, 3, 4, 5, 23, 33, 1, 5, 7, 8, 33, 8, 1, 6,
	15, 22, 32, 33, 0, 6, 10, 33, 0, 2, 3, 5, 7, 10, 11, 33, 2, 12, 33 };

static const neuton_weights_num_t MODEL_INTERNAL_LINKS_BOUNDARIES[] = {
	0, 7, 13, 20, 26, 28, 34, 44, 47, 57, 59, 68, 73, 79 };

static const neuton_weights_num_t MODEL_EXTERNAL_LINKS_BOUNDARIES[] = {
	7, 13, 19, 25, 27, 33, 39, 46, 53, 58, 65, 69, 77, 80 };

static const neuton_coeff_t MODEL_ACTIVATION_COEFFS[] = {
	134, 159, 157, 138, 123, 157, 133, 70, 153, 157, 157, 160, 160, 118 };

static const neuton_neurons_num_t MODEL_OUTPUT_NEURONS[] = { 11, 9, 13, 4 };

