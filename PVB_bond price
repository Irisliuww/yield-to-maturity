// calculate the bond price

#include <cmath>
#include <iostream>
#include <string>
using namespace std;
double PVB(double FV,double c,double r, double d,double N)
{
    double BV=0.0;
   
    for(i=0;i<=N;i++)
    { BV = BV + c/pow((1+r),d);
    }
    BV = BV + FV/pow((1+r),d+N);
    return BV;
}
