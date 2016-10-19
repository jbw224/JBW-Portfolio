#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, c = 2;

	cout <<"Enter a number to check if it is prime: \n";
	cin >>n;

	for (c = 2; c <= n-1; c++)
	{
		if(n % c == 0)
		{
			cout << n <<", is not prime. \n";
			break;

		}

	}

	if (c == n)
		cout << n <<" is prime.\n";

	return EXIT_SUCCESS;

	}