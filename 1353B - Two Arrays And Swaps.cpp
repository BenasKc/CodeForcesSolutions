#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<int> arr2;
    for(int i = 0;i < n;i++){
      cin >> arr[i];
    }
    for(int i = 0;i < n;i++){
      int f;
      cin >> f;
      arr2.push_back(f);
    }
    sort(arr, arr+n);
    sort(arr2.begin(),arr2.end());
    int cnt = 0;
    for(int i = 0;i < n;i++){
      if(cnt <= k){
        for(int j = arr2.size()-1;j >= 0;j--){
          if(arr[i] < arr2[j] && cnt < k){
            cnt++;
            swap(arr[i], arr2[j]);
            arr2.erase(arr2.begin()+j);
          }
        }
      }
    }
    int sum = 0;
    for(int i = 0;i < n;i++){
      sum += arr[i];
    }
    cout << sum << '\n';
  }
}

