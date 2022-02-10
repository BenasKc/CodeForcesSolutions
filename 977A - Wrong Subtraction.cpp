#include<bits/stdc++.h>

using namespace std;

int main(){
  int x, k;
  cin >> x >> k;
  while(k--){
    int sz = log10(x)+1;
    if(x % 10 != 0){
      x-=1;
    }
    else x /= 10;
  }
  cout << x;

}

