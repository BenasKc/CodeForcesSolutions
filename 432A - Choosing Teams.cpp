#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int arr[a];
  for(int i = 0;i < a;i++){
    cin >> arr[i];
    arr[i]+=b;
  }
  int cnt = 0;
  sort(arr, arr+a);
  for(int i = 0;i < a-2;i+=3){
    if(arr[i] <= 5 && arr[i+1] <= 5 && arr[i+2] <= 5){
      cnt++;
    }
  }
  cout << cnt;
}

