#include<iostream>
#include<vector>
using namespace std;
void sum_arr(int arr[],int n, int idx,int &sum){
      if(idx==n){
        cout<<sum;
        return;
      }
      sum+=arr[idx];
     sum_arr(arr,n,idx+1,sum); 
}
       int sum_vec(vector<int>v,int idx){
        if(idx==v.size()-1) return v[idx];
          return v[idx]+sum_vec(v,idx+1);

       }
int main(){
    // int arr[]={1,2,3};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int sum=0;
    // sum_arr(arr,n,0,sum);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
      cin>>v[i];
    }
    // int sum=0;
    cout<<sum_vec(v,0);
}