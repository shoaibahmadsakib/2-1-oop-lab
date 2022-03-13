#include <iostream>
using namespace std;
// Global variable declaration:
int g = 20;
int main () {
   // Local variable declaration:
   int h = 10;

   cout << h<<endl;   // Local
   cout << ::g; // Global
   return 0;
}
