#include <iostream>

using namespace std;

enum Direction : unsigned char {
    TopLeft = 64, TopRight, Center, BottomLeft, BottomRight
};

enum Tool {
    Pen, Maker, Eraser, Rectangle, Circle, PaintBucket
};

int main()
{
    Direction direction {Direction::TopLeft};
    Tool tool {Tool::Eraser};

    cout << "direction: " << static_cast<unsigned int>(direction) << endl;
    cout << "tool: " << tool << endl;
    // cout << "(tool > direction) : " << (tool > direction) << endl; //warning: comparison between 'enum Tool' and 'enum Direction' [-Wenum-compare]
    
    return 0;
}