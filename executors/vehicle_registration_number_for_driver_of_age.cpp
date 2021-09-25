#include "globals.h"

void vehicle_registration_number_for_driver_of_age(vector<string> parsedQuery){
  if(parsedQuery.size() == 2){
    char* intCheck;
    int driverAge = strtol(parsedQuery[1].c_str(), &intCheck, 10);
    if(!*intCheck){
      if(driverAge >= 1){
        bool commaFlag = false;
        for(int slotNumber = 1; slotNumber <= parkingSlotCount; slotNumber++){
          if(parkingData[slotNumber].second == driverAge){
            if(commaFlag)
              cout << ",";
            cout << parkingData[slotNumber].first;
            commaFlag = true;
          }
        }
        cout << endl;
      }
      else{
        cout << "Error, driver's age cannot be zero or negative" << endl;
      }
    }
    else{
      cout << "Invalid data type of driver age argument" << endl;
    }
  }
  else{
    cout << "Invalid Argument Count" << endl;
  }
}