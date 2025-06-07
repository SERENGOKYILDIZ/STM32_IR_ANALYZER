#include <ir_remote.h>

void IR_Init(){
	  HAL_TIM_Base_Start(IR_TIMER);
	  __HAL_TIM_SET_COUNTER(IR_TIMER, 0);
}

char IR_Get_Char(uint32_t num){
	char value;
	for(int i=0;i<sizeof(nums);i++)
	{
		if(nums[i]==num){
			value = chars[i];
			break;
		}
	}
	return value;
}
