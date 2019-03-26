#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double netbal, d1, payment, interest, d2, monthlyintrate, avedb;
    cout << setprecision(2) << fixed << showpoint;
    cout << "net balance:";
    cin >> netbal;
    cout << "payment made:";
    cin >> payment;
    cout << "number of days in the billing cycle:";
    cin >> d1;
    cout << "number of days payment is made before the billing cycle:";
    cin >> d2;
    cout << "interest per month:";
    cin >> monthlyintrate;
    avedb = (netbal*d1-payment*d2)/d1;
    interest = avedb*monthlyintrate;
    cout << "Interest is "<< interest << endl;
    return 0;
}
