#include <stdio.h>
void print(int z, int a, int b, int O)
{
	if(O == 1)
	{
		printf("Addition of %d + %d = %d \n",a,b,z);
	}
	else if (O == 2)
	{
		printf("Subtarction of %d - %d = %d \n",a,b,z);
	}
	else if(O == 3)
	{
		printf("Multiplication of %d * %d = %d \n", a,b,z);
	}
	else if(O == 4)
	{
		printf("Division of %d / %d = %d \n", a,b,z);
	}
}

