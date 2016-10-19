// Fibonacci numbers in C++

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    cout << "-----------------\n";
    cout << "Fibonacci numbers\n";
    cout << "-----------------\n";
    cout << "\n";

    int prev_num=0;
    int curr_num=1;
    int fib_num=1;
    int term=0;
    int sum_even=0;
    int i=1;

    cout << "----------------------------------------------------------\n";
    cout << "\n";

    do
    {
           if (fib_num % 2 == 0)
           {
              sum_even = sum_even + fib_num;
              cout << i << " - " << "fibonacci number = " << fib_num;
              cout << " - even" << " - even number sum = " << sum_even << "\n";
           }
           else cout << i << " - " << "fibonacci number = " << fib_num << "\n";

           fib_num = prev_num + curr_num;
           prev_num = curr_num;
           curr_num = fib_num;

           term = i;
           i++;

    }while (fib_num < 4000000);

    cout << "\n";
    cout << "Last term iteration = " << term << "\n";
    cout << "Even number sum = " << sum_even << "\n";
    cout << "\n";
    cout << "----------------------------------------------------------\n";

    return 0;
}