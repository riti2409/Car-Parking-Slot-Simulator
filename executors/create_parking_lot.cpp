#include "globals.h"

void create_parking_lot(vector<string> parsedQuery){
  if(parsedQuery.size() == 2){
    char* intCheck;
    int parkingSize = strtol(parsedQuery[1].c_str(), &intCheck, 10);
    if(!*intCheck){
      if(parkingSize >= 1){
        if(parkingSlotCount == -1){
          parkingSlotCount = parkingSize;
          for(int i=1; i<=parkingSlotCount; i++){
            prioritySlots.insert(i);
          }
          parkingData.resize(parkingSlotCount+1, {"", -1});
          cout << "Created parking of " << parkingSize << " slots" << endl;
        }
        else{
          cout << "Error, parking slots are already initialised" << endl;
        }
      }
      else{
        cout << "Error, parking size cannot be zero or negative" << endl;
      }
    }
    else{
      cout << "Invalid data type of parkingSize argument" << endl;
    }
  }
  else{
    cout << "Invalid Argument Count" << endl;
  }
}