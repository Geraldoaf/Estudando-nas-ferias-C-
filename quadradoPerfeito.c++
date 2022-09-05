#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll l, c, Qsoma = 0, Tl = 0, Tc = 0, Dp = 0, Ds = 0, Quadp = 0;
  cin >> l;
  c = l;
  ll v[l][c];
  
  for (ll i = 0; i < l; i++) {
    for (ll j = 0; j < c; j++) {
      cin >> v[i][j];
      if (i == 0) {
        Qsoma += v[i][j];
      }
    }
  }

  for (ll i = 0; i < l; i++) {
    for (ll j = 0; j < c; j++) {
      Tl += v[i][j];
      Tc += v[j][i];
      if (i == j) {
        Dp += v[i][j];
        Ds += v[i][(c - 1) - j];
      }
    }
    if (Qsoma == Tl) {
      Quadp += 1;
    }
    if (Qsoma == Tc) {
      Quadp += 1;
    }
    if (Qsoma == Ds) {
      Quadp += 1;
    }
    if (Qsoma == Dp) {
      Quadp += 1;
    }
    Tl = 0;
    Tc = 0;
  }
  if (Quadp >= (l + c + 2)) {
    cout << Qsoma << "\n";
  } else {
    cout << "-1\n";
  }
}
