#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int s;
    cin >> s;
    if(s-3 >=0){
      cout << (s-3)/2+1  << endl;
    }
    else cout << 0 << endl;
  }
}

