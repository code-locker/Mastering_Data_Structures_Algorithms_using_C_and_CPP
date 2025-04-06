#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    // C implementation
    printf("C implementation.\n");
    struct Rectangle *c = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    c->breadth = 10;
    c->length = 20;
    printf("Rectangle length = %d breadth = %d\n", c->breadth, c->length);
    printf("Rectangle length = %d breadth = %d read using * operator.\n", (*c).breadth, (*c).length);
    
    cout << "CPP implementation." << endl;
    Rectangle *cpp = new Rectangle;
    cpp->breadth = 60;
    cpp->length =30;
    cout << "Rectangle length = " << cpp->length << " breadth = " << cpp->breadth << endl;
    return 0;
}