#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int option;
    cout << "Choose the geometric figure (1 for Circle, 2 for Rectangle, 3 for Triangle, 4 for Square): ";
    cin >> option;

    switch(option)
    {
        case 1:
        {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = M_PI * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        }
        case 2:
        {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            double area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
            break;
        }
        case 3:
        {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            double area = 0.5 * base * height;
            cout << "The area of the triangle is: " << area << endl;
            break;
        }
        case 4:
        {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            double area = side * side;
            cout << "Area of the square: " << area << endl;
            break;
        }
        default:
            cout << "Invalid option selected!" << endl;
    }

    return 0;
}
