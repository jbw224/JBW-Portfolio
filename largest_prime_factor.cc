// Program LargestPrimeFactor.cpp:
// Compile with
// g++ -O3 -Wall -std=c++98 -pedantic -o LargestPrimeFactor LargestPrimeFactor.cpp

#include <string>
#include <iostream>

namespace {
  const std::string program_name = "LargestPrimeFactor";
  const std::string error_output = "ERROR[" + program_name + "]: ";
  const std::string version_number = "0.1";

  enum ErrorCodes { reading_error = 1, range_error = 2 };
  typedef unsigned long uint_type;
  const uint_type example = 600851475143; // compile-time warnings will show
  // whether uint_type is sufficient
}

int main() 
{

  uint_type number;
  
  std::cout << "Please enter a number to have its largest prime factor found:" << std::endl;
   
  std::cin >> number;
  
  if (not std::cin) 
  {
    std::cerr << error_output << "Number not of the required unsigned integer type.\n";
	
    return reading_error;
  }
  
  if (number <= 1) 
  {
    std::cerr << error_output << "Number " << number << " has no largest prime factor.\n";
	
    return range_error;
  }
  
  const uint_type input = number;

  uint_type largest_factor;
  
  for (uint_type factor = 2; factor <= number/factor; ++factor)
    if (number % factor == 0) {
      largest_factor = factor;
      do number /= factor; while (number % factor == 0);
    }
	
  if (number != 1) largest_factor = number;

  std::cout << "The largest prime factor of " << input << " is " << largest_factor << ".\n";
}