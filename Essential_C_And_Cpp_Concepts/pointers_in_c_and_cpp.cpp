/*
* Pinterns in c and cpp example
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    // C program
    printf("C pointer example program\n");
    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    for (int i = 0; i < 5; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    //  CPP program
    cout << "CPP pointer example program \n";
    int *pcpp = new int[5];
    pcpp[0] = 10;
    pcpp[1] = 20;
    pcpp[2] = 30;
    pcpp[3] = 40;
    pcpp[4] = 50;
    for (int i = 0; i < 5; i++){
        cout << pcpp[i] << " ";
    }
    cout << endl;
    delete [ ]pcpp;
    return 0;
}