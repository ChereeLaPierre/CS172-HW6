//
//  CircleWithConstantMemberFunctions.hpp
//  HW6
//
//  Created by Cheree LaPierre on /116/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef CircleWithConstantMemberFunctions_hpp
#define CircleWithConstantMemberFunctions_hpp

#include <stdio.h>
class Circle
{
public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    int compareTo(const Circle& secondRadius) const;
    
private:
    double radius;
    static int numberOfObjects;
    
    
};

// Define nonmember function operators for relational operators
bool operator<(const Circle& r1, const Circle& r2);
bool operator<=(const Circle& r1, const Circle& r2);
bool operator>(const Circle& r1, const Circle& r2);
bool operator>=(const Circle& r1, const Circle& r2);
bool operator==(const Circle& r1, const Circle& r2);
bool operator!=(const Circle& r1, const Circle& r2);


#endif /* CircleWithConstantMemberFunctions_hpp */

