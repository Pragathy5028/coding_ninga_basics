// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int m=n+1;
//     for(int i =1;i<=n;i++){
//         int p=m-i;
//         for(int j=1; j<=i;j++){
//             cout<<p;
//             p++;
    
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a=64;
    char ch=64+n;
    char limit=ch+1;
    for(int i=1; i<=n; i++){
        char pattern=limit-i;
        for(int j=1; j<=i; j++){
            cout<<pattern;
            pattern++;

        }
        cout<<endl;
    }
}