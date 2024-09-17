
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r = 0.37;
    double l = 0.164;
    double t = 1.6;
    double fi = 335 * M_PI / 180; 
    double gamma = asin(r * sin(fi) / l);
    double v1 = -r * fi / t * sin(fi+gamma) / cos(gamma);
    double v2 = -r * fi / t * (sin(fi) + (r * sin(fi) * cos(fi) / l));
    double W = -r * pow(fi,2) / pow(t,2) * (cos(fi) + (r * cos(2*fi) / l) );
    cout << v1 << " " << v2 << " " << W << endl;
}
