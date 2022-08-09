#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int x = n;
    int ld = 0;
    int len = 0;
    while (x > 0) {
      len++;
      ld = x % 10;
      x /= 10;
    }
    
    if (ld == 9) {
      long long pom = 1;
      for (int i = 0; i < len; ++i) pom *= 10;
      cout << pom - n << endl;
    }
    else {
      long long pom = (ld + 1);
      for (int i = 1; i < len; ++i) pom *= 10;
      cout << pom - n << endl;
    }
    return 0;
}