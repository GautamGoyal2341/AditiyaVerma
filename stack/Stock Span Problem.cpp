

// please note --->>>> this code is for user implementation i know that i use 2 for loops so dont get confused

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[] = {100,80,60,70,60,75,85};
   int n = sizeof(arr)/sizeof(arr[0]);
   stack<pair<int,int>> s;
   vector<int>v;
   for(int i = 0 ; i  < n ; i++){
       if(s.size()==0){
           v.push_back(-1);
       }else if(s.size()>0 && s.top().first>arr[i]){
           v.push_back(s.top().second);
       }else if(s.size()>0 && s.top().first<=arr[i]){
           while(s.size()>0 && s.top().first<=arr[i]){
               s.pop();
               
           }if(s.size()==0){
               v.push_back(-1);
           }else if(s.top().first>arr[i]){
               v.push_back(s.top().second);
           }
       }
    s.push({arr[i],i});   
   }
for(int i = 0; i < v.size(); i++){
    v[i] = i-v[i];
}
for(int i = 0; i < v.size(); i++){
    std:: cout<<v[i]<<" ";
}
}
