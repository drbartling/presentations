#include <stdint.h>

#define ADC_BITS (14) // Changing this
#define ADC_DATA_SHIFT (2)
#define ADC_SIGN_CONVERSION (1)
#define RAW_ADC_BITS (17) // Changes this

#define LFSR_LENGTH (4)
#define LFSR_REPEATS (2)
#define CORRELATED_BITS (22) // Changes this

typedef int24_t rpo_raw_adc_t; // Changes this
typedef int24_t rpo_correlated_int_t;

#if sizeof(rpo_raw_adc_t) < (RAW_ADC_BITS / 2 + 1)
#    error "rpo_raw_adc_t is too small to store ADC results"
#endif

#if sizeof(rpo_correlated_int_t) < (RAW_ADC_BITS / 2 + 1)
#    error "rpo_correlated_int_t is too small to store correlated adc results"
#endif
