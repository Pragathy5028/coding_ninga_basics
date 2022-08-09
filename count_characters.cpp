#include<iostream>
using namespace std;

int main(){
    char c;
    int count_n=0,count_s=0,count_c=0;
    cout<<"c?\n";
    c=cin.get();
    while(c!='$'){
        cout<<"c?\n";
        c=cin.get();
        if(c==' ' || c=='\t'){
            count_s++;
        }else if(c=='1'|| c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7'|| c=='8'|| c=='9'|| c=='0'){
            count_n++;
        }else{
            count_c++;
        }
        c=cin.get();

    }
    cout<<count_c<<' '<<count_n<<' '<<count_s<<endl;
    return 0;
}