#include <iostream>
using namespace std;

// int main(){
//     void Add(int a = 15, int b = 20);
//     Add(50,100);
//     Add();
//     Add(10);
//     return 0;
// }

// void Add(int a, int b)
// {
//     cout << "Addition = " << a+b << endl;
// }

// include<stdiostream.h> чипту потесрасe otd;

class circle

{

private:
    double radius;

public:
    void area(double r)
    {
        radius = r;
        double area = 3.14 * radius * radius;
        cout << " radius is: " << radius << endl;
        cout << "area is :" << area;
    }
};

int main()
{

    circle obj;

    obj.area(2.5);

    return 0;

    
}