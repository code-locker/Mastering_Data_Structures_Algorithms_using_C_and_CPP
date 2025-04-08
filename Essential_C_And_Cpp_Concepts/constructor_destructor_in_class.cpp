#include <iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        // Default constructor
        Rectangle();
        // Parameterized constructor
        Rectangle(int, int);
        int area();
        int perimeter();
        ~Rectangle();
};

Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle::area(){
    return length * breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

Rectangle::~Rectangle(){}

int main(){
    Rectangle r;
    cout << "Area of the rectangle using default constructor is " << r.area() << endl;
    cout << "Perimeter of the rectangle using default constructor is " << r.perimeter() << endl;
    Rectangle r_p(2,3);
    cout << "Area of the rectangle using parameterised constructor is " << r_p.area() << endl;
    cout << "Perimeter of the rectangle using parameterised constructor is " << r_p.perimeter() << endl;
    return 0;
}