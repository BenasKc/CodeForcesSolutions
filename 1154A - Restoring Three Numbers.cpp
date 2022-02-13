#include <bits/stdc++.h>

using namespace std;

int main(){
  int arr[4];
  for(int i = 0;i < 4;i++){
    cin >> arr[i];
  }
  sort(arr, arr+4);
  int a, b, c;
  b = arr[3] - arr[1];
  a = arr[0] - b;
  c = arr[1] - a;
  cout << a << " " << b << " " << c << endl;
}

