//Hecho en 🇵🇷Puerto Rico por Radamés J. Valentín Reyes
#ifndef safe_type_input_heading
#define safe_type_input_heading
  #include <string>
  #include <iostream>
  #include "libraries/number_parser/number_parser.cpp"
  

  using namespace std;
  using namespace number_parser;

  namespace safe_type_input{
    static string getStringInput(){
      string input;
      //Get the user input including spaces
        //Use delimiter to end input stream https://www.geeksforgeeks.org/getline-string-c/
      getline(cin,input,'\n');
      //Return the result
      return input;
    }
    static int getIntegerInput(){
      string intAsString = getStringInput();
      int parsedInt = parseInt(intAsString);
      return parsedInt;
    }
    static double getDoubleInput(){
      string doubleAsString = getStringInput();
      return parseDouble(doubleAsString);
    }
  }
#endif