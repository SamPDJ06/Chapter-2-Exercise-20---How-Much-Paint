// Chapter 2 Exercise 20 - How Much Paint.A program to determine and report how many gallons of paint will be needed to paint two coats on a wooden fence.
//

#include <iostream>
using namespace std;

int main()
{
    //variables
    int paint_gallon = 340; 
    int fence_height = 6;
    int fence_width = 100;
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


