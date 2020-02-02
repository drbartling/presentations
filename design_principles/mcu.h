#ifndef MCU_H
#define MCU_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

extern uint16_t adccon;
extern uint16_t adcsamp;

#define typedef_min_int(a, b)

#define mode_0 0
#define mode_1 0
#define card_cs_pin 0
#define sensor_cs_pin 0
#define SENSOR_CONFIGURATION 0
#define spi_success 0

int spi_acquire(int, int);
int spi_mode_get(void);
void fat_init(void);
void spi_init(int);
void spi_release(void);
void spi_write(int, int);

int ADC1_done(void);
int ADC1_sample_get(void);
int ADC1_start_conversion(void);

#ifdef __cplusplus
}
#endif
#endif /* end of include guard: MCU_H */
