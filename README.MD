# safe_type_input library
A c++ library to get console input easily while avoiding some of the errors associated with it
----------------------------------------------------

Hecho en 🇵🇷Puerto Rico por Radamés J. Valentín Reyes
----------------------------------------------------

----------------------------------------------------
## Version

1.0

## Note:

- double values input does not return the number with all of the digits
- With this library you can get string input with spaces included
- No input method throws an error to prevent propagation

## Getting started

- Download this project

- Place this project's folder inside the working directory of your program

- import the library as shown below

  ~~~c++
  #include "./pathToFile/safe_type.cpp"
  ~~~

  

## Optional

You can use the namespace of this library

~~~c++
using namespace safe_type_input;
~~~

## Namespace methods

------------------------------------------------------------

###### Returns the inputed string entirely, including spaces. Incorrect input or no input returns en empty string.

Method:

~~~c++
string getStringInput()
~~~

------------------------------------------------------------

###### Returns the inputed integer entirely. Incorrect input or no input returns 0.

Method:

~~~c++
int getIntegerInput()
~~~

------------------------------------------------------------

###### Returns the inputed double  with limited decimal places due to the c++ functions used for parsing limit the amount of digits. Incorrect input or no input returns 0.

Method:

~~~c++
double getDoubleInput()
~~~



## Usage example

~~~c++
#include "safe_type_input.cpp"

using namespace safe_type_input;

int main(){
  string separator = "---------------------------------------------------------------------\n";
  cout << "- Test 1 Text Input" << endl;
  cout << "Enter text" << endl;
  string someText = getStringInput();
  cout << "Text input:" << endl;
  cout << someText << endl;
  cout << separator;
  cout << "- Test 2 Integer Input" << endl;
  cout << "Enter an integer" << endl;
  int anInteger = getIntegerInput();
  cout << "Integer input:" << endl;
  cout << anInteger << endl;
  cout << separator;
  cout << "- Test 3 Double Input" << endl;
  cout << "Enter a double" << endl;
  double aDouble = getDoubleInput();
  cout << "Double input:" << endl;
  cout << aDouble << endl;
  cout << separator;
}
~~~

