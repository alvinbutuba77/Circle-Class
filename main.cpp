//using class to find area and circumference of a circle

#include <iostream>
using namespace std;

class circle
{//declarations
private:
    float rad, diam, area, circum;

public:
    void input();

    void compute();

    void output();

};
//member function definitions
void circle::input()
{
    cout <<"enter radius: ";
    cin >> rad;
}

void circle::compute()
{
    area = (22 / 7) * rad * rad;

    diam = rad + rad;

    circum = (22 / 7) * diam;

}

void circle::output()
{
    cout <<"\n area is: " << area;
    cout <<"\n circumference is: "<< circum;
}

int main()
{
    circle c;//object

    c.input();
    c.compute();
    c.output();

}//end main
