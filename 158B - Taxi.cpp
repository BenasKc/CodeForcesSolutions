#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int a;
  cin >> a;
  map<int,int> mp;
  long long int taxis=0;
  for(int i = 0;i < a;i++){
    int z;
    cin >> z;
    mp.insert(make_pair(z, mp[z]++));
  }
  long long int ch = 0;
  taxis += mp[4];
  mp[4] = 0;
  if(mp[2] % 2 == 0){
    taxis += mp[2]/2;
    mp[2] = 0;
  }
  else if(mp[2] > 1){
    taxis += mp[2]/2;
    mp[2]=1;
  }
  int mini = min(mp[1], mp[3]);
  taxis += mini;
  mp[1]-=mini;
  mp[3]-=mini;
  if(mp[2] == 1 && mp[1] > 0){
    mp[2]--;
    if(mp[1] > 1)mp[1]-=2;
    else mp[1]--;
    taxis++;
  }
  else if(mp[2] == 1 && mp[1] == 0){
    mp[2]--;
    taxis++;
  }
  taxis+=mp[3];
  mp[3]=0;
  if(mp[1] % 4 != 0){
    taxis += mp[1]/4 + 1;
  }
  else taxis +=mp[1]/4;
  cout << taxis << endl;
}

