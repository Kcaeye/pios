
#include <stdio.h>
#include "list.h"
#include "gpio.h"

extern long __bss_start;
extern long __bss_end;

void clear_bss(){

	int x = 0;
	while((&__bss_start)+x != & __bss_end) {
		(&__bss_start)[x] = 0;
		x++;
	}
}

unsigned long get_timer_count () {
	 unsigned long *timer_count_register = 0x3f003004;
	 for(int i = 0; i < 10; i++){
	 	 //printf('c');
		 return *timer_count_register;
	 }
 }


void kernel_main() {

	clear_bss();
	//char *mu_io_reg = 0x7E215040;


	led_init();
    while(1){
	//  *mu_io_reg = 'h';
   	led_on();
	delay();
	led_off();
	delay();
    }

}
