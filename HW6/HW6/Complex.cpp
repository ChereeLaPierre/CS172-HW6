//
//  Complex.cpp
//  HW6
//
//  Created by Cheree LaPierre on /116/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#include "Complex.hpp"
#include <cmath>
#include <sstream>
// Add complex numbers
Complex Complex::add(const Complex& secondNumber) const
{
    return Complex(a, b) + Complex(a, b);
}

// Subtract complex numbers
Complex Complex::subtract(const Complex& secondNumber) const
{
    return Complex(a, b) - Complex(a, b);
}

// Multiply complex numbers
Complex Complex::multiply(const Complex& secondNumber) const
{
    return Complex(a, b) * Complex(a, b);
}

// Divide complex numbers
Complex Complex::divide(const Complex& secondNumber) const
{
    return Complex(a, b) / Complex(a, b);
}

// Return absolute value of number
Complex Complex::abs(const Complex* secondNumber) const
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

// Return a + bi as a string
string Complex::toString() const
{
    stringstream ss;
    ss << a;
    
    if (b > 1)
        ss << + b;
//    else
//        return a;
    
    return ss.str();
}

// Return real part of complex number
double Complex::getRealPart()
{
    return a;
}

// Return imaginary part of complex number
double Complex::getImaginaryPart()
{
    return b;
}

// Constructors
Complex::Complex(double a, double b)
{
    a = a;
    b = b;
}

Complex::Complex(double a)
{
    b = 0;
}

Complex::Complex()
{
    
}

Complex& Complex::operator+=(const Complex& secondNumber)
{
    *this = add(secondNumber);
    return *this;
}

Complex& Complex::operator-=(const Complex& secondNumber)
{
    *this = subtract(secondNumber);
    return *this;
}

Complex& Complex::operator*=(const Complex& secondNumber)
{
    *this = multiply(secondNumber);
    return *this;
}

Complex& Complex::operator/=(const Complex& secondNumber)
{
    *this = divide(secondNumber);
    return *this;
}

double& Complex::operator[](int index)
{
    if (index == 0)
        return a;
    else
        return b;
}

Complex& Complex::operator++()
{
    a += b;
    return *this;
}

Complex& Complex::operator--()
{
    a -= b;
    return *this;
}

Complex Complex::operator++(int dummy)
{
    Complex temp(a, b);
    a += b;
    return temp;
}

Complex Complex::operator--(int dummy)
{
    Complex temp(a, b);
    a -= b;
    return temp;
}

Complex Complex::operator+()
{
    return *this;
}

Complex Complex::operator-()
{
    return Complex(-a, b);
}

ostream& operator<<(ostream& out, const Complex& complex)
{
    if (complex.b == 1)
        out << complex.a;
    else
        out << complex.a << "/" << complex.b;
    return out;
}

istream& operator>>(istream& in, Complex& complex)
{
    cout << "Enter the first complex number: ";
    in >> complex.a;
    cout << "Enter the second complex number: ";\
    in >> complex.b;
    return in;
}

// Add numbers
Complex operator+(const Complex& num1, const Complex& num2)
{
    return num1.add(num2);
}

// Subtract numbers
Complex operator-(const Complex& num1, const Complex& num2)
{
    return num1.subtract(num2);
}

// Mutiply numbers
Complex operator*(const Complex& num1, const Complex& num2)
{
    return num1.multiply(num2);
}

// Divide numbers
Complex operator/(const Complex& num1, const Complex& num2)
{
    return num1.divide(num2);
}


