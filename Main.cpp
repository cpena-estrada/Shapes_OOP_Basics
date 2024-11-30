#include <iostream>
#include "Shapes.h"
using namespace std;

int main(){
    Rectangle r1(10, 5);
    cout << r1.toString() << endl;
    
    Square s1(10);
    cout << s1.toString() << endl;
    
    Triangle t1(10, 5);
    cout << t1.toString() << endl;
    
    Circle c1(10);
    cout << c1.toString() << endl;

    return 0;
}
