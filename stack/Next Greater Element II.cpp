class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        
        int n = arr.size();
   
         vector<int> v; 
    stack <int> s; 
         	for(int i=arr.size()-1;i>=0;i--)
		{
			s.push(arr[i]);

		}
    for (int i=n-1;i>=0;i--){
      if(s.size() ==0) 
        v.push_back(-1);
      else if (s.size()>0 && s.top()>arr[i%n]) 
      {
        v.push_back(s.top()); 
      }
      else if (s.size()>0 && s.top()<=arr[i%n]) 
      {
        while(s.size()>0 && s.top()<=arr[i%n]) 
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
        return v;
    }
};
