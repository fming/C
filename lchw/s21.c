#include <stdio.h>
#include <ctype.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	printf("Max of  INT(8) %d \n", INT8_MAX);
	printf("Max of UINT(8) %d \n", UINT8_MAX);
	
	int_least8_t a = 23;
	printf("Lease of int(8) %d \n", a );
	
	
	return 0;
}

