
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	real_speed=500;
	speed=500;
	EVIRD.ENABLED=1;
}

void _CYCLIC ProgramCyclic(void)
{
	DRIVE(&EVIRD);
	if(start == 1)  //Остановка двигателя если отжата кнопка Start
	{
		speed=0;
	}
	start =0;
	real_speed;
}

void _EXIT ProgramExit(void)
{

}

