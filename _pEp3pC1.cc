#include <iostream>

using namespace std;

int _getNumber(int);
int _isNumberPrime(int);
int _findFactors(int);
int _findPrimes(int);
int _findHighestNumber(int);

int main()
{

   int number=0;
   int factors_A1=0; //to be used for the total number of factors
   int factors_A2=0; //to be used for the total number of prime factors
   int high_number=0; //to be used for the highest prime factor
   int factor_B=0; //to be used as a flag

   cout << "Find the highest prime factors." << endl;
   cout << "===============================" << endl;
   cout << endl;

   //get number
   cout << "Obtaining a number to test from the user." << endl;
   cout << "-----------------------------------------" << endl;
   number = _getNumber(number);
   cout << "The number is " << number << endl;
   cout << endl;

   //is number prime?
   cout << "Is the number Prime?" << endl;
   cout << "--------------------" << endl;
   factor_B = _isNumberPrime(number);
   if (factor_B == 1)
   {
      cout << number << " IS prime, and is therefore it's own ";
      cout << "highest prime factor." << endl;
   }
   else
   {
      cout << number << " is NOT prime.\n";
      cout << endl;

      //find factors
      cout << "Find the factors of this number:" << endl;
      cout << "--------------------------------" << endl;
      factors_A1 = _findFactors(number);
      cout << "There are " << factors_A1 << " factors of " << number << endl;
      cout << endl;

      //find primes
      cout << "How many of the factors are prime?" << endl;
      cout << "----------------------------------" << endl;
      factors_A2 = _findPrimes(number);
      cout << "There are " << factors_A2;
      cout << " prime factors of " << number << endl;
      cout << endl;

      //find highest number
      cout << "Which prime factor is the highest?" << endl;
      cout << "----------------------------------" << endl;
      high_number = _findHighestNumber(number);
      cout << "The highest prime factor is " << high_number << endl;
      cout << endl;
      }

   return 0;
}

int _getNumber(int num)
{
   cout << "Please enter a positive integer: ";
   cin >> num;

   return num;
}

int _isNumberPrime(int x_num)
{
   int f_num=0;

   for (int i = 2; i <= x_num; i++)
   {
      if (x_num % i == 0) f_num++;
   }

   return f_num;
}

int _findFactors(int x_num)
{
   int f_num=0;

   for (int i = 2; i <= x_num; i++)
   {
      if (x_num % i == 0)
      {
         f_num++;
         if (f_num == 1) cout << i;
         else cout << ", " << i;
      }
   }
   cout << "\n";

   return f_num;
}

int _findPrimes(int x_num)
{
   int fact_b=0;
   int fact_a=0;

   for (int i = 2; i <= x_num; i++)
   {
      if (x_num % i == 0)
      {
          fact_b = _isNumberPrime(i);
          if (fact_b == 1)
          {
             fact_a++;
             if (fact_a == 1) cout << i;
             else cout << ", " << i;
          }
      }
   }
   cout << "\n";

   return fact_a;
}

int _findHighestNumber(int x_num)
{
   int fact_b=0;
   int fact_h=0;

   for (int i = 2; i <= x_num; i++)
   {
      if (x_num % i == 0)
      {
          fact_b = _isNumberPrime(i);
          if (fact_b == 1) fact_h = i;
      }
   }

   return fact_h;
}

 /* generic template for replication */
 /*
 int _template()
 {
    cout << "template" << endl;

    return 0;
 }
 */

 // TO DO: How to deal with HUGE numbers?
 // hypothesis: translate to hexadecimal?