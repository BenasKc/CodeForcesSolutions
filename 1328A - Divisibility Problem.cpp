#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int a, b;
    cin >> a >> b;
    if(a % b != 0){
      int c = a / b + 1;
      cout << b * c - a << endl;
    }
    else cout << 0 << endl;

  }
}

