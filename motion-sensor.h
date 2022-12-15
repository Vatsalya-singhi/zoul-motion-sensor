/*---------------------------------------------------------------------------*/
/**
 * \addtogroup zoul-sensors
 * @{
 *
 * \defgroup zoul-motion-sensor Digital motion sensor
 * @{
 *
 * \file
 *         Digital motion sensor header file
 * \author
 *         Antonio Lignan <alinan@zolertia.com>
 */
/*---------------------------------------------------------------------------*/
#include "lib/sensors.h"
/* -------------------------------------------------------------------------- */
#ifndef MOTION_SENSOR_H_
#define MOTION_SENSOR_H_
/* -------------------------------------------------------------------------- */
/**
 * \name Motion sensor return and operation values
 * @{
 */
#define MOTION_ACTIVE     SENSORS_ACTIVE
#define MOTION_SUCCESS    0
#define MOTION_ERROR      (-1)
/** @} */
/* -------------------------------------------------------------------------- */
/**
 * \name Motion sensor interrupt callback macro
 * @{
 */
#define MOTION_REGISTER_INT(ptr) presence_int_callback = ptr;
extern void (*presence_int_callback)(uint8_t value);
/** @} */
/* -------------------------------------------------------------------------- */
#define MOTION_SENSOR "Digital motion sensor"
/* -------------------------------------------------------------------------- */
extern const struct sensors_sensor motion_sensor;
/* -------------------------------------------------------------------------- */
#endif /* ifndef MOTION_SENSOR_H_ */
/**
 * @}
 * @}
 */