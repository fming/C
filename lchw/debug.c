#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{	
	int i = 0;
	
	
	for(int j = 0; j < argc; j++)
	{
		printf("---------%s \n", argv[j]);
	}
	
	for(; i < 10; i++)
	{
		printf("---------------------->\n");
		sleep(1);
	}
	
	return 0;
}






