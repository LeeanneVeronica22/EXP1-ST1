#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double mass, density, volume;
    cout << setprecision(2) << showpoint << fixed;
    cout << "Enter Mass:";
    cin >> mass;
    cout << "Enter Density:";
    cin >> density;
    volume = mass / (density*4);
    cout << "Volume is  "<< volume <<endl;
    return 0;
}

