#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int *p;
    char *char_p, char_p2;

    p = (int*) malloc(10*sizeof(int));

    *p = 10;
    *(p+1) = 10;
    p[0] = 10;
    p[1] = 10;

    free(p);

    char arr[10];

    char_p = (char*)malloc(10*sizeof(char));

    /////////////////////////////////////////

    int *k;
    int a = 10;
    k = &a;

    cout << k;

    return 0;
}