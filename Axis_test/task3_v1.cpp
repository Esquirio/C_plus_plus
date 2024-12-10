// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(vector<string> &E) {
  // write your code in C++14 (g++ 6.2.0)
  vector<vector<int>> days = {vector<int>(), vector<int>(), vector<int>(),
                              vector<int>(), vector<int>(), vector<int>(),
                              vector<int>(), vector<int>(), vector<int>(),
                              vector<int>()};
  int i = 0, chosenDays[2] = {0, 0}, result = 0;
  vector<int> dayOne = vector<int>(), dayTwo = vector<int>();
  auto size = 0;

  for (string value : E) {
    if (value.compare("") != 0)
      for (auto elem : value) {
        days.at(static_cast<int>(elem - '0')).push_back(i);
      }
    i++;
  }

  for (vector<vector<int>>::iterator it = days.begin(); it != days.end();
       it++) {
    if (size <= (*it).size()) {
      chosenDays[0] = it - days.begin();
      size = (*it).size();
    }
  }

  size = 0;
  i = 0;
  for (vector<int> day : days) {
    if (size <= day.size()) {
      dayOne = day;
      size = day.size();
      // cout << i << endl;
    }
    i++;
  }

  // cout << "---------" << endl;
  // Remove all the people that are already in DayOne
  for (vector<string>::iterator it = E.begin(); it != E.end(); it++) {
    for (int employee : dayOne) {
      if (it - E.begin() == employee) {
        *it = "";
      }
    }
  }

  i = 0;
  days.clear();
  days = {vector<int>(), vector<int>(), vector<int>(), vector<int>(),
          vector<int>(), vector<int>(), vector<int>(), vector<int>(),
          vector<int>(), vector<int>()};

  for (string value : E) {
    if (value.compare("") != 0)
      for (auto elem : value) {
        days.at(static_cast<int>(elem - '0')).push_back(i);
      }
    i++;
  }

  for (vector<vector<int>>::iterator it = days.begin(); it != days.end();
       it++) {
    if (size <= (*it).size()) {
      chosenDays[1] = it - days.begin();
      size = (*it).size();
    }
  }

  size = 0;
  for (vector<int> day : days) {
    if (size <= day.size()) {
      dayTwo = day;
      size = day.size();
    }
  }

  // Remove DayOne from all left people
  // Run Everything again
  return result = dayOne.size() + dayTwo.size();
}

int main() {
  vector<string> E = {"039", "4", "14", "32", "", "34", "7"};
  int result = solution(E);
  cout << result << endl << endl;

  E.clear();
  E = {"801234567", "180234567", "0", "189234567", "891234567", "98", "9"};
  result = solution(E);

  cout << result << endl << endl;

  E.clear();
  E = {"5421", "245", "1452", "0345", "53", "354"};
  result = solution(E);

  cout << result << endl << endl;

  return 0;
}