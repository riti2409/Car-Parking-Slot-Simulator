#include "globals.h"

int parkingSlotCount = -1;
vector<pair<string, int>> parkingData;
set<int> prioritySlots;
map<string, int> carNumberChecker;

int main() {
  ifstream fin("input.txt", ios::in);
  string query;
  while(getline(fin, query)){
    parseQuery(query);
  }
  fin.close();
}