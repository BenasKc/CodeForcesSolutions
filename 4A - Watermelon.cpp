#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  for(int i = 1;i <= round(x/2);i++){
    if((i % 2) == 0 && (x-i) % 2 == 0){
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}

