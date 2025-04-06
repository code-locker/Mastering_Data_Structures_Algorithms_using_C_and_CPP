#include <iostream>

using namespace std;
void callbyvalue_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "num1=" << a << " num2=" << b << " after swapping." << endl;
}

void callbyaddress_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void callbyreference_swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    cout << "Pass by value example" << endl;
    int num1=10, num2=20;
    cout << "num1=" << num1 << " num2=" << num2 << " before swapping." << endl;
    callbyvalue_swap(num1, num2);
    cout << "---------------------------------------------------------" << endl;
    cout << "Pass by address example" << endl;
    cout << "num1=" << num1 << " num2=" << num2 << " befor swapping." << endl;
    callbyaddress_swap(&num1, &num2);
    cout << "num1=" << num1 << " num2=" << num2 << " after swapping." << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Pass by reference example" << endl;
    cout << "num1=" << num1 << " num2=" << num2 << " befor swapping." << endl;
    callbyreference_swap(num1, num2);
    cout << "num1=" << num1 << " num2=" << num2 << " after swapping." << endl;
    cout << "---------------------------------------------------------" << endl;
    return 0;
}