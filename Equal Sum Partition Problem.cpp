#include <bits/stdc++.h>
using namespace std;



bool subSet(int arr[], int n , int sum){
bool rr[n+1][sum+1];
for(int i = 0 ; i <= n ; i++){
    for(int j = 0 ;  j  <= sum ; j++){
if(i==0){
    rr[i][j]= false;

}


if(j==0){
    rr[i][j] = true;
}

    }

} 



for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= sum ; j++){
        if(arr[i-1]<=j){
            rr[i][j] = rr[i-1][j-arr[i-1]] || rr[i-1][j];
        }else{
            rr[i][j] = rr[i-1][j];
        }
    }

}




return rr[n][sum];



}

bool sumEqual(int arr[], int n ){
int sum = 0;
for(int i = 0 ;  i < n  ; i ++){
    sum = sum + arr[i];
}
if(sum%2==1){
    return false;
}



  return subSet(arr,n,sum/2);



}


int main(){


int n;
cin>>n;
int arr[n];
for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
}

bool a=  sumEqual(arr,n);
if(a==1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

}
