// Area of circle &&
// Program to find Factorial number
#include <iostream>

using namespace std;

void calculateAOC()
{
  float pi = 3.14;
  float area = 0, radius;
  cout << "Enter the radius value : ";
  cin >> radius;
  area = pi * (radius * radius);
  cout << "Area of Circle: " << area << endl;
}

void findFactorial()
{
  int i, num, fact=1;
  cout << "Enter the input value, like..integer : ";
  cin >> num;

  for (i = 1; i <= num; i++)
  {

    fact = fact * i;

  }
  cout << "Factorial of " << num << " is " << fact;
  cout << endl;
}

// driver code the main() function
int main()
{
  cout << "|---------------------------------|" << endl;
  cout << "| 1. Area of Circle               |" << endl;
  cout << "| 2.Find The factorial of a number|" << endl;
  cout << "| --------------------------------|" << endl;
  calculateAOC();
  cout << endl;
  cout << endl;
  cout << endl;
  findFactorial();
  cout << "|-----------------------------------|" << endl;
  cout << "|         ***End Program***         |" << endl;
  cout << "|-----------------------------------|" << endl;
  return 0;
}
