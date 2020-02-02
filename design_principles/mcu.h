#ifndef MCU_H
#define MCU_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

extern uint16_t adccon;
extern uint16_t adcsamp;

#define typedef_min_int(a,b)

#define mode_0 0
#define mode_1 0
#define card_cs_pin 0
#define sensor_cs_pin 0
#define SENSOR_CONFIGURATION 0
#define spi_success 0
int spi_init(int);
int spi_aquire(int,int);


#ifdef __cplusplus
}
#endif
#endif /* end of include guard: MCU_H */
