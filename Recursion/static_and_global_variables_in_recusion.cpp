#include <iostream>

using namespace std;
int gVar = 0;

int gfunc(int n){
    if(n>0){
        gVar++;
        return gfunc(n-1)+gVar;
    }
    return 0;
}

int sfunc(int n){
    static int sVar = 0;
    if(n>0){
        sVar++;
        return sfunc(n-1)+sVar;
    } 
    return 0;
}

int main(){
    int x = 5;
    cout << "1. Static variable example: " << endl;
    cout << "Value is " << sfunc(x) << endl;
    cout << "2. Global variable example: " << endl;
    cout << "Value is " << gfunc(x) << endl;
    cout << "3. Static variable example: " << endl;
    cout << "Value is " << sfunc(x) << endl;
    cout << "4. Global variable example: " << endl;
    cout << "Value is " << gfunc(x) << endl;
    return 0;
}