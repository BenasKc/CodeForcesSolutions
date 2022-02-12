#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, y, cnt = 0;
  cin >> x >> y;
  int limit = 1440-y;
  int cur = 1200;
  for(int i = 0;i < x;i++){
    if(cur+(i+1)*5 <= limit){
      cnt++;
      cur+=(i+1)*5;
    }
    else break;
  }
  cout << cnt;
}

