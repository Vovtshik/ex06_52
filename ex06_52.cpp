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
	           << "(to exit enter 22):\n";
	      cin >> x;
	      while(x != 22)
	      {
	         cout << "ceil(" << x << ") = " << ceil(x) << endl;
		 cin >> x;
	      }
	      break; 
      case 2: cout << "To calculate the cosine of x (x in radians, enter the values x"
	           << "(to exit enter 22):\n";
	       cin >> x;
              while(x != 22)
              {
                 cout << "cos(" << x << ") = " << cos(x) << endl;
                 cin >> x;
              }
              break;
      case 3: cout << "To calculate the exponent ex, enter the values x"
                   << "(to exit enter 22):\n";
              cin >> x;
              while(x != 22)
              {
                 cout << "exp(" << x << ") = " << exp(x) << endl;
                 cin >> x;
              }
              break;
      case 4: cout << "To calculate the absolute value of x, enter the values x"
                   << "(to exit enter 22):\n";
              cin >> x;
              while(x != 22)
              {
                 cout << "fabs(" << x << ") = " << fabs(x) << endl;
                 cin >> x;
              }
              break;
       case 5: cout << "To round x to the largest integer not exceeding x, enter the values x"
                   << "(to exit enter 22):\n";
              cin >> x;
              while(x != 22)
              {
                 cout << "floor(" << x << ") = " << floor(x) << endl;
                 cin >> x;
              }
              break;
       case 6: cout << "To calculate the remainder of x/y as a floating point number\n"
	            << "enter the values x\n";
              cin >> x;
	      if(x == 22)
	         break;
	      cout << "enter the values y\n";
	      cin >> y;
              while(x != 22)
              {
                 cout << "fmod(" << x <<", " << y  << ") = " << fmod(x, y) << endl;
                 cin >> x;
		 if(x == 22)
                    break;
		 cin >> y;
              }
              break;
      case 7: cout << "To calculate the natural logarithm of x (base e), enter the values x"
                   << "(to exit enter 22):\n";
              cin >> x;
              while(x != 22)
              {
                 cout << "log(" << x << ") = " << log(x) << endl;
                 cin >> x;
              }
              break;     
      case 8: cout << "To calculate the decimal logarithm of x (base 10), enter the values x"
                   << "(to exit enter 22):\n";
              cin >> x;
              while(x != 22)
              {
                 cout << "log10(" << x << ") = " << log10(x) << endl;
                 cin >> x;
              }
              break; 
      case 9: cout << "To raise x to the power of y\n"
                    << "enter the values x\n";
              cin >> x;
              if(x == 22)
                 break;
              cout << "enter the values y\n";
              cin >> y;
              while(x != 22)
              {
                 cout << "pow(" << x <<", " << y  << ") = " << pow(x, y) << endl;
                 cin >> x;
                 if(x == 22)
                    break;
                 cin >> y;
              }
              break;
      case 10: cout << "To calculate trigonometric sine x (in radians), enter the values x"
                   << "(to exit enter 22):\n";
              cin >> x;
              while(x != 22)
              {
                 cout << "sin(" << x << ") = " << sin(x) << endl;
                 cin >> x;
              }
              break;
       case 11: cout << "To calculate the square root of x (where x is a non-negative value),"
	             << " enter the values x\n"
                     << "(to exit enter 22):\n";
              cin >> x;
              while(x != 22)
              {
                 cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
                 cin >> x;
              }
              break;
       case 12: cout << "To calculate the trigonometric tangent x (x in radians),"
	             << " enter the values x"
                     << "(to exit enter 22):\n";
              cin >> x;
              while(x != 22)
              {
                 cout << "tan(" << x << ") = " << tan(x) << endl;
                 cin >> x;
              }
              break;
      
   }
}
