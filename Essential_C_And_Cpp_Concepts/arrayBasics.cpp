#include <iostream>

using namespace std;

int main(){
    // Declare and initialize the array
    cout << "Declare and initialize the array and display using foreach loop in C++" << endl;
    int a[5] = { 1, 2, 3}; // rest will be initialized with 0
    for(int val:a){
        cout << val << endl;
    }
    cout << "Take array size from user and display using for loop" << endl;
    cout << " Enter the array size" << endl;
    int n;
    cin >> n;
    int b[n];
    b[0] = n;
    // 0th element will be n and rest will be garbage value
    for(int i=0; i<n; i++){
        cout << b[i] << endl;
    }
    return 0;
}