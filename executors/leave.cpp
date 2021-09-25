#include "globals.h"

void leave(vector<string> parsedQuery){
  if(parsedQuery.size() == 2){
    char* intCheck;
    int slotNumber = strtol(parsedQuery[1].c_str(), &intCheck, 10);
    if(!*intCheck){
      if(slotNumber >= 1){
        
        string carNumber = parkingData[slotNumber].first;
        int driverAge = parkingData[slotNumber].second;
        
        if(driverAge != -1){
          prioritySlots.insert(slotNumber);
          carNumberChecker.erase(carNumber);
          parkingData[slotNumber] = {"", -1};
          cout << "Slot number "<< 2 <<" vacated, the car with vehicle registration number \""<< carNumber <<"\" left the space, the driver of the car was of age " << driverAge << endl;
        }
        else{
          cout << "Error, no car is parked at slot " << slotNumber << endl;
        }

      }
      else{
        cout << "Error, slot number cannot be zero or negative" << endl;
      }
    }
    else{
      cout << "Invalid data type of slot number argument" << endl;
    }
  }
  else{
    cout << "Invalid Argument Count" << endl;
  }
}