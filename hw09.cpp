#include "shape.h"
#include "rectangle.h"
#include "triangle.h"

using namespace std;

// create shape object of type triangle and rectangle
// print the perimeter and area of both shapes
// the calc functions within the print functions 
// are pure virtual functions of the shape class.

int main() {

    // output  for class heading
	cout << "***********************************\n";
	cout << "Programmed By: Nathan Milton\n";
	cout << "Student Id   : 1204398\n";
	cout << "Assignment   : HW09\n";
	cout << "CS1C         : T/TH 1:30\n";
 	cout << "***********************************\n" << endl;

    Triangle right(1, 1, 3, 4, 5);
    Rectangle rect(6, 6, 4, 2);

    cout << "TRIANGLE" << endl;
    printPerimeter(right);
    printArea(right);

    std::cout << std::endl;

    cout << "RECTANGLE" << endl;
    printPerimeter(rect);
    printArea(rect);

    return 0;
}


