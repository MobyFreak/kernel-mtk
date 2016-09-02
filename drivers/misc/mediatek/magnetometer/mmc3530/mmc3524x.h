/*
 * Definitions for MMC3524X magnetic sensor chip.
 */
#ifndef __MMC3524X_H__
#define __MMC3524X_H__

#include <linux/ioctl.h>

#define MMC3524x_I2C_NAME		"memsic_mag"
#define CALIBRATION_DATA_SIZE	12
#define SENSOR_DATA_SIZE 9
#ifndef TRUE
	#define TRUE 1
#endif
#define MMC3524X_I2C_ADDR		0x30	// 8-bit    7-bit  0x30

/* MMC3524X register address */
#define MMC3524X_REG_CTRL		         0x07
#define MMC3524X_REG_BITS		         0x08
#define MMC3524X_REG_DATA		         0x00
#define MMC3524X_REG_DS			         0x06
#define MMC3524X_REG_PRODUCTID_0		 0x10
#define MMC3524X_CHIPID_ADDR             0x20
#define MMC3524X_MAG_REG_ADDR_OTP        0x1b

/*Mmc36xx register address*/
#define MMC36XX_I2C_ADDR                 0x30
#define MEMSIC_REG_DATA                  0x00
#define MMC36XX_REG_CTRL0                0x08
#define MMC36XX_REG_CTRL1                0x09
#define MMC36XX_REG_CTRL2                0x0A
#define MMC36XX_CHIPID_ADDR              0x2f
#define MMC36XX_MAG_REG_ADDR_OTP_GATE0   0x0F
#define MMC36XX_MAG_REG_ADDR_OTP_GATE1   0x12
#define MMC36XX_MAG_REG_ADDR_OTP_GATE2   0x13
#define MMC36XX_MAG_REG_ADDR_OTP         0x2A

/*mmc3630x control bit value*/
#define MMC3630X_CTRL_TM                 0x01
#define MMC3630X_CTRL_NOBOOST            0x10
#define MMC3630X_CTRL_SET                0x08
#define MMC3630X_CTRL_RESET              0x10
#define MMC3630X_CTRL_REFILL             0x20

/*MEMSIC MMC36XX  Command to make OTP ready*/
#define MMC36XX_MAG_OTP_OPEN0                   0xE1
#define MMC36XX_MAG_OTP_OPEN1                   0x11
#define MMC36XX_MAG_OTP_OPEN2                   0x80

#define MEMSIC_SENSOR_MMC3630X           0xA
#define MEMSIC_SENSOR_MMC3530X           0x9
#define MEMSIC_SENSOR_MMC3524X           0x8

/* MMC3524X control bit */
#define MMC3524X_CTRL_TM			0x01
#define MMC3524X_CTRL_CM			0x02
#define MMC3524X_CTRL_50HZ		    0x00
#define MMC3524X_CTRL_25HZ		    0x04
#define MMC3524X_CTRL_12HZ		    0x08
#define MMC3524X_CTRL_NOBOOST       0x10
#define MMC3524X_CTRL_SET  	        0x20
#define MMC3524X_CTRL_RESET         0x40
#define MMC3524X_CTRL_REFILL        0x80

#define MMC3524X_BITS_SLOW_16            0x00
#define MMC3524X_BITS_FAST_16            0x01
#define MMC3524X_BITS_14                 0x02

// conversion of magnetic data (for MMC3524X) to uT units
// conversion of magnetic data to uT units
// 32768 = 1Guass = 100 uT
// 100 / 32768 = 25 / 8192
// 65536 = 360Degree
// 360 / 65536 = 45 / 8192


#define CONVERT_M			25
#define CONVERT_M_DIV		8192
#define CONVERT_O			45
#define CONVERT_O_DIV		8192

// sensitivity 512 count = 1 Guass = 100uT

#define MMC3524X_OFFSET_X		32768
#define MMC3524X_OFFSET_Y		32768
#define MMC3524X_OFFSET_Z		32768
#define MMC3524X_SENSITIVITY_X		1024
#define MMC3524X_SENSITIVITY_Y		1024
#define MMC3524X_SENSITIVITY_Z		1024

#endif /* __MMC3524X_H__ */

