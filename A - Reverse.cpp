#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int x;
  cin >> x;
  while(x--){
    int a;
    cin >> a;
    int arr[a];
    int indexend = -1;
    int indexstart = -1;
    for(int i = 0;i < a;i++){
      cin >> arr[i];
    }
    vector<int> vk;
    for(int i = 0;i < a;i++){
      if(i+1 != arr[i]){
        int mini = arr[i];
        indexstart = i;
        indexend = i;
        for(int j = indexstart;j < a;j++){
          if(arr[j] < mini){
            mini = arr[j];
            indexend = j;
          }
        }
        for(int j = indexstart;j <= indexend;j++){
          vk.push_back(arr[j]);
        }
        break;
      }
    }
    for(int i = 0;i < a;i++){
      if(i < indexstart || i > indexend ){
        cout << arr[i] << ' ';
      }
      else{
        reverse(vk.begin(), vk.end());
        for(auto j:vk){
          cout << j << ' ';
        }
        i = indexend;
      }
    }
    cout << endl;
  }
}
