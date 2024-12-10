// you can use includes, for example:
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int>& A) {
  // write your code in C++14 (g++ 6.2.0)
  int value = 1;
  // sort(A.begin(), A.end());

  qsort(A.data(), A.size(), sizeof(int), [](const void* x, const void* y) {
    const int arg1 = *static_cast<const int*>(x);
    const int arg2 = *static_cast<const int*>(y);
    const auto cmp = arg1 <=> arg2;
    if (cmp < 0) return -1;
    if (cmp > 0) return 1;
    return 0;
  });

  vector<int>::iterator it = A.begin();
  // for(vector<int>::iterator it2 = A.begin(); it2 != A.end(); it2++){
  //     cout << *it2 << " ";
  // }
  // cout << endl << endl;
  while (it != A.end()) {
    if (*it == value) {
      value++;
      if (value >= 100000) {
        return value;
      }
    } else {
      if (*it > value) {
        return value;
      }
    }
    it++;
  }
  return value;
}

int main() {
  // vector<int> A = {1, 3, 6, 4, 1, 2};
  // vector<int> A = {1, 2, 3};
  // vector<int> A = {-1, -3};
  vector<int> A = {10, 9, 8, 7, 6, 5, 3, 2, 1};

  int result = solution(A);

  cout << result << endl;

  return 0;
}