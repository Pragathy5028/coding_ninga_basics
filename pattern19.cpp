#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<' ';
        }
        int m=i;
        for(int j=1; j<=i; j++){
            cout<<m;
            m++;
        }
        m=m-2;
        for(int j=i-1; j>0; j--){
            cout<<m;
            m--;
        }
        cout<<endl;
        
    }
    
}
