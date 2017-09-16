#ifndef __Sound_H__
#define __Sound_H__



#define   SoundSensor_DATA        GPIO_PORTC_DATA
#define   SoundSensor_EN          GPIO_PORTC_DEN
#define   SoundSensor_PIN         (1<<5)

typedef enum Sen_Result{
	DETECTED=1,
	SAFE=0,
}SensorRead_t;

//check sensor reading
SensorRead_t Check_SoundSensor(void);
/*---------------------------------------------------------------------------------------------------
 * Input      :: void
 * Description:: check value from sensor if low then sound detected ,High then no noise,sound.s
 * return     :: enum value DETECTED OR SAFE 
 *
 *--------------------------------------------------------------------------------------------------/








#endif // __Sound_H__
