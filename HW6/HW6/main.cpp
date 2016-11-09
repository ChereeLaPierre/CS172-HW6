//
//  main.cpp
//  HW6
//
//  Created by Cheree LaPierre on /113/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "CircleWithConstantMemberFunctions.hpp"
#include "Complex.hpp"
using namespace std;

int main()
{
    // 13.1
    // Create file
    ofstream exercise;
    // Open file
    exercise.open("Exercise13_1.txt");
    // If file doesn't exist, create it. Put 100 random ints in file
    if (exercise.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        ofstream exercise("Exercise13_1.txt");
        srand(time(0));
        for (int i = 0; i < 100; i++)
        {
            exercise << rand() % 1000 << " ";
        }
        return 0;
    }
    // Put 100 random ints in file
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        exercise << rand() % 1000 << " ";
    }
    
    exercise.close();
    
    // 13.2
    // Have user input a file name
    string filename;
    cout << "Enter a file name: ";
    cin >> filename;
    
    ifstream input(filename.c_str());
    // If file doesn't exist, tell user
    if (input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }
    // If it does exist, output character count in file
    int count = 0;
    
    while (!input.eof())
    {
        input.get();
        count++;
    }
    
    count--;
    
    input.close();
    
    cout << "Number of characters is " << count << endl;
    
    // 13.5
    // Open file
    ifstream input2;
    input2.open("BabyNames2010.txt");
    if (input2.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        
    }
    else
    {
        cout << "File exists";
        input.close();
    }
    
    // 14.3
    // Create circles
    Circle radius1;
    Circle radius2;
    radius1.setRadius(4.5);
    radius2.setRadius(3.2);
    // Compare the circles
    cout << &radius1 << " > " << " is " << ((radius1 > radius2) ? "true" : "false") << endl;
    cout << &radius1 << " < " << " is " << ((radius1 < radius2) ? "true" : "false") << endl;
    cout << &radius1 << " == " << " is " << ((radius1 == radius2) ? "true" : "false") << endl;
    cout << &radius1 << " != " << " is " << ((radius1 != radius2) ? "true" : "false") << endl;
    
    // 14.7
    // Have user input complex numbers
    cout << "Enter the first complex number: ";
        double num1, num2;
        cin >> num1 >> num2;
        Complex answer1(num1, num2);
        cout << "Enter the second complex number: ";
        double num3, num4;
        cin >> num3 >> num4;
        Complex answer2(num3, num4);
    
    
    
    return 0;
}
