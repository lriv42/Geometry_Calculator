/*
	Title:    lrivers42_program2.cpp
	Author:   Liam Rivers
	Date:     5/31/2023
	Purpose:  Shape calculations
*/

#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int main() {

    string enter; //empty string needed for getline - used to detect enter
    double length = 0; // following variables needed for inputs
    double width = 0;
    double height = 0;
    double radius = 0;
    double sideA = 0;
    double sideB = 0;
    double sideC = 0;
    double sideD = 0;
    double perimeter = 0; // following variables used to hold calculations for easier cout readings
    double area = 0;
    double volume = 0;
    const double PI = 3.1415926;
    //user menu option
    int userOption = 0;

    //do while loop runs the program until user hits 6 to quit
    do {
        //menu
        cout << "Welcome to the SHAPE program." << endl;
        cout << endl;
        cout << "Pick from the following menu options: "<< endl;
        cout << "         1. Calculate RECTANGLE"<< endl;
        cout << "         2. Calculate TRIANGLE" << endl;
        cout << "         3. Calculate TRAPEZOID" << endl;
        cout << "         4. Calculate CONE" << endl;
        cout << "         5. Calculate SPHERE" << endl;
        cout << "         6. EXIT PROGRAM" << endl;
        cout << endl;
        cout << "         Enter 1-6: ";
        cin >> userOption;
        cout << endl;

        //validating users input is between 1 and 5
        while (userOption > 6 || userOption < 1) {
            cout << "Invalid input. Please enter 1-6: ";
            cin >> userOption;
            cout << endl;
        }
        
        //handles the calculation user wants to do
        switch(userOption){
            case 1:
                cout << "Enter the height of the rectangle: ";
                cin >> height;
                //each while loop validates users input
                    while (height <= 0) {
                        cout << endl;
                        cout << "You must enter a height greater than 0." << endl;
                        cout << "Enter the height of the rectangle: ";
                        cin >> height;
                    }
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << endl;
                while (width <= 0) {
                    cout << endl;
                    cout << "You must enter a width greater than 0." << endl;
                    cout << "Enter the width of the rectangle: ";
                    cin >> width;
                    cout << endl;
                } 

                //formatting and output
                cout << fixed << setprecision(4);
                cout << "RECTANGLE:" << endl;
                cout << "Given height, width: " << height << ", " << width << endl;
                cout << "AREA: " << height * width << endl;
                cout << "PERIMETER: " << (2.0 * height) + (2.0 * width) << endl;
                cout << endl;
                break;
            
            case 2:
                cout << "Enter side A of the triangle: ";
                cin >> sideA;
                    while (sideA <= 0) {
                        cout << endl;
                        cout << "You must enter a side length greater than 0." << endl;
                        cout << "Enter side A of the triangle: ";
                        cin >> sideA;
                        cout << endl;
                    }
                cout << "Enter side B of the triangle: ";
                cin >> sideB;
                    while (sideB <= 0) {
                        cout << endl;
                        cout << "You must enter a side length greater than 0." << endl;
                        cout << "Enter side B of the triangle: ";
                        cin >> sideB;
                        cout << endl;
                    }
                cout << "Enter side C of the trianlge: ";
                cin >> sideC;
                    while (sideC <= 0) {
                        cout << endl;
                        cout << "You must enter a side length greater than 0: " << endl;
                        cout << "Enter side C of the triangle: ";
                        cin >> sideC;
                        cout << endl;
                    }

                //aforementioned variables shorten calculation lines considerably
                perimeter = sideA + sideB + sideC;
                area = sqrt((perimeter / 2.0) * ((perimeter / 2.0)-sideA) * ((perimeter / 2.0)-sideB) * ((perimeter / 2.0)-sideC));
                
                cout << fixed << setprecision(4);
                cout << "TRIANGLE: " << endl;
                cout << "Given sideA, sideB, sideC: " << sideA << ", " << sideB << ", " << sideC << endl;
                cout << "AREA: " << area << endl;
                cout << "PERIMETER: " << perimeter << endl;
                cout << endl;
                break;
            case 3:
                cout << "Enter the height of the trapezoid: ";
                cin >> height;
                    while (height <= 0) {
                        cout << endl;
                        cout << "You must enter a height greater than 0." << endl;
                        cout << "Enter the height of the trapezoid: ";
                        cin >> height;
                    }
                cout << "Enter the top edge (side A) of the trapezoid: ";
                cin >> sideA;
                    while (sideA <= 0) {
                        cout << endl;
                        cout << "You must enter a top edge (side A) greater than 0." << endl;
                        cout << "Enter the top edge (side A) of the trapezoid: ";
                        cin >> sideA;
                        cout << endl;
                    }
                cout << "Enter the right edge (side B) of the trapezoid: ";
                cin >> sideB;
                    while (sideB <= 0) {
                        cout << endl;
                        cout << "You must enter a right edge (side B) greater than 0." << endl;
                        cout << "Enter the right edge (side B) of the trapezoid: ";
                        cin >> sideB;
                        cout << endl;
                    }
                    //second while loop needed to ensure side length is greater than height for trapezoid
                    while (sideB <= height) {
                        cout << endl;
                        cout << "You must enter a right edge (side B) length that is greater than the height." << endl;
                        cout << "Enter the right edge (side B) of the trapezoid: ";
                        cin >> sideB;
                        cout << endl;
                    }
                cout << "Enter the bottom edge (side C) of the trapezoid: ";
                cin >> sideC;
                    while (sideC <=0) {
                        cout << endl;
                        cout << "You must enter a bottom edge (side C) greater than 0." << endl;
                        cout << "Enter the bottom edge (side C) of the trapezoid: ";
                        cin >> sideC;
                        cout << endl;
                    }
                cout << "Enter the left edge (side D) of the trapezoid: ";
                cin >> sideD;
                    while (sideD <=0) {
                        cout << endl;
                        cout << "You must enter a left edge (side D) greater than 0." << endl;
                        cout << "Enter the left edge (side D) of the trapezoid: ";
                        cin >> sideD;
                        cout << endl;
                    }
                    while (sideD <= height) {
                        cout << endl;
                        cout << "You must enter a left edge (side D) length that is greater than the height." << endl;
                        cout << "Enter the left edge (side D) of the trapezoid: ";
                        cin >> sideD;
                        cout << endl;
                    }
                cout << endl;

                perimeter = sideA + sideB + sideC + sideD;
                area = ((sideA + sideC) / 2.0) * height;

                cout << fixed << setprecision(4);
                cout << "Given height, sideA, sideB, sideC, sideD :";
                cout << height << ", " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << endl;
                cout << "AREA: " << area << endl;
                cout << "PERIMETER: " << perimeter << endl;
                cout << endl;
                break;
            case 4:
                cout << "Enter the height of the cone: ";
                cin >> height;
                    while (height <= 0) {
                        cout << endl;
                        cout << "You must enter a height greater than 0." << endl;
                        cout << "Enter the height of the cone: ";
                        cin >> height;
                    }
                cout << "Enter the radius of the cone: ";
                cin >> radius;
                    while (radius <= 0) {
                        cout << endl;
                        cout << "You must enter a radius greater than 0." << endl;
                        cout << "Enter the radius of the cone: ";
                        cin >> radius;
                    }
                cout << endl;

                volume = 1.0 / 3.0 * PI * (radius * radius) * height;
                area = PI * (radius * radius) + PI * radius * sqrt((radius * radius) + (height * height));

                cout << fixed << setprecision(4);
                cout << "CONE: " << endl;
                cout << "Given height, radius: " << height << ", " << radius << endl;
                cout << "VOLUME: " << volume << endl;
                cout << "SURFACE AREA: " << area << endl;
                cout << endl;
                break;
            case 5:
                cout << "Enter the radius of the sphere: ";
                cin >> radius;
                cout << endl;
                    while (radius <= 0) {
                        cout << endl;
                        cout << "You must enter a radius greater than 0." << endl;
                        cout << "Enter the radius of the sphere: ";
                        cin >> radius;
                    }

                volume = (4.0 / 3.0) * PI * (radius * radius * radius);
                area = 4.0 * PI * (radius * radius);

                cout << fixed << setprecision(4);
                cout << "SPHERE: " << endl;
                cout << "Given radius: " << radius << endl;
                cout << "VOLUME: " << volume << endl;
                cout << "SURFACE AREA: " << area << endl;
                
                break;
            default:
                cout << "Why does the circle run a DnD group?" << endl;
                cout << "Press enter: ";
                //cin.ignore necessary for getline to detect enter
                cin.ignore();
                //only time string variable is used, wont continue until it detects enter
                getline(cin, enter);
                cout << "... because it loves to roll!";
        }

    // exit condition, runs program until user enters 6 to quit
    }while(userOption != 6);

    return 0;
}