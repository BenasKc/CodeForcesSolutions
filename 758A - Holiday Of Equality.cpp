#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, maxi = 0;
  cin >> a;
  int arr[a];
  for(int i = 0;i < a;i++){
    cin >> arr[i];
    maxi = max(arr[i], maxi);
  }
  int cnt = 0;
  for(int i = 0;i < a;i++){
    if(arr[i] < maxi){
      cnt += maxi-arr[i];
    }
  }
  cout << cnt;
}

