//
//  CircleWithConstantMemberFunctions.cpp
//  HW6
//
//  Created by Cheree LaPierre on /116/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#include "CircleWithConstantMemberFunctions.hpp"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
    radius = 1;
    numberOfObjects++;
}

Circle::Circle(double newRadius)
{
    radius = newRadius;
    numberOfObjects++;
}

// Return area of circle
double Circle::getArea() const
{
    return radius * radius * 3.14159;
}

// Return radius of circle
double Circle::getRadius() const
{
    return radius;
}

// Set radius of circle
void Circle::setRadius(double newRadius)
{
    radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}

int Circle::compareTo(const Circle& secondRadius) const
{
    return 0;
}

bool operator<(const Circle& r1, const Circle& r2)
{
    return r1.compareTo(r2) < 0;
}

bool operator<=(const Circle& r1, const Circle& r2)
{
    return r1.compareTo(r2) <= 0;
}

bool operator>(const Circle& r1, const Circle& r2)
{
    return r1.compareTo(r2) > 0;
}

bool operator>=(const Circle& r1, const Circle& r2)
{
    return r1.compareTo(r2) >= 0;
}

bool operator==(const Circle& r1, const Circle& r2)
{
    return r1.compareTo(r2) == 0;
}

bool operator!=(const Circle& r1, const Circle& r2)
{
    return r1.compareTo(r2) != 0;
}




