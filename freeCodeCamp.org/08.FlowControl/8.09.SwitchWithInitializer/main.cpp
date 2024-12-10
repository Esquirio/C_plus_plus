#include <iostream>

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

  switch (double strength{3.56}; tool) {
    case PEN:
      /* code */
      cout << "Active tool is pen. Strength: " << strength << endl;
      break;

    case MARKER:
      /* code */
      cout << "Active tool is marker. Strength: " << strength << endl;
      break;

    case ERASER:
    case RECTANGLE:
    case CIRCLE:
      /* code */
      cout << "Drawing Shapes. Strength: " << strength << endl;
      break;

    case ELLIPSE:
      /* code */
      cout << "Active tool is ellipse. Strength: " << strength << endl;
      break;

    default:
      cout << "No match found. Strength: " << strength << endl;
      break;
  }

  return 0;
}