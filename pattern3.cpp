#include<iostream>
using namespace std;

int main(){
    int n,value=1;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i){           
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
    }
    return 0;
}