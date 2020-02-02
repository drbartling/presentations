#include <stdint.h>
#include <stdlib.h>
#ifndef INT24_MAX
typedef int32_t int24_t;
#endif

#define ADC_BITS (12)
#define ADC_DATA_SHIFT (2)
#define ADC_SIGN_CONVERSION (1)
#define RAW_ADC_BITS (15) // Sum of the above bits

#define LFSR_LENGTH (4)
#define LFSR_REPEATS (2)
#define CORRELATED_BITS (20) // ADC bits + lfsr length + log2(repeats)

typedef int16_t rpo_raw_adc_t;
typedef int24_t rpo_correlated_int_t;
