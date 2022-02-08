#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  for(int i = 0; i <x;i++){
      int y;
      int cnt = 0;
      cin >> y;
      char arr1[y];
      char arr2[y];
      for(int j = 0; j < y;j++){
        cin >> arr1[j];
      }
      for(int j = 0; j < y;j++){
        cin >> arr2[j];
      }
      for(int j =0;j < y;j++){
      if(arr2[j] != '0'){
        if(j != 0 && j != y-1){
            if(arr1[j-1] == '1'){
              cnt++;
              arr1[j-1] = '0';
            }
            else if(arr1[j] == '0'){
              cnt++;
              arr1[j] = '0';
            }
            else if(arr1[j+1] == '1'){
              cnt++;
              arr1[j+1] = '0';
            }
        }
        else if(j == 0){
          if(arr1[j] == '0'){
              cnt++;
              arr1[j] = '0';
            }
            else if(arr1[j+1] == '1'){
              cnt++;
              arr1[j+1] = '0';
            }
        }
        else if(j == y-1){
          if(arr1[j-1] == '1'){
              cnt++;
              arr1[j-1] = '0';
            }
            else if(arr1[j] == '0'){
              cnt++;
              arr1[j] = '0';
            }
        }
      }

      }
      cout << cnt << endl;
  }


}

