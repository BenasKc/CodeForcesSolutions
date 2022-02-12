#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  for(int i = 0;i < x;i++){
    for(int j = 0;j < y;j++){
      if(i != 0 && (i+1)%4 == 0){
        if(j == 0)cout <<'#';
        else cout << '.';
      }
      else if(i != 0 && (i+1)%2==0){
        if(j == y-1)cout << '#';
        else cout << '.';
      }
      else cout << "#";
    }
    cout << '\n';
  }
}

