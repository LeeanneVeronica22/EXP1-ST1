#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float box = 250.00;
    float sideline = 100.00;
    float premium = 50.00;
    float genad = 25.00;
    float boxs, sls, prem, gens, totbox, totsl, totprems, totga, totamt;
    std::cout <<std::fixed;
	std::cout << std::setprecision(2);
    cout<< "box seating tickets:";
    cin>> boxs;
    cout << "sideline seating tickets:";
    cin>> sls;
    cout << "premium seating tickets:";
    cin>> prem;
    cout << "gen ad seating tickets:";
    cin>> gens;
    cout << "TICKET SALES" endl;
    cout <<"Type            Price\n";
    cout <<"Box            		 " <<box<< endl;
    cout <<"Sideline       		 " <<sideline<< endl;
    cout <<"Premium       	 	 " <<premium<< endl;
    cout <<"GenAd          		 " <<genad<< endl;
    cout << "TOTAL SALES" << << endl;
    cout <<"Box             " <<boxs<< endl;
    cout <<"Sideline        " <<sls<< endl;
    cout <<"Premium         " <<prem<< endl;
    cout <<"GenAd           " <<gens<< endl;
    std::cout<<std::fixed;
    std::cout<<setprecision(2);
    cout << "TOTAL SOLD" endl;
    totbox = box*boxs;
    totsl = sideline*sls;
    totprems = premium*prem;
    totga = genad*gens;

    cout <<"Box Seating: " <<totbox<< endl;
    cout <<"Sideline Seating: " <<totsl<< endl;
    cout <<"Premium Seating: " <<totprems<< endl;
    cout <<"GenAd Seating: " <<totga<< endl;
    totamt = (totbox+totsl+totprems+totga);
    cout <<"TOTAL: " <<totamt<< endl;

}

