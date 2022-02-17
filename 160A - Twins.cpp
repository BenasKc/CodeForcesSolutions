#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  int arr[x];
  int sum = 0;
  for(int i = 0;i < x;i++){
    cin >> arr[i];
    sum+=arr[i];
  }
  sort(arr, arr+x);
  sum/=2;
  int index = 1, cur = 0;
  while(sum >= cur){
    cur+=arr[x-index];
    index++;
  }
  cout << index-1 << endl;
}

