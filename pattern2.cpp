#include<iostream>
using namespace std;

int main(){
    int n,value=1;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<=i){
            cout<<value;
            j++;
            value++;

        }
        cout<<endl;
    }
    return 0;
}