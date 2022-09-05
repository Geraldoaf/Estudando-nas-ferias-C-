#include <iostream>
typedef long long ll;
using namespace std;

int main(){
    ll tmp, qnt, old = 0, cc =0, maior = 0;
    cin >> qnt;
    for(ll i = 0; i < qnt; i++){
        cin >> tmp;
        if( tmp != old){
            if( cc > maior){
                maior = cc;
            }
            old = tmp;
            cc = 1;
        }else{
            cc +=1;
        }
    }
    if ( cc > maior){
        maior = cc ;
    }
    cout << maior;
    return 0 ;

}