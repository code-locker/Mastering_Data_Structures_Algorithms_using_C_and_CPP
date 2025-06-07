#include <iostream>

using namespace std;

int func_logic_1(int m, int n){
    if(n==0)
        return 1;
    return func_logic_1(m, n-1) * m;
}

int func_logic_2(int m, int n){
    if(n==0)
        return 1;
    if(n%2 == 0)
        return func_logic_2(m*m,n/2);
    else
        return func_logic_2(m*m,n/2) * m;
}
int main(){
    int m=0 , n=0;
    cout << "Enetr m:" << endl;
    cin >> m;
    cout << " Enter n:" << endl;
    cin >> n;
    cout << "Method 1: Power(" << m << "," << n << "): " << func_logic_1(m,n) << endl;
    cout << "Method 2: Power(" << m << "," << n << "): " << func_logic_2(m,n) << endl;
     return 0;
}