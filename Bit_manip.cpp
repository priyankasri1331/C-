#include <iostream>

int check_bit(int num,int bit_loc);
int toggle_bit(int num, int bit_loc);
int clear_bit(int num,int bit_loc);
int set_bit(int num,int bit_loc);

using namespace std;

int main()
{
    int x = 0xFF;
    int y = 0x01;
    y = y << 3;
    //cout << y << endl;
    y = ~y;
    //cout << y << endl;
    //cout << (x & y) << endl;

    ////////////////////////////////////

    int a = 0x35;
    int b;
    int c;
    int d,e;

    b = (1 << 3) | (1 << 4) | (1 << 5);

    c = a | b;

    d = a ^ b;

    e = (~b) & a;

    cout << c << endl;

    cout << d << endl;
    cout << e << endl;
    ///////////
    cout << (check_bit(3,4)) << endl;
    
    return 0;
}

int check_bit(int num,int bit_loc)
{
    if (num & (1 << bit_loc))
    {
        return 1;
    } 
    return 0;
}

int set_bit(int num,int bit_loc)
{
    return (num | (1 << bit_loc));
}

int clear_bit(int num,int bit_loc)
{
    return (num & ~(1 << bit_loc));
}

int toggle_bit(int num, int bit_loc)
{
    return (num ^ (1 << bit_loc));
}