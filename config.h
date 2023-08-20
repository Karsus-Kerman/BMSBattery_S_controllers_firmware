/*
 * config.h
 *
 *  Automatically created by OSEC Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define NUMBER_OF_PAS_MAGS 36
#define limit 255
#define timeout 3125
#define wheel_circumference 2160L
#define limit_without_pas 255
#define ADC_THROTTLE_MIN_VALUE 72
#define ADC_THROTTLE_MAX_VALUE 172
#define BATTERY_VOLTAGE_MIN_VALUE 156
#define BATTERY_CURRENT_MAX_VALUE 130L
#define PHASE_CURRENT_MAX_VALUE 260L
#define REGEN_CURRENT_MAX_VALUE 0L
#define MOTOR_ROTOR_DELTA_PHASE_ANGLE_RIGHT 235
#define current_cal_a 40
#define LEVEL_1 11
#define LEVEL_2 25
#define LEVEL_3 50
#define LEVEL_4 75
#define LEVEL_5 100
#define MORSE_TIME_1 50
#define MORSE_TIME_2 50
#define MORSE_TIME_3 50
#define RAMP_END 0
#define P_FACTOR 0.5
#define I_FACTOR 0.1
#define GEAR_RATIO 116L
#define PAS_THRESHOLD 1.9
#define RAMP_START 0
#define limit_with_throttle_override 255
#define CORRECTION_AT_ANGLE 127
#define DISPLAY_TYPE_KT_LCD3
#define ANGLE_4_0 1
#define ANGLE_6_60 43
#define ANGLE_2_120 86
#define ANGLE_3_180 128
#define ANGLE_1_240 171
#define ANGLE_5_300 213
#define TQS_CALIB 70
#define ACA 14466
#define EEPROM_INIT_MAGIC_BYTE 91 // makes sure (chance of fail 1/255) eeprom is invalidated after flashing new config
#define ADC_BATTERY_VOLTAGE_K 69
#define ACA_EXPERIMENTAL 128
#define BATTERY_VOLTAGE_MAX_VALUE 218

#endif /* CONFIG_H_ */
