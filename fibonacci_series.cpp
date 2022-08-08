// when n=6,cout 8.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t=1;
    int t1=1;
    // cout<<t<<endl<<t1<<endl;
    for(int i=3; i<=n; i++){
        int temp=t1;
        t1=t+t1;
        t=temp;

    }
    cout<<t1<<endl;

    return 0;
}