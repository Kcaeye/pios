#include "serial.h"

void putc(int data){
	//mu_io for pi 4
	int *mu_io_reg = 0xFE215004;
	*mu_io_reg = data;
}
