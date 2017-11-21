#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double calcRetail(double ws, double mu);
void calcRetail(double &r);
double celcius(double f);

int main()
{
    for(int i = 0; i <= 20; i++)    {
        cout << "F: " << i << "\t C: " << celcius(i) << endl;
    }
    cout << celcius(32) << endl;
}

double calcRetail(double ws, double mu)   {
    // cout << ws*(1 + mu) << endl;
    return ws*(1 + mu); 
    //calculates the retail price when you do stuff
}
void calcRetail(double &r)   {
    double ws = 100, mu = .75;
    r = ws * (1 + mu);
}
double celcius(double f)  {
    return (5.0/9.0) * (f - 32);

}
