#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  int arr[x];
  int limit = 0;
  for(int i = 0; i < x;i++){
    cin >> arr[i];
    if(i == y-1){
      limit = arr[i];
    }
  }
  int tms = 0;
  for(int i = 0; i < x;i++){
    if(limit <= arr[i] && arr[i] > 0){
      tms++;
    }
    else break;
  }
  cout <<tms;

}

