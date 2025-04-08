#include <iostream>

using namespace std;

template <class T>
class Arithmatic{
    private:
        T a;
        T b;
    public:
        Arithmatic(T a,T b);
        T sub();
        T add();
};

template <class T>
Arithmatic<T>::Arithmatic(T a, T b){
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmatic<T>::sub(){
    return a-b;
}

template <class T1>
T1 Arithmatic<T1>::add(){
    return a+b;
}

int main(){
    Arithmatic<int> r(5,5);
    cout << "Integer add " << r.add() << endl;
    cout << "Integer substract " << r.sub() << endl;
    Arithmatic<float> rr(5.5,3.5);
    cout << "Float add " << rr.add() << endl;
    cout << "Float substract " << rr.sub() << endl;
    return 0;
}