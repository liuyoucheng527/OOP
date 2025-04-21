# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iomanip>
#include <iostream>
#include <cmath>
double pi=M_PI;
using namespace std;
double Cylinder :: SurfaceArea(){
    double ans;
    ans=pi*2*radius*height+pi*2*radius*radius;
    return ans;
}

double Cylinder :: Volume(){
    double ans;
    ans=pi*radius*radius*height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans;
    ans=pi*2*radius;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{  
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<fixed<<std::setprecision(3);
    out<<"Circumference: "<<cldr.Circumference()<<endl;
    out<<"SurfaceArea: "<<cldr.SurfaceArea()<<endl;
    out<<"Volume: "<<cldr.Volume()<<endl;
    return out;
}

# endif
