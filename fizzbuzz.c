// FizzBuzz in C

#include <stdio.h>
#include <string.h>

int main()
{

	for (int num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0) 
			printf("num = %d FizzBuzz\n", num);
		else if (num % 3 == 0) 
			printf("num = %d Fizz\n", num);
		else if (num % 5 == 0) 
			printf("num = %d Buzz\n", num);
		else 
			printf("num = %d\n", num);
	}

	return 0;
}