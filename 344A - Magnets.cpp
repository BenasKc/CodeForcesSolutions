#include<bits/stdc++.h>

using namespace std;

int main(){
  int x, counts = 0;
  cin >> x;
  string s;
  while(x--){
    if(s.empty()){
      cin >> s;
      counts++;
    }
    else{
      string a;
      cin >> a;
      if(a != s){
        counts++;
        s = a;
      }
    }

  }
  cout << counts;
}

