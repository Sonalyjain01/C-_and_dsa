#include <iostream>

using namespace std;

int main() {
    double width, height;
    
    // Input width and height from the user
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    
    // Calculate perimeter and area
    double perimeter = 2 * (width + height);
    double area = width * height;
    
    // Print the results
    cout << "Perimeter is = " << perimeter << endl;
    cout << "Area is = " << area << endl;
    
    return 0;
}
