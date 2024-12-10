#include <iostream>

using namespace std;

void findPair(int nums[], int size, int target) {
  // Consider each element except the last
  for (int i = 0; i < size - 1; i++)
    // start from the i'th element until the last element
    for (int j = i + 1; j < size; j++)
      if (nums[i] + nums[j] == target)
        cout << "Pair found (" << nums[i] << ", " << nums[j] << ")" << endl;
  return;
}

int main() {
  int nums[] = {8, 7, 2, 5, 3, 1};
  int target = 10;
  int size = sizeof(nums) / sizeof(nums[0]);
  findPair(nums, size, target);

  return 0;
}