// Chapter 2 Exercise 20 - How Much Paint.A program to determine and report how many gallons of paint will be needed to paint two coats on a wooden fence with a height and width determined by the user.
//

#include <iostream>
using namespace std;

int main()
{
    //variables
    int paint_gallon = 340;
    int fence_height;
    cout << "Enter the height of the fence in feet: ";
    cin >> fence_height; 
    cout << "The fence height is: " << fence_height << endl;
    int fence_width;
    cout << "Enter the width of the fence in feet: ";
    cin >> fence_width;
    cout << "The fence width is: " << fence_width << endl;
    float total_area;
    float paint_needed;

    //calculations
    total_area = fence_height * fence_width;
    paint_needed = total_area / paint_gallon;

    //output
    cout << "Gallons of paint needed for rwo coats: " << paint_needed * 2 << endl;

    cout << endl;

    return 0;
}   


