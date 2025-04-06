#include <iostream>

using namespace std;

void fun(int A[] , int s){
    cout << "Elements of array inside function:" << endl;
    for (int i=0 ; i <s ; i++){
        cout << A[i] << " " ;
    }
    cout << endl;
}

int * returnArrayPtr(int sz){
    int *ptr = new int[sz];
    for(int i=0; i<sz; i++){
        ptr[i] = i;
    }
    return ptr;
}
int main(){
    int sz = 5;
    int a[] = {1, 2, 3, 4 ,5};
    cout << "Elements of array:" << endl;
    for(int x:a)
        cout << x << " ";
    cout << endl;
    fun(a, sz);
    cout << "Return array pointer:" << endl;
    int *p = returnArrayPtr(sz);
    for(int i=0; i<sz; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}