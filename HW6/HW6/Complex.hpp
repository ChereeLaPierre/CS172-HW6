//
//  Complex.hpp
//  HW6
//
//  Created by Cheree LaPierre on /116/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Complex
{
public:
    Complex add(const Complex& secondNumber) const;
    Complex subtract(const Complex& secondNumber) const;
    Complex multiply(const Complex& secondNumber) const;
    Complex divide(const Complex& secondNumber) const;
    Complex abs(const Complex* secondNumber) const;
    string toString() const;
    double getRealPart();
    double getImaginaryPart();
    
    Complex(double a, double b);
    Complex(double a);
    Complex();
    
    // Define function operators for augmented operators
    Complex& operator+=(const Complex& secondNumber);
    Complex& operator-=(const Complex& secondNumber);
    Complex& operator*=(const Complex& secondNumber);
    Complex& operator/=(const Complex& secondNumber);
    
    // Define function operator []
    double& operator[](int index);
    
    // Define for prefix
    Complex& operator++();
    Complex& operator--();
    
    // Define for postfix
    Complex operator++(int dummy);
    Complex operator--(int dummy);
    
    // Define function operators for unary + and -
    Complex operator+();
    Complex operator-();
    
    // Define the << and >> operators
    friend ostream& operator<<(ostream& , const Complex&);
    friend istream& operator>>(istream& , Complex&);
    
private:
    double a;
    double b;
    
};

// Define nonmember function operators for arithmetic operators
Complex operator+(const Complex& num1, const Complex& num2);
Complex operator-(const Complex& num1, const Complex& num2);
Complex operator*(const Complex& num1, const Complex& num2);
Complex operator/(const Complex& num1, const Complex& num2);


#endif /* Complex_hpp */
