#include <iostream>

#include <cmath>

using namespace std;

int pownum(int num, int p)

{

 return pow(num,p);

}


double pownum(double num, double p)

{

 return pow(num,1/p);

}


int main(int argc, char* argv[])

{

 int number, power,result;

 double number1,power1,result1;

 cout << "Write integer number, double number , integer power and double power" << endl;

 cin >> number >> number1 >> power >> power1;

 result = pownum(number, power);

 result1 = pownum(number1,power1);

 cout << "Result of integer function = " <<result << endl << "Result of double function = " <<result1; 

 return 0;

}
