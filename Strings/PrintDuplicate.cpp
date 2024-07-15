#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter String"<<endl;
    cin>>s;

    unordered_map<char,int>freq;
    for(auto ch:s){
        freq[ch]++;
    }
    for(auto it=freq.begin();it!=freq.end();it++){
        if(it->second >1){
          cout<<it->first<<"->"<<it->second<<endl;

        }
       
    }
    return 0;
}