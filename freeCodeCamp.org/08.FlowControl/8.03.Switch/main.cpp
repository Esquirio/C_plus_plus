#include <iostream>
#include <string>

using namespace std;

// TOOLS
const int PEN{10};
const int MARKER{20};
const int ERASER{30};
const int RECTANGLE{40};
const int CIRCLE{50};
const int ELLIPSE{60};

int main() {
  int tool{ERASER};

  switch (tool) {
    case PEN:
      /* code */
      cout << "Active tool is pen!" << endl;
      break;

    case MARKER:
      /* code */
      cout << "Active tool is marker!" << endl;
      break;

    case ERASER:
      /* code */
      cout << "Active tool is eraser!" << endl;
      break;

    case RECTANGLE:
      /* code */
      cout << "Active tool is rectangle!" << endl;
      break;

    case CIRCLE:
      /* code */
      cout << "Active tool is circle!" << endl;
      break;

    case ELLIPSE:
      /* code */
      cout << "Active tool is ellipse!" << endl;
      break;

    default:
      cout << "No match found" << endl;
      break;
  }

  /*
// Condition can only be integer of enum (We'll learn about enums later in the
course) std::string name {"John"}; switch (name) // Compiler error!
{

}
*/

  cout << "Moving on" << endl;
  return 0;
}