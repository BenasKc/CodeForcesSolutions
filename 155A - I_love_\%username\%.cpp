#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, mini, maxi, cnt = 0;
  cin >> x;
  for(int i = 0;i < x;i++){
    int a;
    cin >> a;
    if(i == 0){
      mini = a;
      maxi = a;
    }
    else{
      if(mini > a){
        cnt++;
        mini = a;
      }
      if(maxi < a){
        cnt++;
        maxi = a;
      }
    }
  }
  cout << cnt;
}

