#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int key;
  int value;
} HashItem;

void findPair(int nums[], int n, int target){
  HashItem* hashTable = (HashItem*)calloc(n, sizeof(HashItem) * n);
  for(int i = 0; i < n; i++){
    int complement = target - nums[i];
    if(hashTable[complement].key != 0){
      printf("Pair found (%d, %d)\n", hashTable[complement].key, nums[i]);
    }
    hashTable[nums[i]].key = nums[i];
  }
  
}

int main () {
  int nums[] = {8, 7, 2, 5, 3, 1}, target = 10;
  int n = sizeof(nums)/sizeof(nums[0]);

  findPair(nums, n, target);

  return 0;
}