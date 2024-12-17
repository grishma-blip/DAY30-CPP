//WAP to find the area.
#include <iostream>
using namespace std;

int main()
{
    float base, height, area;

    
    cout << "Enter the base of the square: ";
    cin >> base;
    cout << "Enter the height of the square: ";
    cin >> height;

    
    area = 2 * base * height;

   
    cout << "The area of the square is: " << area << endl;

    return 0;
}
