#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

int main(){
    struct Rectangle r = {10, 5};
    cout << "Rectangle length = " << r.length << endl;
    cout << "Rectangle width = " << r.width << endl;

    r.length = 5;
    r.width = 13;


    cout << "Rectangle length = " << r.length << endl;
    cout << "Rectangle width = " << r.width << endl;

    cout << "Size of structure = " << sizeof(r) << "bytes." << endl;

    return 0;
}
