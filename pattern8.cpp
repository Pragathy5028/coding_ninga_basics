#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    m=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<m;
            m--;
        }
        m=n;
        cout<<endl;
    }
    return 0;
}