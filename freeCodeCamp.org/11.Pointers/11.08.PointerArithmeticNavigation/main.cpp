#include <iostream>

using namespace std;

int main() {
  // Increment/ decrement pointer addresses manually

  int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int* p_score{scores};

  cout << "Values in scores array (p_score pointer increment) : " << endl;

  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << "Address : " << p_score << " value : " << *(p_score) << endl;

  ++p_score;  // Moves froward by sizeof(int) : 4 bytes
  cout << endl;

  cout << endl;
  cout << "Explicit addition of integer : " << endl;
  p_score = scores;  // Reset the pointer to the start of the array
  cout << "scores[4] : " << *(p_score + 4)
       << endl;  // Moves forward by 4 * sizeof(int)

  // Can use loops to print these things out : easier
  p_score = scores;

  cout << endl;
  cout << "Pointer arithmetic on p_scores pointer and a for loop: " << endl;
  for (size_t i{0}; i < size(scores); ++i) {
    cout << "Value : " << *(p_score + i) << endl;  // scores[i]
  }

  // Can also do arithmetic on the array name just like any pointer.
  p_score = scores;

  cout << endl;
  cout << "Pointer arithmetic on array name: " << endl;
  for (size_t i{0}; i < size(scores); ++i) {
    cout << "Value : " << *(scores + i) << endl;
  }

  // Can Print the elements in reverse order
  cout << endl;
  cout << "Elements in reverse order with decrementing pointer arithmetic: "
       << endl;
  for (size_t i{size(scores)}; i > 0; --i) {
    cout << "Value : " << *(scores + i - 1)
         << endl;  // Here we do the -1 thing, because
                   // scores is already pointing to the first
                   // element in the array.
  }

  // Print in reverse order with -- operator on p_score
  cout << endl;
  cout << "Elements in reverse order -- arithmetic on the p_scores pointer: "
       << endl;
  p_score = scores + size(scores) - 1;
  for (size_t i{size(scores)}; i > 0; --i) {
    cout << "Value : " << *(p_score--)
         << endl;  // Here we do the -1 thing, because
                   // scores is already pointing to the first
                   // element in the array.
  }

  // Can Print the elements in reverse order with array index
  cout << endl;
  cout << "Elements in reverse order with array index notation: " << endl;
  for (size_t i{size(scores)}; i > 0; --i) {
    cout << "Value : " << scores[i - 1] << endl;
  }

  p_score = scores;

  scores[0] = 31;  // Array index notation
  *(scores + 1) =
      32;  // Equivalent to scores[1] = 32 . Pointer arithmetic on array name
  *(p_score + 2) = 33;  // Equivalent to scores[2] = 33 . Pointer arithmetic on
                        // p_score pointer

  cout << endl;
  cout << "Printing out the array after modification of 3 first elements: "
       << endl;
  for (size_t i{0}; i < size(scores); ++i) {
    cout << "Value : " << scores[i] << endl;
  }

  return 0;
}