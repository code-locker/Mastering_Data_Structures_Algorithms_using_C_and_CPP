#include <iostream>

using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        
        void initialize(int l, int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle r;
    int length =0, breadth = 0;
    cout << "Enter the length and breadth of the rectangle" << endl;
    cin >> length >> breadth;
    r.initialize(length, breadth);

    cout << "Area of the rectangle is " << r.area() << endl;
    cout << "Perimeter of the rectangle " << r.perimeter() << endl;
    return 0;
}