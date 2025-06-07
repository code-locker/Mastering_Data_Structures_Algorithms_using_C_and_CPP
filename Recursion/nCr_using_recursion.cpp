#include <iostream>

using namespace std;

int fact(int r){
    if(r==0){
        return 1;
    }
    return fact(r-1) * r;
}

int nCr(int n, int r){
    int nem = fact(n);
    int den = fact(n-r) * fact (r);
    return nem/den;
}

int nCr_pascals(int n,int r){
    if(n==r || r==0)
        return 1;
    return nCr_pascals(n-1, r-1) + nCr_pascals(n-1,r);
}

int main(){
    int n, r;
    cout << "Enter n:" << endl;
    cin >> n;
    cout << "Enter r:" << endl;
    cin >> r;

    if(r>n){
        cout << "Invalid inputs!!!" << endl;
        return 0;
    }

    cout << n << "C" << r << "(using math formula):" << nCr(n,r) << endl;
    cout << n << "C" << r << "(using pascal's  traingle method):" << nCr_pascals(n,r) << endl;
    return 0;
}