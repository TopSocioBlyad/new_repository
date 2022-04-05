
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{

}

void _CYCLIC ProgramCyclic(void)
{
	if(Button_1 ==1) 
	{
		led[0]=!led[0];
		led[1]=led[1];
		led[2]=led[2];
		led[3]=!led[3];
		Button_1=!Button_1;	
	}
	else if(Button_2 ==1) 
	{
		Button_2=!Button_2;
		led[0]=!led[0];
		led[1]=!led[1];
		led[2]=led[2];
		led[3]=!led[3];
	}
	else if(Button_3 ==1) 
	{	
		Button_3=!Button_3;
		led[0]=!led[0];
		led[1]=!led[1];
		led[2]=!led[2];
		led[3]=led[3];
	}
	else if(Button_4 ==1) 
	{
		Button_4=!Button_4;
		led[0]=led[0];
		led[1]=!led[1];
		led[2]=led[2];
		led[3]=!led[3];
	}
	led1=led[0];
	led2=led[1];
	led3=led[2];
	led4=led[3];
	
}

void _EXIT ProgramExit(void)
{

}

