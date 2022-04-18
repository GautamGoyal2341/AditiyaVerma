/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
  int arr[] = {1,3,0,0,1,2,4};
 int  n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v; 
    stack <int> s; 
    for (int i=n-1;i>=0;i--){
      if(s.size() ==0) 
        v.push_back(-1);
      else if (s.size()>0 && s.top()>arr[i]) 
      {
        v.push_back(s.top()); 
      }
      else if (s.size()>0 && s.top()<=arr[i]) 
      {
        while(s.size()>0 && s.top()<=arr[i]) 
        {
          s.pop(); 
        }
        if (s.size()==0) // when stack became empty return -1
        {
          v.push_back(-1);
        }
        else
        {
          v.push_back(s.top()); // else push stack top in the vector 
        }
      }
      s.push(arr[i]); // push array in stack
    }
    reverse(v.begin(),v.end()); 
    for(int i = 0; i < v.size(); i++)
    std::cout << v[i] << ' ';
  };
  

