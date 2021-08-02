/*ex06_52.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>

void math_Functions(int);

int main()
{ 
   cout << "This program applies math functions to the number x entered by the user:\n"
        << "to round x to the smallest integer not less than x, enter 1;\n"
        << "to calculate the cosine of x (x in radians), enter 2;\n"
        << "to calculate the exponent ex, enter 3;\n"
        << "to calculate the absolute value of x, enter 4;\n"
        << "to round x to the largest integer not exceeding x, enter 5;\n"
        << "to calculate the remainder of x / y as a floating point number, enter 6;\n"
        << "to calculate the natural logarithm of x (base e), enter 7;\n"
        << "to calculate the decimal logarithm of x (base 10), enter 8;\n"
        << "to raise x to the power of y, press 9;\n"
        << "to calculate trigonometric sine x (in radians), enter 10;\n"
        << "to calculate the square root of x (where x is a non-negative value), enter 11;\n"
        << "to calculate the trigonometric tangent x (x in radians), enter 12.\n";

   int number_function;
   cin >> number_function;
   math_Functions(number_function);
   return 0;
}

void math_Functions(int num_fun)
{
   double x, y;
   switch(num_fun)
   {
      case 1: cout << "To round x to the smallest integer not less than x, enter the values x "
	           << "(to exit q):"
	      while(x != q)
	      {
	         cin >> x;
	         cout << "ceil(x) = " << ceil(x) << endl;
	      }
	      break; 
   }
}
