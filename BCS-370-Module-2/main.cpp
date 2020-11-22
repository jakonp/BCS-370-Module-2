//
//  main.cpp
//  BCS-370-Module-2
//
//  Created by Nick Jakobczyk on 11/22/20.
//

#include <iostream>
#include "Circle.cpp"

using namespace std;

int main()
{
    cout << "Integer Circle: " << endl;
    Circle<int> cI;
    cin >> cI;
    cout << cI;
    cI = cI + 4;
    cout << cI;
    cout << endl << "Double Circle: ";
    Circle<double> cD;
    cin >> cD;
    cout << cD;
    return 0;
}
