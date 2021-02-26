#include "serial.h"

void putc(int data){
	int *mu_io_reg = 0xFE215004;
	*mu_io_reg = data;
}
