#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r){
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r){
    return 2*(r.length+r.breadth);
}

int main(){
    struct Rectangle r ={0,0};
    int a,b;
    cout << "Enter the length and breadth of a rectangle:"<< endl;
    cin >> a >> b;
    initialize(&r, a, b);
    int ar = area(r);
    int peri = perimeter(r);
    cout << "Area = " << ar << " and perimeter = " << peri << endl;
    return 0;
}
