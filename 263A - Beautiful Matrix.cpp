#include <bits/stdc++.h>

using namespace std;
void counts(int i, int j){
  int cnt = 0;
  while(i < 2){
    i++;
    cnt++;
  }
  while(i > 2){
    i--;
    cnt++;
  }
  while(j < 2){
    j++;
    cnt++;
  }
  while(j > 2){
    j--;
    cnt++;
  }
  cout << cnt;
  return;
}
int main(){
  int arr[5][5];
  for(int i = 0;i < 5;i++){
    for(int j = 0;j < 5;j++){
      cin >> arr[i][j];
      if(arr[i][j] == 1){
        counts(i, j);
        return 0;
      }
    }
  }
}



