#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int n,int sum ){
    bool rr[n+1][sum+1];
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= sum ; j ++ ){

if(i==0){
    rr[i][j] = false;
}if(j==0){
    rr[i][j] = true;
}




        }
    }

for(int i = 1 ; i<=n;i++){
    for(int j = 1 ; j <= sum ; j++){
        if(arr[i-1]<=j)
        {
rr[i][j] = rr[i-1][j-arr[i-1] ] || rr[i-1][j];
        }else{
            rr[i][j] = rr[i-1][j];
        }


    }
}



return rr[n][sum];

}

int main(){
int n;

 // int sum;
cin>>n;
int arr[n]; 
for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
}
int sum;
cin>>sum;
bool a=  subsetSum(arr,n,sum);
if(a==1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

}
