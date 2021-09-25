#include "globals.h"

void slot_number_for_car_with_number(vector<string> parsedQuery){
  if(parsedQuery.size() == 2){
    string carNumber = parsedQuery[1];
    if(carNumberChecker.find(carNumber) != carNumberChecker.end()){
      cout << carNumberChecker[carNumber] << endl;
    }
    else{
      cout << "Error, car with given slot number is not present in the parking lot" << endl;
    }
  }
  else{
    cout << "Invalid Argument Count" << endl;
  }
}