#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool divided = false;
    if(n>1){
        for(int i=2; i<n; i++){
            if(n%i==0){
            divided=true;
            break;
            }
        }
        if(divided){
            cout<<"not prime\n";
        }else{
            cout<<"prime\n";
        }
    }
    else{
        cout<<"not prime\n";
    }
  
   

    return 0;
}