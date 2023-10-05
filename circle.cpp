#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;
    
    // Input the radius from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calculate perimeter and area
    double perimeter = 2 * M_PI * radius;
    double area = M_PI * pow(radius, 2);
    
    // Print the results
    cout << "Perimeter is = " << perimeter << endl;
    cout << "Area is = " << area << endl;
    
    return 0;
}
