#include <stdio.h>
// make s9
// s9 "121", "12345"
int main(int argc, char *argv[])
{
	int i = 0;
	// go through each string in argv why am I skipping argv[0]?
	// because the argv[0] is the name of the application
	for(int i = 0; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	
	// let's make our own array of strings
	char *states[] = { "California", "Oregon", "Washington", "Texas"};
	
	int num_states = 5;
	for(int i = 0; i < num_states; i++) 
	{
		printf("state %d: %s\n", i, states[i]);
	}
	
	return 0;
}
