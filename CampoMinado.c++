#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll vet[n];

  for (ll i = 0; i < n; i++) {
    cin >> vet[i];
  }
  for (ll i = 0; i < n; i++) {
    if (i == 0) {
      if (vet[i] == 1) {
        if (vet[i + 1] == 1) {
          cout << "2\n";
        } else {
          cout << "1\n";
        }
      } else {
        if (vet[i + 1] == 1) {
          cout << "1\n";
        } else {
          cout << "0\n";
        }
      }
    } else if (i != (n - 1)) {
      if (vet[i] == 1) {
        if (vet[i - 1] == 1 && vet[i + 1] == 1) {
          cout << "3\n";
        } else if (vet[i - 1] == 0 && vet[i + 1] == 1) {
          cout << "2\n";
        } else if (vet[i - 1] == 1 && vet[i + 1] == 0) {
          cout << "2\n";
        } else {
          cout << "1\n";
        }
      } else {
        if (vet[i] == 0) {
          if (vet[i - 1] == 1 && vet[i + 1] == 1) {
            cout << "2\n";
          } else if (vet[i - 1] == 1 && vet[i + 1] == 0) {
            cout << "1\n";
          } else if (vet[i - 1] == 0 && vet[i + 1] == 1) {
            cout << "1\n";
          } else {
            cout << "0\n";
          }
        }
      }
    } else {
      if (vet[n - 1] == 1) {
        if (vet[n - 2] == 1) {
          cout << "2\n";
        } else {
          cout << "1\n";
        }
      } else {
        if (vet[n - 2] == 1) {
          cout << "1\n";
        } else {
          cout << "0\n";
        }
      }
    }
  }
}
