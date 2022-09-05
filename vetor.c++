#include <bits/stdc++.h>
typedef long long ll;
typedef long double lb;
using namespace std;

int main() {

  ll n, tem = 0;
  cin >> n;
  ll v[n];
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (ll i = 0; i < n; i++) {
    if ( (v[i] == 1) && (v[i + 1] == 0) && (v[i + 2] == 0)) {
      tem += 1;
    }
  }
  cout << tem;
  return 0;
}
