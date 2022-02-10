#include<bits/stdc++.h>

using namespace std;

int main(){
  int x, sum = 0, maxi = 0;
  cin >> x;
  while(x--){
    int a, b;
    cin >> a >> b;
    sum -= a;
    sum += b;
    maxi = max(maxi, sum);
  }
  cout << maxi;
}

