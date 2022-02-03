#include<bits/stdc++.h>

using namespace std;

void solve(int N , std::vector<string> arr  , string &maxN , string &minN ){
    map<string,int> mp;
    int x =0; int y = INT_MAX;
    for(int i=0;i<N;i++){
        mp[arr[i]]++;
        if(mp[arr[i]] > x){
            x = mp[arr[i]];
        }
        if(mp[arr[i]] < y){
            y = mp[arr[i]];
        }
    }
    for(auto it:mp){
        if(it.second == x){
            maxN = it.first;
        }
        if(it.second == y){
            minN = it.first;
        }
    }
}

int main()
{
    int N ;
    cin>>N;
    vector<string> arr(N);
    for( int i=0;i<N;i++){
       cin>>arr[i];
    }
    string maxN,minN;
    solve(N , arr , maxN , minN);
     cout<<"most noughty - "<<maxN;
     cout<<"least noughty -"<<minN;
    return 0;
}