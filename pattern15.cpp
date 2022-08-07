#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int n1=(n+1)/2;
    int n2=n/2;
    for(int i=1;i<=n1;i++){
        for(int s=1; s<n1-i+1; s++){
            cout<<' ';
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=n2; i>0; i--){
        for(int s=n2-i+1; s<=n2; s++){
            cout<<' ';
        }
        for(int j=2*i-1; j>0; j--){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}