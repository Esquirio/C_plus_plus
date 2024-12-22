#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, int> findPair(vector <int> nums, int target){
  unordered_map<int, int> result;
  unordered_map<int, int> map;
  int n = nums.size();

  for(int i = 0; i < n; i++){
    int complement = target - nums[i];
    if(map.find(complement) != map.end()){
      result.insert({complement, nums[i]});
    }
    map[nums[i]] = i;
  }
  return result;
}

void printResult(unordered_map<int, int> result){
  for(auto it = result.begin(); it != result.end(); it++){
    cout << "Pair found (" << it->first << "," << it->second << ")" << endl;
  } 
}

int main() {
  vector <int> nums = {8, 7, 2, 5, 3, 1};
  unordered_map<int, int> result;
  int target = 10;
  
  result = findPair(nums, target);
  
  if(result.size() == 0){
    cout << "Pair not found" << endl;
  }
  else{
    printResult(result);
  }

  return 0;
}