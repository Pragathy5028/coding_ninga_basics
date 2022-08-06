#include<iostream>
using namespace std;

int main() {
	int n,digit,esum=0,osum=0;
    cin>>n;
    while(n!=0){
        digit=n%10;
        if(digit/2==0){
            esum=esum+digit;
        }else{
            osum=osum+digit;
        }
        n=n/10;
        
    }
    cout<<esum<<" "<<osum<<endl;
    return 0;
	
}
