#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
	double n;
	long long num;

	cin >> num;

	for(long long i = 0; i < num; i++){
		cin >> n;
		cout << fixed << setprecision(4) <<  sqrt(n) << "\n";
	}

	return 0;
}