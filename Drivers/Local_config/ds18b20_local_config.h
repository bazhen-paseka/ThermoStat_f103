//******************************************************************************************
#ifndef DS18B20_LOCAL_CONFIG_H_INCLUDED
#define DS18B20_LOCAL_CONFIG_H_INCLUDED
//******************************************************************************************

	#define DS18B20_HSE_72MHZ		72
	#define DS18B20_HSE_64MHZ		64
	#define DS18B20_HSE_56MHZ		56
	#define DS18B20_HSE_48MHZ		48
	#define DS18B20_HSE_40MHZ		40
	#define DS18B20_HSE_32MHZ		32
	#define DS18B20_HSE_24MHZ		24
	#define DS18B20_HSE_16MHZ		16
	#define DS18B20_HSE_08MHZ		8

	#define DS18B20_HSE_DIVISION	((DS18B20_HSE_16MHZ*1000*3) / (72*2))

//******************************************************************************************
#endif	//	DS18B20_LOCAL_CONFIG_H_INCLUDED
