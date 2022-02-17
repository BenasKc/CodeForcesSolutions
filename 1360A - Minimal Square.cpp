#include <bits/stdc++.h>

using namespace std;

int main(){
  int a;
  cin >> a;
  while(a--){
    int x, y;
    cin >> x >> y;
    int mini = min(x,y);
    if(max(x,y) > mini*2)cout << max(x,y)*max(x,y)<<'\n';
    else cout << 4*mini*mini << '\n';
  }
}

