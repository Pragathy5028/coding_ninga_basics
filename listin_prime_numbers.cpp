
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        if(i==2){
            cout<<2<<endl;
        }
        else{
            bool divided=false;
            for(int j=2; j<i; j++){
                if(i%j==0){
                    divided=true;
                    break;
                }
            }
            if(!divided){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}