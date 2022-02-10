#include<bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  for(int i = x+1; i < 10000;i++){
    int arr[4];
    arr[0] = i /1000; arr[1] = i%1000/100; arr[2] = i%100/10; arr[3] = i%10;
    set<int> sa = {arr[0], arr[1], arr[2], arr[3]};
    if(sa.size() == 4){
      cout << i;
      return 0;
    }
  }
}

