/// Solution ID: 68223_SimpleGestures12 | 2022-09-06T19:50:29Z ///

#ifndef NEUTON_DSP_CONFIG_H
#define NEUTON_DSP_CONFIG_H

#include "model.h"

#ifdef __cplusplus
extern "C"
{
#endif

#if (NEUTON_PREPROCESSING_ENABLED == 1)
	#ifndef NEUTON_MODEL_SA_PRECISION
		#define NEUTON_MODEL_SA_PRECISION 24
	#endif

	#define SA_PRECISION NEUTON_MODEL_SA_PRECISION
#endif

#if (NEUTON_DROP_ORIGINAL_FEATURES == 1)
	#define NEUTON_MODEL_USED_ORIGINAL_INPUTS_COUNT 3
#else
	#define NEUTON_MODEL_USED_ORIGINAL_INPUTS_COUNT NEUTON_MODEL_INPUTS_COUNT_ORIGINAL
#endif

#define NEUTON_MODEL_EXTRACTED_FEATURES_COUNT 15


enum ExtractedFeatures
{
	EF_STAT_UNUSED = 0,
	EF_STAT_MEAN,
	EF_STAT_MAX,
	EF_STAT_MIN,
	EF_STAT_PFD,
	EF_STAT_VARIANCE,
	EF_STAT_RMS,
	EF_STAT_SKEWNESS,
	EF_STAT_KURTOSIS,
	EF_STAT_MEAN_CROSSING,
	EF_STAT_NEGATIVE_MEAN_CROSSING,
	EF_STAT_POSITIVE_MEAN_CROSSING,
	EF_AMP_HIGH_FREQUENCY_P2P,
	EF_AMP_LOW_FREQUENCY_P2P,
	EF_FFT_POWER0,
	EF_FFT_FREQ0,
	EF_FFT_POWER1,
	EF_FFT_FREQ1,
	EF_FFT_POWER2,
	EF_FFT_FREQ2,

	EF_COUNT
};

static const uint16_t modelExtractedFeaturesStartIdxForAxle[] = { 0, 4, 11 };
static const uint16_t modelExtractedFeaturesCountForAxle[] = { 4, 7, 4 };

static const uint16_t modelExtractedFeatures[] = {
	/* gx */
	// unused by model EF_AMP_HIGH_FREQUENCY_P2P,
	// unused by model EF_AMP_LOW_FREQUENCY_P2P,
	EF_STAT_MEAN,
	EF_STAT_MAX,
	// unused by model EF_STAT_MIN,
	// unused by model EF_STAT_PFD,
	// unused by model EF_STAT_VARIANCE,
	// unused by model EF_STAT_RMS,
	// unused by model EF_STAT_SKEWNESS,
	EF_STAT_KURTOSIS,
	// unused by model EF_STAT_MEAN_CROSSING,
	EF_STAT_NEGATIVE_MEAN_CROSSING,  // [100]
	// unused by model EF_STAT_POSITIVE_MEAN_CROSSING,
	/* gy */
	// unused by model EF_AMP_HIGH_FREQUENCY_P2P,
	EF_AMP_LOW_FREQUENCY_P2P,  // [32]
	EF_STAT_MEAN,
	EF_STAT_MAX,
	// unused by model EF_STAT_MIN,
	EF_STAT_PFD,
	EF_STAT_VARIANCE,
	// unused by model EF_STAT_RMS,
	// unused by model EF_STAT_SKEWNESS,
	// unused by model EF_STAT_KURTOSIS,
	EF_STAT_MEAN_CROSSING,  // [100]
	EF_STAT_NEGATIVE_MEAN_CROSSING,  // [100]
	// unused by model EF_STAT_POSITIVE_MEAN_CROSSING,
	/* gz */
	// unused by model EF_AMP_HIGH_FREQUENCY_P2P,
	EF_AMP_LOW_FREQUENCY_P2P,  // [32]
	// unused by model EF_STAT_MEAN,
	EF_STAT_MAX,
	// unused by model EF_STAT_MIN,
	// unused by model EF_STAT_PFD,
	EF_STAT_VARIANCE,
	EF_STAT_RMS,
	// unused by model EF_STAT_SKEWNESS,
	// unused by model EF_STAT_KURTOSIS,
	// unused by model EF_STAT_MEAN_CROSSING,
	// unused by model EF_STAT_NEGATIVE_MEAN_CROSSING,
	// unused by model EF_STAT_POSITIVE_MEAN_CROSSING,
};

static const uint16_t modelExtractedFeaturesParamsOffset[] = { 0, 1, 4 };
static const int32_t modelExtractedFeaturesParams[] = { 100, 32, 100, 100, 32 };

static const uint8_t modelOriginalFeatureUsed[] = { 0x07 };

#ifdef __cplusplus
}
#endif

#endif // NEUTON_DSP_CONFIG_H

