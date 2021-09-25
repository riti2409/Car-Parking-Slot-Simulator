#include "globals.h"

bool validateParkingLot(){
  if(parkingSlotCount == -1){
    cout << "Error, parking lot is not yet initialised" << endl;
    return false;
  }
  return true;
}

void parseQuery(string query){
  stringstream queryStream(query);
  vector<string> parsedQuery;
  query.clear();
  while(getline(queryStream, query, ' ')){
    parsedQuery.push_back(query);
  }
  if(parsedQuery.size() > 0){
    if(parsedQuery[0] == "Create_parking_lot"){
      create_parking_lot(parsedQuery);
    }
    else if(parsedQuery[0] == "Slot_numbers_for_driver_of_age"){
      if(validateParkingLot())
        slot_numbers_for_driver_of_age(parsedQuery);
    }
    else if(parsedQuery[0] == "Slot_number_for_car_with_number"){
      if(validateParkingLot())
        slot_number_for_car_with_number(parsedQuery);      
    }
    else if(parsedQuery[0] == "Vehicle_registration_number_for_driver_of_age"){
      if(validateParkingLot())
        vehicle_registration_number_for_driver_of_age(parsedQuery);
    }
    else if(parsedQuery[0] == "Park"){
      if(validateParkingLot())
        park(parsedQuery);
    }
    else if(parsedQuery[0] == "Leave"){
      if(validateParkingLot())
        leave(parsedQuery);
    }
    else{
      cout << "Invalid Query" << endl;
    }
  }
  else{
    cout << "Invalid Query" << endl;
  }
}