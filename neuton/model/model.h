/// Solution ID: 68223_SimpleGestures12 | 2022-09-06T19:50:29Z ///

#ifndef NEUTON_MODEL_MODEL_H
#define NEUTON_MODEL_MODEL_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Model info */
#define NEUTON_MODEL_HEADER_VERSION 3
#define NEUTON_MODEL_QLEVEL 8
#define NEUTON_MODEL_FLOAT_SUPPORT 1
#define NEUTON_MODEL_TASK_TYPE 0  // multiclass classification
#define NEUTON_MODEL_NEURONS_COUNT 8
#define NEUTON_MODEL_WEIGHTS_COUNT 32
#define NEUTON_MODEL_INPUTS_COUNT 15
#define NEUTON_MODEL_INPUTS_COUNT_ORIGINAL 3
#define NEUTON_MODEL_INPUT_LIMITS_COUNT 15
#define NEUTON_MODEL_OUTPUTS_COUNT 4
#define NEUTON_MODEL_LOG_SCALE_OUTPUTS 0
#define NEUTON_MODEL_HAS_CLASSES_RATIO 0
#define NEUTON_MODEL_HAS_NEGPOS_RATIO 0

/* Preprocessing */
#define NEUTON_PREPROCESSING_ENABLED 1
#define NEUTON_MODEL_WINDOW_SIZE 160
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
	-9.3114185, 4.0339999, -1.4986846, 0, 2.412375, -44.006908, -0.40400001,
	1.0004922, 1.3296697, 1, 0, 5.0708122, 0.40799999, 3.1168408, 1.7654576 };
static const extracted_feature_t extractedFeaturesScaleMax[] = {
	5.4619422, 40.470001, 9.8817215, 5, 259.21301, 23.705378, 143.709, 1.0063418,
	8378.8223, 13, 6, 171.08682, 130.657, 4261.5854, 65.280823 };

/* Limits */
static const uint8_t modelUsedInputsMask[] = { 0xff, 0x7f };

/* Structure */
static const weight_t modelWeights[] = {
	110, -23, 122, -27, -128, 44, -128, 22, -61, -15, 12, 125, 28, -35, -128,
	24, -65, 124, 124, -2, -2, -2, -121, 18, -128, -128, -2, -2, 61, 124, -128,
	21 };

static const sources_size_t modelLinks[] = {
	1, 2, 4, 10, 12, 15, 0, 15, 0, 1, 3, 5, 7, 15, 2, 15, 0, 6, 8, 13, 14,
	15, 4, 15, 2, 4, 9, 11, 12, 15, 6, 15 };

static const weights_size_t modelIntLinksBoundaries[] = {
	0, 7, 8, 15, 17, 23, 25, 31 };
static const weights_size_t modelExtLinksBoundaries[] = {
	6, 8, 14, 16, 22, 24, 30, 32 };

static const coeff_t modelFuncCoeffs[] = {
	124, 122, 146, 122, 160, 105, 118, 123 };
static const uint8_t modelFuncTypes[] = { 0, 0, 0, 0, 0, 0, 0, 0 };

static const neurons_size_t modelOutputNeurons[] = { 1, 3, 5, 7 };

#ifdef __cplusplus
}
#endif

#endif // NEUTON_MODEL_MODEL_H

