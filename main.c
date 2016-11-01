#include<avr/io.h>
#include<util/delay.h>




int main(void);

int main()
{
DDRA = 0b00001111;
DDRC = 0b00001111;

while(1)
	{
	PORTA = 0b0001;
	PORTC = 0b1111;
	_delay_ms(100);
	PORTA = 0b0010;
	PORTC = 0b1111;
	_delay_ms(100);
	PORTA = 0b0100;
	PORTC = 0b1111;
	_delay_ms(100);
	PORTA = 0b1000;
	PORTC = 0b1111;
	_delay_ms(100);
	}
return(0);
}