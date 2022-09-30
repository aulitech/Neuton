/// Solution ID: 68656_8Gestures | 2022-09-30T22:22:25Z ///

#ifndef NEUTON_MODEL_MODEL_H
#define NEUTON_MODEL_MODEL_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Model info */
#define NEUTON_MODEL_HEADER_VERSION 3
#define NEUTON_MODEL_QLEVEL 8
#define NEUTON_MODEL_FLOAT_SUPPORT 0
#define NEUTON_MODEL_TASK_TYPE 0  // multiclass classification
#define NEUTON_MODEL_NEURONS_COUNT 18
#define NEUTON_MODEL_WEIGHTS_COUNT 79
#define NEUTON_MODEL_INPUTS_COUNT 36
#define NEUTON_MODEL_INPUTS_COUNT_ORIGINAL 6
#define NEUTON_MODEL_INPUT_LIMITS_COUNT 36
#define NEUTON_MODEL_OUTPUTS_COUNT 8
#define NEUTON_MODEL_LOG_SCALE_OUTPUTS 0
#define NEUTON_MODEL_HAS_CLASSES_RATIO 0
#define NEUTON_MODEL_HAS_NEGPOS_RATIO 0

/* Preprocessing */
#define NEUTON_PREPROCESSING_ENABLED 1
#define NEUTON_MODEL_WINDOW_SIZE 75
#define NEUTON_DROP_ORIGINAL_FEATURES 1
#define NEUTON_BITMASK_ENABLED 1
#define NEUTON_INPUTS_IS_INTEGER 0
#define NEUTON_MODEL_SA_PRECISION 24

/* Types */
typedef float input_t;
typedef float extracted_feature_t;
typedef uint8_t coeff_t;
typedef int8_t weight_t;
typedef int32_t acc_signed_t;
typedef uint32_t acc_unsigned_t;
typedef uint8_t sources_size_t;
typedef uint8_t weights_size_t;
typedef uint8_t neurons_size_t;

/* Scaling */
static const extracted_feature_t extractedFeaturesScaleMin[] = {
	0.057521105, 0.013870835, 0.14671458, -1.9345049, 1, 0, 0, 0.04119873,
	-1.686059, 1, 0, 0.065839961, -5.312573, -1.389033, -10.232899, 0.080467388,
	-1.6213114, 0, 0, -172.61786, -2.2066576, 0, 1.5759368, 1.135942, -25.27993,
	1.274989, -286.10669, 1.4465072, 1.2027082, 1, 2.300324, 0.77935362, 1.0012335,
	1.7493814, -2.7705584, 0 };
static const extracted_feature_t extractedFeaturesScaleMax[] = {
	12.547917, 1.133955, 5.3793921, 2.1393874, 12, 6, 6, 3.3156648, 10.201505,
	19, 9, 6.4957614, 5.0969477, 9.6777649, 0.521635, 3.6593571, 5.8655653,
	4, 5, -3.4664681, 2.9361103, 7, 457.2605, 187.61423, 18.262545, 287.30505,
	-1.7357039, 39424.012, 198.55481, 8, 332.26691, 134.93924, 1.0121813, 117.04121,
	1.822783, 5 };

/* Limits */
static const uint8_t modelUsedInputsMask[] = { 0xff, 0xff, 0xff, 0xff, 0x0f };

/* Structure */
static const weight_t modelWeights[] = {
	45, -126, 17, 125, 96, 35, -128, 22, 76, 118, 125, -86, 114, 4, -128, 31,
	124, 107, -36, 80, -128, 100, 0, -128, 22, -21, 26, 44, 123, 26, 117, -41,
	-128, 41, -128, 61, -128, 124, -2, 124, -128, 26, -128, 109, 51, 96, -31,
	60, -128, 20, 41, 5, 22, -128, -22, 13, -110, 35, -71, -100, 121, 18, -119,
	31, -26, 12, -33, -119, 62, 93, -2, -2, 124, -2, -65, -128, -128, -128,
	43 };

static const sources_size_t modelLinks[] = {
	5, 14, 18, 23, 34, 36, 0, 36, 6, 15, 28, 34, 35, 36, 2, 36, 2, 11, 19,
	24, 25, 27, 36, 4, 36, 4, 0, 4, 13, 26, 31, 36, 6, 36, 2, 9, 13, 17, 21,
	36, 8, 36, 2, 12, 14, 16, 31, 36, 10, 36, 1, 7, 8, 30, 32, 36, 22, 26,
	29, 30, 33, 36, 13, 36, 0, 2, 4, 6, 20, 36, 3, 8, 10, 14, 36, 12, 15, 16,
	36 };

static const weights_size_t modelIntLinksBoundaries[] = {
	0, 7, 8, 15, 16, 24, 26, 33, 35, 41, 43, 49, 50, 56, 63, 68, 70, 78 };
static const weights_size_t modelExtLinksBoundaries[] = {
	6, 8, 14, 16, 23, 25, 32, 34, 40, 42, 48, 50, 56, 62, 64, 70, 75, 79 };

static const coeff_t modelFuncCoeffs[] = {
	140, 146, 157, 144, 157, 148, 108, 142, 79, 142, 157, 156, 157, 155, 156,
	35, 118, 158 };
static const uint8_t modelFuncTypes[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

static const neurons_size_t modelOutputNeurons[] = { 1, 3, 5, 7, 9, 11, 17, 14 };

#ifdef __cplusplus
}
#endif

#endif // NEUTON_MODEL_MODEL_H

