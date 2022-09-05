#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	ll qnt, p1 = 0;

	cin >> qnt;

	ll l[qnt];

	for (ll i = 0; i < qnt; i++){
		cin >> l[i];
	}

	for (ll i = 0; i < qnt; i++){
		p1 = -1;
		if (l[i] != 0){
			for (ll j = i; j < qnt; j++){
				if (l[j] == 0){
					p1 = j-i;
					break;
				}
			}
			for (ll j = i; j >= 0; j--){
				if (l[j] == 0){
					if (p1 > (i-j) || p1 == -1){
						p1 = (i-j);
					}
					break;
				}
			}
		}
		else{
			p1 = 0;
		}

		if (p1 > 9){
			p1 = 9;
		}

		cout << p1 << " ";
	}

	return 0;
}