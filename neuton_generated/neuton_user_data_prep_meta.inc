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

/** Defines input(also used for LAG) features MIN scaling factor
 */
static const neuton_input_t INPUT_FEATURES_SCALE_MIN[] = { 0 };

/** Defines input(also used for LAG) features MAX scaling factor
 */
static const neuton_input_t INPUT_FEATURES_SCALE_MAX[] = { 0 };

/** Defines which unique features from the input data will be used/collected,
 *  one bit for one unique feature, starting from LSB
 */
static const neuton_u8_t INPUT_FEATURES_USAGE_MASK[] = { 0x3f };

/** Defines which unique input features is used for LAG features processing,
 *  one bit for one unique feature, starting from LSB
 */
static const neuton_u8_t INPUT_FEATURES_USED_FOR_LAGS_MASK[] = { 0x00 };

/** Defines DSP feature calculation masks used as neuton_dsp_features_mask_t,
 *  32 bit for one unique feature, @ref neuton_dsp_features_mask_t to see bitmask
 */
static const neuton_u32_t DSP_FEATURES_CALCULATION_MASK[] = {
	-1275002880, 1350631424, 9306112, -1576796160, -242614272, -745930752 };

/** Defines DSP feature calculation arguments used by DSP pipeline,
 *  32 bit for one feature argument
 */
static const neuton_input_t DSP_FEATURES_CALCULATION_ARGS[] = {
	4, 4, 4, 4, 4, 4, 4 };

/** Defines DSP features MAX scaling factor
 */
static const neuton_feature_t DSP_FEATURES_SCALE_MIN[] = {
	-8.8259201049804688, 0, 1.1736791133880615, 0.16570311784744263, 0.012908012606203556,
	-12.284700393676758, 3.7748603820800781, 9.0349941253662109, 2.2066001892089844,
	0, 0.15314100682735443, -1.2143563032150269, 0.027815051376819611, 2.3362400531768799,
	0.0050251255743205547, 0.78530973196029663, 0.053075209259986877, 0.31789898872375488,
	-3.4042513370513916, 0.42229935526847839, 0.42244181036949158, 2.9268660545349121,
	0.51405525207519531, 0.18886478245258331, 0.043664943426847458, 0, -10.016872406005859,
	0.34634384512901306, 0.35469502210617065, 0.0050251255743205547, 1.7543656826019287,
	0.15290540456771851, 0.043504457920789719 };

/** Defines DSP features MIN scaling factor
 */
static const neuton_feature_t DSP_FEATURES_SCALE_MAX[] = {
	0, 0.025125628337264061, 8.6820497512817383, 3.4366927146911621, 0.1198214590549469,
	-9.104680061340332, 4.9024171829223633, 11.889627456665039, 7.486213207244873,
	2.7385799884796143, 5.9377899169921875, 1.4161127805709839, 1.2509444952011108,
	112.23590087890625, 0.12562814354896545, 20.722183227539062, 1.2135945558547974,
	178.70399475097656, 1.9619154930114746, 69.353919982910156, 69.35870361328125,
	365.0665283203125, 60.014274597167969, 39.351028442382812, 3.7668106555938721,
	123.29199981689453, 6.2695631980895996, 43.568744659423828, 43.569129943847656,
	0.055276382714509964, 259.55972290039062, 22.021354675292969, 2.6333673000335693 };

