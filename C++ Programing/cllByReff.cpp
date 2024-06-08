#include <iostream>
using namespace std;

int main(){
    // int swap(int &, int &);
    // int a = 10, b= 20;
    int a = 10;
    int &b= a;
    cout << a << endl << b <<endl;
    ++b; 
    cout << a << endl << b <<endl; 
    // cout << "x = " << a << endl << "y = "<< b <<endl;
    // swap(a, b);
}
// int swap(int &x, int &y)
// {
//     int t;
//     t = x;
//     x = y;
//     y = t;
//     cout << "x = " << x << endl << "y = "<< y;
//     return 0;
// }