#include <avr/io.h>
#include <util/delay.h>
 
int main() {
	DDRD = 0xff;
	while (1) {
		PORTD = 0x00;
		_delay_ms(50);
		PORTD = 0xff;
		_delay_ms(50);
	}
}
