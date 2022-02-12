#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  int mini = 0;
  int cur = 0;
  cin >> x;
  while(x--){
    int a;
    cin >> a;
    cur += a;
    mini = min(cur, mini);
  }
  cout << mini*-1;
}

