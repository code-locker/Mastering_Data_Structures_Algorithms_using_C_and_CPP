#include <iostream>

using namespace std;

int func(int r){
    if(r>100){
        return r-10;
    }
    else{
        return func(func(r+11));
    }
}

int main(){
    cout << func(95) << endl;
    return 0;
}