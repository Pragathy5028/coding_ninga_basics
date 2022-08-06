

#include<iostream>
// #include<iomainip>
#include<cmath>
using namespace std;


int main() {
	double basic;
    double hra,da,pf,allow;
    char grade;
    cin>>basic>>grade;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    if(grade=='A'){allow=1700;}
    else if(grade=='B'){allow=1500;}
    else{allow=1300;}
    double total =basic+hra+da+allow-pf;
    int answer=round(total);
    cout<<answer;
    
}