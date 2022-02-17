#include <bits/stdc++.h>

using namespace std;

int main(){
  string r;
  cin >> r;
  int c=0;
  int mx = 0;
  char prev=r[0];
  for(int i = 0;i < r.size();i++){
    if(r[i] == prev){
      c++;
      mx = max(mx, c);
    }
    else{
      c=1;
      prev=r[i];
    }
  }
  if(mx >= 7)cout << "YES\n";
  else cout << "NO\n";
}

