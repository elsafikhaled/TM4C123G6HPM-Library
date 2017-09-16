#include "Sound.h"


SensorRead_t Check_SoundSensor(void){
//check signal	
 if(!(SoundSensor_DATA & SoundSensor_PIN)){
	 //there is a sound in our area 
	 return DETECTED;
 }	
 else{
	 return SAFE;
 }	
	
}//End of sound function