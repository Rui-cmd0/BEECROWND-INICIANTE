#include <iostream>
#include <cmath>*
#include <iomanip>
 
using namespace std;
 
int main() {
 double r = 3.14159;
 double raio;
 cin >> raio;
 double area = r* pow(raio, 2);
 cout << "A=" << fixed << setprecision (4) << area << endl;
   return 0;
}