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