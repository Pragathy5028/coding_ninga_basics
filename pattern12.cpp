
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // cout<<ch;
    for(int i=1; i<=n; i++){
        char ch=65;
        for(int j=1;j<=n; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}