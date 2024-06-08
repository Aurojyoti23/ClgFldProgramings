#include <iostream>
using namespace std;

int main(){
    int swap(int, int);
    int x = 10, y= 20;
    cout << "x = " << x << endl << "y = "<< y <<endl;
    swap(x, y);
}
int swap(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    cout << "x = " << x << endl << "y = "<< y;
}