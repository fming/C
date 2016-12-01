#include <stdio.h>

#define getVariableName(x) #x
#define printDebug(x) printf("\nvalue of \"%s\" is: %d\n", #x, x)

int main()
{
	int student_age = 21;

	printf("value of %s is =%d\n", getVariableName(student_age), student_age);
	printDebug(student_age);

	return 0;
}
