#include <stdint.h>
#include <stm32f10x.h>

#include "system_time.h"
#include "manager.h"

int main(void) {

	Manager_Init();
		neutral_position();

	while(1)
	{
		float temp=0;		
		float temp1=0;	
		
		temp  = (((pDataITF_PI->motor_prop))-127.5f)/127.5f;
//		temp1=0.4;
		Motor_setSpeed(REAR_MOTOR_R,temp);
		Motor_setSpeed(REAR_MOTOR_L,temp);
//   // Motor_setSpeed(REAR_MOTOR_R,0.4);
//		
//		if(pDataITF_STM->travelled_distance_R == 100)
//		{
//			temp1 = 0;
//		}
		
    regulation_pos_front(pDataITF_PI->motor_dir);	
		
	//	Motor_setSpeed(REAR_MOTOR_R,0.3);
		//pDataITF_STM->travelled_distance_R = PositionSensor_get(POSITION_CM, SENSOR_R);
		
//		if (pDataITF_STM->travelled_distance_R == 50)
//		{
//			Motor_setSpeed(REAR_MOTOR_R,0);
//		}
		
		if( pDataITF_PI->m_voiture == 1)
		{
	//		Manoeuvre_arr();
		}
		if ( pDataITF_PI->m_voiture == 0)
		{
	//		Manoeuvre_av();		
		}
	}
}

