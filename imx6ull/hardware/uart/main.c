
#include "uart.h"
#include "printf.h"
#include "led.h"


int  main()
{

	uart_init();

	while(1)
	{
		printf_test();
	
		delay(10000000);
	}
			
	return 0;
}


