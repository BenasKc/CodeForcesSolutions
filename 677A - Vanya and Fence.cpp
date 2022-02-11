#include<bits/stdc++.h>

using namespace std;

int main(){
  int x, y, sum = 0;
  cin >> x >> y;
  for(int i = 0; i < x;i++){
    int a;
    cin >> a;
    if(a > y)sum+=2;
    else sum++;
  }
  x = max(x, sum);
  cout << x;
}

