#include <iostream>
using namespace std;
int add (int a, int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    int num1 = 20, num2 = 30;
    int sum = add(num1 , num2);
    cout << num1 << "+" << num2 << "=" << sum << endl;
    return 0;
}