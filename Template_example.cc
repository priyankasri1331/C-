#include <complex>
#include <iostream>
using namespace std;

template <class T>
void swapX(T &d,T &s)
{
    T temp = d;
    d = s;
    s = temp;
}
int main()
{
    int m = 5, n = 10;
    double x = 5.3,y = 10.6;
    complex<double> r(10.0, 2.0);
    complex<double> s(5.0,3.0);
    cout << "inputs:" <<m<<","<<n<< endl;
    swapX<int> (m,n);
    cout << "outputs:"<<m<<","<<n<<endl;
    swapX<double> (x,y);
    cout <<"double ops:"<<x<<","<<y<< endl;
    swapX<complex<double>> (r,s);
    cout <<"complex ops:"<<r<<","<<s<< endl;
    return 0;
}
