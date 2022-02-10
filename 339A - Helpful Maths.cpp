#include<bits/stdc++.h>

using namespace std;

int main(){
  string a;
  cin >> a;
  int arr[a.size()/2+1];
  for(int i = 0; i < a.size();i+=2){
    arr[i/2] = a[i]-'0';
  }
  sort(arr, arr+a.size()/2+1);
  for(int i = 0; i < a.size()/2;i++){
    cout << arr[i] << '+';
  }
  cout << arr[a.size()/2];
}

