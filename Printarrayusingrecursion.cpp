#include<iostream>
#include<vector>
using namespace std;
void display(int arr[],int n,int idx){
    //base case
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
    void display2(vector<int>& v,int idx){
    //base case
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
}   
      


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    // display(arr,n,0);


        //using vector to print array
        // vector<int>v(n);    // this line mean size of vector 
        // for(int i=0;i<n;i++){
        //     v[i] =arr[i];
        // }
        //    display2(v,0);
       
}