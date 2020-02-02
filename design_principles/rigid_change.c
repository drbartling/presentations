#include <stdint.h>
#ifndef INT24_MAX
typedef int32_t int24_t;
#endif

#define ADC_BITS (14) // Changing this
#define ADC_DATA_SHIFT (2)
#define ADC_SIGN_CONVERSION (1)
#define RAW_ADC_BITS (17) // Changes this

#define LFSR_LENGTH (4)
#define LFSR_REPEATS (2)
#define CORRELATED_BITS (22) // Changes this

typedef int24_t rpo_raw_adc_t; // Changes this
typedef int24_t rpo_correlated_int_t;
