#include<bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  int arr[x], arr2[x];
  for(int i = 0;i < x;i++){
    cin >> arr[i];
    arr2[arr[i]-1] = i+1;
  }
  for(int i = 0;i < x;i++){
    cout << arr2[i]<<" ";
  }
}

