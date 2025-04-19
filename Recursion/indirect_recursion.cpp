#include <iostream>

using namespace std;

void funcA(int);

void funcB(int n){
    if(n>1){
        cout << n << " ";
        funcA(n/2);
    }
}

void funcA(int n){
    if(n>0){
        cout << n << " ";
        funcB(n-1);
    }
}
int main(){
    funcA(20);
    cout << endl;
    return 0;
}