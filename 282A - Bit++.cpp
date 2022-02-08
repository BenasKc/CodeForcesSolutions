#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  int cnt = 0;
  while(x--){
    char arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    if(arr[0] == 'X'){
      if(arr[1] == '-'){
        cnt-=1;
      }
      else cnt+=1;
    }
    else if(arr[2] == 'X'){
      if(arr[1] == '-'){
        cnt-=1;
      }
      else cnt+=1;
    }
  }
  cout << cnt;
}

