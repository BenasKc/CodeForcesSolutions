#include <bits/stdc++.h>

using namespace std;

int main(){
  int a;
  cin >> a;
  pair<int,int> arr[a];
  int o=0, t=0, th =0;
  for(int i = 0;i < a;i++){
    int f;
    cin >> f;
    arr[i] = make_pair(f, i+1);
    switch(f){
      case 1:o++;break;
      case 2:t++;break;
      case 3:th++;break;
    }
  }
  int temp = min(o, t);
  int mini = min(temp, th);
  sort(arr, arr+a);
  int times = 0;
  bool visited[a];
  memset(visited, 0, a);
  cout << mini ;
  while(times < mini){
    cout << endl;
    bool one = false, two = false, three = false;
    for(int i = 0;i < a;i++){
      if(one==false && !visited[i] && arr[i].first == 1){
        visited[i] = true;
        one = true;
        cout << arr[i].second << " ";
      }
      else if(two==false && !visited[i] && arr[i].first == 2){
        visited[i] = true;
        two = true;
        cout << arr[i].second << " ";
      }
      else if(three==false && !visited[i] && arr[i].first == 3){
        visited[i] = true;
        three = true;
        cout << arr[i].second << " ";
      }
    }
    times++;
  }
}

