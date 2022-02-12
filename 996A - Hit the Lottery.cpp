#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  int cnt = 0;
  while(x > 0){
    if(x >= 100)x-=100;
    else if(x >= 20)x-=20;
    else if(x >= 10)x-=10;
    else if(x >= 5)x-=5;
    else x--;
    cnt++;
  }
  cout << cnt;
}

