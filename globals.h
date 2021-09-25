#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <set>
#include <map>

using namespace std;

extern int parkingSlotCount;
extern vector<pair<string, int>> parkingData; // stores car number and age
extern set<int> prioritySlots;
extern map<string, int> carNumberChecker; // stores car number and slot number

void parseQuery(string query);
void create_parking_lot(vector<string> parsedQuery);
void slot_numbers_for_driver_of_age(vector<string> parsedQuery);
void slot_number_for_car_with_number(vector<string> parsedQuery);
void vehicle_registration_number_for_driver_of_age(vector<string> parsedQuery);
void park(vector<string> parsedQuery);
void leave(vector<string> parsedQuery);