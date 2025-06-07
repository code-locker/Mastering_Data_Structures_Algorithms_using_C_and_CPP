#include <iostream>

using namespace std;

int sumN(int n){
    if (n==0)
        return 0;
    else 
        return sumN(n)
}

int main(){
    cout << "Sum of first 5 Natural numbers(Recursion): " << sumN(5) << endl;
    cout << "Sum of first 5 natural numbers(Iterative):" << isumN(5) << endl;
    cout << "Sum of first 5 natural numbers(Formula):" << fsumN(5) << endl;
    return 0;
}