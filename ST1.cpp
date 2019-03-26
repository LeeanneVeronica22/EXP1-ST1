#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
    double payr, grossi, neti, schoola, bondsa, clothesa, parentsba, hoursw;
    const double TaxRate = 0.14;
    const double PercentageClothes = 0.10;
    const double PercentageSchool = 0.01;
    const double PercentageSavingsBonds = 0.25;
    const double ParentsContribution = 0.50;
    cout << "Work hours: ";
    cin>> hoursw;
    cout << "Hourly rate: ";
    cin>>payr;
    
    grossi = hoursw*payr;
    neti = grossi*TaxRate;
    clothesa = neti*PercentageClothes;
    schoola = neti*PercentageSchool;
    neti -= (clothesa+schoola);
    bondsa = neti*PercentageSavingsBonds;
    parentsba = bondsa*ParentsContribution;
    cout<<fixed<<showpoint<<setprecision(2);
    cout << "Gross Income: " <<grossi<< endl;
    cout << "Net Income: " <<neti<<endl;
    cout << "Savings Bonds: "<<bondsa<< endl;
    cout<< "Parents Bonds Co-Contribution: " <<parentsba<<endl;
    getch ();
    return 0;
}
