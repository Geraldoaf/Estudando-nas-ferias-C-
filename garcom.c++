#include <iostream>

using namespace std;

int main(){
    double n , l ,c,caiu = 0;
    cin >> n;
    double i = 1;
    while( i <= n){
        cin >> l >> c;
        
        if( l > c){
            caiu += c;
            i +=1;
        }else{
            i += 1;
        }
    }
    cout << caiu;
    return 0;

}
