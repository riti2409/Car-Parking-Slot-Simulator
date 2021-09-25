#include "globals.h"

void park(vector<string> parsedQuery){
  if(parsedQuery.size() == 4){
    if(parsedQuery[2] == "driver_age"){
      char* intCheck;
      string carNumber = parsedQuery[1];
      int driverAge = strtol(parsedQuery[3].c_str(), &intCheck, 10);
      if(!*intCheck){
        if(driverAge >= 1){
          if(carNumberChecker.find(carNumber) == carNumberChecker.end()){
            if(!prioritySlots.empty()){
              int slotNumber = *prioritySlots.begin();
              prioritySlots.erase(prioritySlots.begin());

              parkingData[slotNumber] = {carNumber, driverAge}; 
              carNumberChecker[carNumber] = slotNumber;

              cout << "Car with vehicle registration number \"" << carNumber <<"\" has been parked at slot number "<< slotNumber << endl;
            }
            else{
              cout << "Error, parking lot is full" << endl;
            }
          }
          else{
            cout << "Error, car with given number is already present in parking lot" << endl;
          }
        }
        else{
          cout << "Error, driver's age cannot be zero or negative" << endl;
        }
      }
      else{
        cout << "Invalid data type of driverAge argument" << endl;
      }
    }
    else{
      cout << "Invalid argument" << endl;
    }
  }
  else{
    cout << "Invalid argument count" << endl;
  }
}