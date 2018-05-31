#include <iostream>
#include "area.h"
#define pi 3.14

using std::cout;
using std::cin;
using std::endl;

int main(){
    double radius;
    cout<<"enter radius:";
    cin>>radius;    
    cout<<"the circle with radius " <<radius;
    cout<<"has an area: ";    
    cout <<area(radius) << endl;
    cout<<"and the circumferance :" <<circum(radius) <<endl;

    return 0;

}