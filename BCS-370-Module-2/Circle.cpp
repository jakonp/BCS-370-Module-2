//
//  Circle.cpp
//  BCS-370-Module-2
//
//  Created by Nick Jakobczyk on 11/22/20.
//

#include <iostream>

using namespace std;

template<class T>

class Circle
{
private:
    T radius;
public:
    Circle& operator+(int r);
    template<class U>
    friend ostream& operator << (ostream& out, Circle<U>& c);
    template<class U>
    friend istream& operator >> (istream& in, Circle<U>& c);
};

template<class T>
Circle<T>& Circle<T>::operator+(int r){
    this->radius +=r;
    return *this;
}

template<class T>
ostream& operator << (ostream& out, const Circle<T>& c)
{
    out << endl << "Radius of the circle is: " << c.radius << endl;
    out << "Area of the circle is: " << (3.14159 * c.radius * c.radius) << endl;
    return out;
}

template<class T>
istream& operator >> (istream& in, Circle<T>& c)
{
    cout << "Enter Circle Radius: ";
    in >> c.radius;
    return in;
}
