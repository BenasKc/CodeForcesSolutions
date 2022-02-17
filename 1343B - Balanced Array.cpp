#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int a;
    cin >> a;
    int arr[a];
    int cnt = 2;
    int cnt2 = 1;
    int sum = 0;
    int sum2 = 0;
    for(int i = 0;i < a/2;i++)
    {
      arr[i] = cnt;
      cnt+=2;
      sum += arr[i];
    }
    for(int i = a/2;i < a;i++){
      arr[i] = cnt2;
      cnt2+=2;
      sum2 += arr[i];
    }
    arr[a-1] += (sum - sum2);
    if(arr[a-1] % 2 == 0){
      cout << "NO\n";
    }
    else{
      cout << "YES\n";
        for(auto i : arr){
        cout << i << " ";
      }
      cout << endl;
    }
  }
}

