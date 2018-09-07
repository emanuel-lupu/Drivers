/*
 * PWM_Driver_Cfg.h
 *
 *  Created on: 29 ian. 2018
 *      Author: Zsole
 */

#ifndef PWM_DRIVER_CFG_H_
#define PWM_DRIVER_CFG_H_

#include "PWM_Driver.h"

#define PWM_DRIVER_SELECTED_CAPTURE_COMPARE_REGISTERS		PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1

#if ((TCNT_DRIVER_TIMER_14)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
#endif

#if ((TCNT_DRIVER_TIMER_13)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
#endif

#if ((TCNT_DRIVER_TIMER_12)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2				NOK
#endif

#if ((TCNT_DRIVER_TIMER_11)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
#endif

#if ((TCNT_DRIVER_TIMER_10)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
#endif

#if ((TCNT_DRIVER_TIMER_9)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2				NOK
#endif

#if ((TCNT_DRIVER_TIMER_8)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_3				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_4				NOK
#endif

#if ((TCNT_DRIVER_TIMER_7)== OK)
	#warning "No Capture Compare functionality on Timer 7"
#endif

#if ((TCNT_DRIVER_TIMER_6)== OK)
	#warning "No Capture Compare functionality on Timer 6"
#endif

#if ((TCNT_DRIVER_TIMER_5)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_3				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_4				NOK
#endif

#if ((TCNT_DRIVER_TIMER_4)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_3				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_4				NOK
#endif

#if ((TCNT_DRIVER_TIMER_3)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_3				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_4				NOK
#endif

#if ((TCNT_DRIVER_TIMER_2)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2				OK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_3				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_4				NOK
#endif

#if ((TCNT_DRIVER_TIMER_1)== OK)
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_3				NOK
	#define PWM_DRIVER_CAPTURE_COMPARE_REGISTER_4				NOK
#endif

#if PWM_DRIVER_CAPTURE_COMPARE_REGISTER_1 == OK
		#define PWM_DRIVER_OUTPUT_COMPARE_1_MODE			PWM_DRIVER_PWM_MODE_1
		#define PWM_DRIVER_OUTPUT_COMPARE_1_PRELOAD_ENABLE  OK
		#define PWM_DRIVER_CAPTURE_COMPARE_1_POLARITY		PWM_DRIVER_ACTIVE_HIGH
		#define PWM_DRIVER_CAPTURE_COMPARE_1_ENABLE			OK
#endif

#if PWM_DRIVER_CAPTURE_COMPARE_REGISTER_2  == OK
		#define PWM_DRIVER_OUTPUT_COMPARE_2_MODE			PWM_DRIVER_PWM_MODE_1
		#define PWM_DRIVER_OUTPUT_COMPARE_2_PRELOAD_ENABLE  OK
		#define PWM_DRIVER_CAPTURE_COMPARE_2_POLARITY		PWM_DRIVER_ACTIVE_HIGH
		#define PWM_DRIVER_CAPTURE_COMPARE_2_ENABLE			OK
#endif

#if PWM_DRIVER_CAPTURE_COMPARE_REGISTER_3 == OK
		#define PWM_DRIVER_OUTPUT_COMPARE_3_MODE			PWM_DRIVER_PWM_MODE_1
		#define PWM_DRIVER_OUTPUT_COMPARE_3_PRELOAD_ENABLE  OK
		#define PWM_DRIVER_CAPTURE_COMPARE_3_POLARITY		PWM_DRIVER_ACTIVE_HIGH
		#define PWM_DRIVER_CAPTURE_COMPARE_3_ENABLE			OK
#endif

#if PWM_DRIVER_CAPTURE_COMPARE_REGISTER_4 == OK
		#define PWM_DRIVER_OUTPUT_COMPARE_4_MODE			PWM_DRIVER_PWM_MODE_1
		#define PWM_DRIVER_OUTPUT_COMPARE_4_PRELOAD_ENABLE  OK
		#define PWM_DRIVER_CAPTURE_COMPARE_4_POLARITY		PWM_DRIVER_ACTIVE_HIGH
		#define PWM_DRIVER_CAPTURE_COMPARE_4_ENABLE			OK
#endif

#endif /* PWM_DRIVER_CFG_H_ */