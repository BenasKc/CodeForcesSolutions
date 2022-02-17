#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int a;
    cin >> a;
    int arr[a];
    bool swapped[a];
    memset(swapped, 0, a);
    int ev = 0, od = 0;
    for(int i = 0;i < a;i++){
      cin >> arr[i];
      if(arr[i] % 2 == 0)ev++;
      else od++;
    }
    if((a % 2 == 0 && ev != od)||(a%2!=0 && ev != od+1)){
          cout << -1 << endl;
    }
    else{
      int c= 0;
      for(int i = 0;i < a;i++){
        if((i%2!=arr[i]%2))
        {
          bool best = false;
          int rem=-1;
          for(int j = 0;j < a;j++){
            if(!swapped[j] && i%2==arr[j]%2){
              if(arr[i]%2==j%2){
                swap(arr[j], arr[i]);
                swapped[i]=1;
                swapped[j]=1;
                c++;
                best=true;
                break;
              }
            }
            else rem = j;
          }
          if(!best){
            swap(arr[rem], arr[i]);
            swapped[i]=1;
            swapped[rem]=1;
            c++;
          }
        }
      }
      cout << c << endl;
    }

  }

}

