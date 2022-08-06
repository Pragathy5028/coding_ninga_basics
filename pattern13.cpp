#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        char ch=64;
        ch=ch+i;
        for(int j=1; j<=n; j++){
            cout<<ch;
            ch++;

        }
        cout<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     char ch=64;
//     ch=ch+2;
//     cout<<ch<<endl;
//     return 0;
// }