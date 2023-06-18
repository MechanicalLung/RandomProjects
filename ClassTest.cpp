//Class testing shit

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
    private: 
    double Diameter;
    double Radius;
    

    public: 
     double Pi = 3.14159;
    void setDiameter(double);
    double gCirc();
    double gArea();
    void gRadius(double);
    double Area = gArea();
};

void Circle::setDiameter(double D)
{
    Diameter = D;
}

void Circle::gRadius(double R) 
{
 Radius = R;
}

double Circle::gCirc() 
{

    return  2 * Pi * Radius;
}

double Circle::gArea()
{

double A = Pi * pow(Radius, 2);

return A;

}


int main()
{
double dia, rad;
Circle Pie;
double test;

cout << "Enter in Diameter: ";
cin >> dia;
cout << "\n";

rad = dia / 2;

Pie.setDiameter(dia);
Pie.gRadius(rad);


cout << "The radius is " << rad << endl;
cout << "The Circumference is " << Pie.gCirc() << endl;
cout << "The Area is " << Pie.gArea() << endl;


return 0;

}
