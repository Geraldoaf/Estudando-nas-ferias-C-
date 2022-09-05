#include <iostream>

using namespace std;

int main (){
    double a = 0, b = 0, parada,lo;
    cin >> parada;
    for(double i = 0; i < parada;i++){
        cin >> lo;
        if( lo == 1){
            if( a == 0 ){
                a = 1;
            }else{
                a = 0;
            }
        }else if(lo == 2){
            if(a == 0 && b == 0){
                a = 1;
                b = 1;
            }else if (a == 1 && b == 0){
                a = 0;
                b = 1;
            }else if ( a == 0 && b == 1){
                a = 1;
                b = 0;
            }else{
                a = 0;
                b = 0;
            }
        }
    }
    cout << a << "\n" << b;
}