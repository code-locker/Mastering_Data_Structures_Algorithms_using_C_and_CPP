#include <iostream>

using namespace std;
struct Rectangle{
    int length;
    int breadth;
};

void callbyvalueprint(Rectangle p){
    cout << "Call by value example for structure:" << endl;
    cout << "Length = " << p.length << " Breadth = " << p.breadth << endl;
    cout << "------------------------------------------------ " << endl;
}

void callbyreferenceprint(Rectangle &p){
    cout << "Call by reference example for structure:" << endl;
    cout << "Length = " << p.length << " Breadth = " << p.breadth << endl;
    cout << "------------------------------------------------ " << endl;
}

void callbyaddressprint(Rectangle *p){
    cout << "Call by address example for structure:" << endl;
    cout << "Length = " << p->length << " Breadth = " << p->breadth << endl;
    cout << " ------------------------------------------------ " << endl;
}

Rectangle *returnstructureptr(){
    Rectangle *pp = new Rectangle;
    pp->breadth = 55;
    pp->length = 33;
    return pp;
}
int main(){
    Rectangle r;
    r.length = 10;
    r.breadth = 20;
    callbyvalueprint(r);
    callbyreferenceprint(r);
    callbyaddressprint(&r);
    Rectangle *ptr = returnstructureptr();
    cout << "Return structure pointer example:" << endl;
    cout << "Length = " << ptr->length << " Breadth = " << ptr->breadth << endl;
    cout << "------------------------------------------------ " << endl;
    return 0;
}