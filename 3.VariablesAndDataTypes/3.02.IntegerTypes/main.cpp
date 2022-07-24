#include <iostream>

using namespace std;

int main (){
    // Braced initializers
    // Variable may contain random garbage value . WARNING
    int elephantCount;
    int lionCount {};   // Initializes to zero
    int dogCount {10};  // Initializes to 10
    int catCount {15};  // Initializes to 15

    // Can use expression as initializer
    int domesticatedAnimals { dogCount + catCount };

    // Error
    // int newNumber {doesntExist};
    // int narrowingConvertion {2.9};

    cout << "Elephant count: "  << elephantCount        << endl;
    cout << "Lion count: "      << lionCount            << endl;
    cout << "Dog count: "       << dogCount             << endl;
    cout << "Cat count: "       << catCount             << endl;
    cout << "Domestic count: "  << domesticatedAnimals  << endl << endl;

    // Functional initialization
    int appleCount(5);
    int orangeCount(10);
    int fruitCount(appleCount + orangeCount);

    // Error
    // int badInitialization (doesntExist3 + doesntExist4);

    // Information lost. less safe than braced initializers
    int narrowingConvertionFunctional (2.9);

    cout << "Apple count: "     << appleCount           << endl;
    cout << "Orange count: "    << orangeCount          << endl;
    cout << "Fruit count: "     << fruitCount           << endl;

    cout << "Narrowing conversion: "  << narrowingConvertionFunctional  << endl << endl;

    // Assignment notation
    int bikeCount = 2;
    int truckCount = 7;
    int vehicleCount = bikeCount + truckCount;
    int narrowingConvertionAssignment = 2.9;

    cout << "Bike count: "      << bikeCount           << endl;
    cout << "Truck count: "     << truckCount          << endl;
    cout << "Vehicle count: "   << vehicleCount        << endl;

    cout << "Narrowing conversion: "  << narrowingConvertionAssignment  << endl << endl;

    // Check the size with sizeof
    cout << "sizeof int: " << sizeof(int) << endl;
    cout << "sizeof truckCount: " << sizeof(truckCount) << endl;


    return 0;
}