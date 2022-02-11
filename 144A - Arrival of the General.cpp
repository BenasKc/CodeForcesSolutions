#include<bits/stdc++.h>

using namespace std;

int main(){
  int a;
  cin >> a;
  int arr[a];
  pair<int,int> shortest = {-1, 101};
  pair<int,int> highest = {-1, 0};
  for(int i = 0;i < a;i++){
    cin >> arr[i];
    if(shortest.second >= arr[i]){
      shortest = {i, arr[i]};
    }
    if(highest.second < arr[i]){
      highest = {i, arr[i]};
    }
  }
  int sec =0;
  for(int i = shortest.first;i < a-1;i++){
    if(i+1 == highest.first){
      highest.first--;
    }
    swap(arr[i], arr[i+1]);
    sec++;
  }
  for(int i = highest.first;i >0;i--){
    swap(arr[i], arr[i-1]);
    sec++;
  }
  cout << sec;
}

