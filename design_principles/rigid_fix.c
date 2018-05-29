#include <stdint.h>

#define ADC_BITS (14)
#define ADC_DATA_SHIFT (2)
#define ADC_SIGN_CONVERSION (1)
#define RAW_ADC_BITS (ADC_BITS + ADC_DATA_SHIFT + ADC_SIGN_CONVERSION)
typedef_min_int(rpo_raw_adc_t, RAW_ADC_BITS);

#define LFSR_LENGTH (4)
#define LFSR_REPEATS (2)
#define CORRELATED_BITS (RAW_ADC_BITS + LFSR_LENGTH + log_2(LFSR_REPEATS))
typedef_min_int(rpo_correlated_int_t, CORRELATED_BITS);
