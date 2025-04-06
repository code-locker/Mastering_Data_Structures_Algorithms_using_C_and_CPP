#include <iostream>
using namespace std;

int main(){
    int a = 25;
    int &r = a;
    cout << "Value of a = " << a << " and refrence r = " << r << endl; 
    cout << "Changing value of a" << endl;
    a=10;
    cout << "Value of a = " << a << " and refrence r = " << r << endl;
    cout << "Changing value of r" << endl;
    r=100;
    cout << "Value of a = " << a << " and refrence r = " << r << endl;
    int b =55;
    
    return 0;
}