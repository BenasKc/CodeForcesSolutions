#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    string a;
    cin >> a;
    for(int i = 0;i < a.size();i++){
      if(i == 0 || i == a.size()-1){
        cout << a[i];
      }
      else if(i % 2 == 0)cout << a[i];
    }
    cout << '\n';
  }
}

