#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Setw on numbers before you print them
  const size_t ROWS{12};
  const size_t COLS{3};

  /*
  cout << "Tabular data visualization with nested for loops : " << endl;


  for (size_t row{0} ; row < ROWS ; ++ row){

      for (size_t col{0} ; col < COLS ; ++col){
          cout  << "( row "  <<  setw(2) << row << ",col " << setw(2) <<  col <<
  ")  ";
      }
      cout << endl;
  }
  */

  // While loop
  /*
   cout << endl;
   cout << "Tabular data visualization with nested while loops : " << endl;

   //Remember to reset col to 0 after the inner loop is done for the next row
   // to use the right columns.
   size_t row {0};
   size_t col {0};

   while(row < ROWS){

       while(col < COLS){
           cout  << "( row " << setw(2) <<  row << ",col "<< setw(2) <<  col <<
   ") ";
           ++col;
       }
       cout << endl;
       col = 0 ;   // Reset col to 0 to allow printing from col 0 . col is in
   main
                   // function local scope now.
       ++row;
   }
   */

  cout << endl;
  cout << "Tabular data visualization with nested do while loops : " << endl;

  size_t row = 0;
  size_t col = 0;

  do {  // row

    do {
      cout << "( row " << setw(2) << row << ",col " << setw(2) << col << ")   ";
      ++col;
    } while (col < COLS);

    cout << endl;
    col = 0;  // Reset col to 0 to allow printing from col 0 . col is in main
              // function local scope now.
    ++row;
  } while (row < ROWS);

  return 0;
}