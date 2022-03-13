#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand1;  // Attribute
    string model2;  // Attribute
    int year3;      // Attribute
    Car(string x, string y, int z) {  // Constructor with parameters
      brand1 = x;
      model2 = y;
      year3 = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand1 << " " << carObj1.model2 << " " << carObj1.year3 << "\n";
  cout << carObj2.brand1 << " " << carObj2.model2 << " " << carObj2.year3 << "\n";
  return 0;
}

