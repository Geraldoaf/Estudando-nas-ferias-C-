#include <iostream>

using namespace std;

int main (){
    double d, valor,soma = 0,i = 1, Dg = 0;
    cin >> d;
    while (i <= d){
        cin >> valor;
        soma += valor;
        if(soma >= 1000000){
			Dg = i;
            break;
        }else{
            i += 1;
        }
    }
	if(Dg > 0){
		cout << Dg;
	}
    return 0;
}