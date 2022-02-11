#include<bits/stdc++.h>

using namespace std;

int main(){
  int x, r = 0;
  cin >> x;
  while(x--){
    int a, b;
    cin >> a >> b;
    if(a+1 < b)r++;
  }
  cout << r;
}

