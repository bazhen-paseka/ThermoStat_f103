//******************************************************************************************
#ifndef SD_LOGGER_F103_CONFIG_H_INCLUDED
#define SD_LOGGER_F103_CONFIG_H_INCLUDED
//******************************************************************************************

	#define SOFT_VERSION			150


	#define	SECOND					5
	#define ADR_I2C_DS3231 			0x68
	#define SET_RTC_TIM_AND_DATE	0

	#define ADR_I2C_FC113 			0x27

	#define CLUSTER_512		512
	#define CLUSTER_1024	1024
	#define CLUSTER_2048	2048
	#define CLUSTER_4096	4096
	#define CLUSTER_8192	8192
	#define CLUSTER_SIZE 			CLUSTER_2048

//******************************************************************************************
#endif	//	SD_LOGGER_F103_CONFIG_H_INCLUDED
