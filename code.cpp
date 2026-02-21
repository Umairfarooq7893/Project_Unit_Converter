/*
    Author : Umair
    Program: Unit Converter
*/
#include<iostream>
#include<cmath>
using namespace std;

// Length Converter (cm to meter)
double lengthConverter(double cm){
    return cm / 100.0;
}

// Area Converter (cm^2 to m^2)
double AreaConverter(double sqcm){
    return sqcm / 10000.0;
}

// Weight Converter (g to kg)
double WeightConverter(double gram){
    return gram / 1000.0;
}

// Temperature Converter (Celsius to Kelvin)
double TempConverter(double celsius){
    return celsius + 273.15;
}

// Volume Converter (cm^3 to m^3)
double VolumeConverter(double cmCubic){
    return cmCubic / 1000000.0;
}

// Angle Converter (degrees to radians)
double AngleConverter(double degree){
    return degree * M_PI / 180.0;     //M_PI ka mtb pi.
}

int main(){
    cout << "Hello, I am Umair Farooq.\nWelcome to my Unit Converter.\nSelect the Converter Number:\n";
    cout << "1. Length (cm to m)\n2. Area (cm^2 to m^2)\n3. Weight (g to kg)\n4. Temperature (C to K)\n 5. Volume (cm^3 to m^3)\n6. Angle (degree to radian)\n";

    int Converter_No;
    cin >> Converter_No;

    double num;

    switch (Converter_No){
        case 1:
            cout << "Enter length in cm: ";
            cin >> num;
            cout << lengthConverter(num) << " m";
            break;

        case 2:
            cout << "Enter area in cm^2: ";
            cin >> num;
            cout << AreaConverter(num) << " m^2";
            break;

        case 3:
            cout << "Enter weight in grams: ";
            cin >> num;
            cout << WeightConverter(num) << " kg";
            break;

        case 4:
            cout << "Enter temperature in Celsius: ";
            cin >> num;
            cout << TempConverter(num) << " K";
            break;

        case 5:
            cout << "Enter volume in cm^3: ";
            cin >> num;
            cout << VolumeConverter(num) << " m^3";
            break;

        case 6:
            cout << "Enter angle in degrees: ";
            cin >> num;
            cout << AngleConverter(num) << " radians";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}