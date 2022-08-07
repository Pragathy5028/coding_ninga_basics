// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int s=1; s<n-i+1; s++){
//             cout<<' ';
//         }
//         for(int j=1; j<=2*i-1; j++){
//             if(j<=i){
//                 cout<<j;
//             }else{
//                 for(int m=i-1; m>0; m--){
//                     cout<<m;
//                 }
//             }

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
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<' ';
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=i-1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}