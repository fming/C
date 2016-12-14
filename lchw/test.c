#include <stdio.h>

int main(int argc, char *argv[])
{
	float average(float avers[]);
	float aver, score[3];
	int i;
	
	for(i = 0; i < 3; i++)
	{
		scanf("%f", &score[i]);
	}
	
	aver = average(score);
	
	printf("%7.2f\n", aver);
	
	
	return 0;
}

float average(float avers[])
{
	int n;
	float sum = 0, aver;
	for(n = 0; n < 3; n++)
	{
		sum = sum +avers[n];
	}
	
	aver = sum /3;
	return aver;
}

