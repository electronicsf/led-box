#include<util/delay.h>
#include<avr/io.h>

int i;

int main(void);
void start(void);
void zoomin(void);
void zoomout(void);
void shift(void);
void odd(void);
void even(void);
void inout(void);
void middle(void);
void side(void);
void end(void);

int main()
{
	DDRA=0X0F;
	DDRC=0X0F;
	
	
	while(1)
	{	
		start();
		for(i=0;i<4;i++)
		{
			zoomin();
		}
		shift();
		for(i=0;i<4;i++)
		{
			zoomout();
		}
		shift();
		for(i=0;i<9;i++)
		{
			zoomin();
			zoomout();
		}
		shift();
		odd();
		shift();
		even();
		shift();
		for(i=0;i<4;i++)
		{
			odd();
			even();
		}
		shift();
		inout();
		shift();
		middle();
		shift();
		for(i=0;i<4;i++)
		{
			inout();
			middle();
		}
		shift();
		side();
		end();
	}
	
return (0);
}	


void start()
	{
									/* starting of the code with blinking nine times */
		for(i=0;i<9;i++)
		{
			PORTA=0X0F;
			PORTC=0X0F;
			_delay_ms(1000);
			PORTA=0X00;
			PORTC=0X00;
			_delay_ms(1000);
		}
	}
	
void zoomin()
	{
									/* zoom in for nine times */
			PORTA=0x01;
			PORTC=0x0f;
			_delay_ms(1000);
			PORTA=0x02;
			PORTC=0x0f;
			_delay_ms(1000);
			PORTA=0x04;
			PORTC=0x0f;
			_delay_ms(1000);
			PORTA=0x08;
			PORTC=0x0f;
			_delay_ms(1000);
	}
	
void shift()
	{
									/* shift to new pattern */
		for(i=0;i<3;i++)
		{
			PORTA=0x0f;
			PORTC=0x0f;
			_delay_ms(1000);
			PORTA=0x00;
			PORTC=0x00;
			_delay_ms(1000);
		}
	}
	
void zoomout()
									/* zoomout for nine times */ 
	{
			PORTA=0x08;
			PORTC=0x0f;
			_delay_ms(1000);
			PORTA=0x04;
			PORTC=0x0f;
			_delay_ms(1000);
			PORTA=0x02;
			PORTC=0x0f;
			_delay_ms(1000);
			PORTA=0x01;
			PORTC=0x0f;
			_delay_ms(1000);
	}	
	
void inout()
									/* lights the inner and outer part */
	{
		for(i=0;i<3;i++)
		{
			PORTA=0x09;
			PORTC=0x0f;
			_delay_ms(1000);
		}
	}
	
void middle()
									/* lights the middle two squares */
	{
		for(i=0;i<3;i++)
		{
			PORTA=0x06;
			PORTC=0x0f;
			_delay_ms(1000);
		}
	}
	
void even()
									/* lights the even squares */
	{
		for(i=0;i<4;i++)
		{
			PORTA=0x0A;
			PORTC=0x0f;
			_delay_ms(1000);
		}
	}
	
void odd()
									/* lights the odd squares */
	{
		for(i=0;i<4;i++)
		{
			PORTA=0x05;
			PORTC=0x0f;
			_delay_ms(1000);
		}
	}
	
void side()
									/* shifts between sides */
	{
		PORTA=0x0f;
		PORTC=0x01;
		_delay_ms(1000);
		PORTA=0x0f;
		PORTC=0x02;
		_delay_ms(1000);
		PORTA=0x0f;
		PORTC=0x04;
		_delay_ms(1000);
		PORTA=0x0f;	
		PORTC=0x0f;
		_delay_ms(1000);
		PORTA=0x00;
		PORTC=0x00;
		_delay_ms(1000);
		PORTA=0x0f;
		PORTC=0x04;
		_delay_ms(1000);
		PORTA=0x0f;
		PORTC=0x02;
		_delay_ms(1000);
		PORTA=0x0f;
		PORTC=0x01;
		_delay_ms(1000);
	}	
		
void end()
	{
		for(i=0;i<9;i++)
		{
			PORTA=0x0f;
			PORTC=0x0f;
			_delay_ms(500);
			PORTA=0x00;
			PORTC=0x00;
			_delay_ms(500);
		}
	}
	

