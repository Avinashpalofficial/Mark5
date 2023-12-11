#include<iostream>
#include<vector>
using namespace std;
void printsubset(int arr[],int n,int idx,vector<int>ans,int k){
 if(idx==n){
    if(ans.size()==k){
    for(int i=0;i<ans.size();i++){
         cout<<ans[i];
    }
    cout<<endl;
       }
    
    return;
 }
    printsubset(arr,n,idx+1,ans,k);
      ans.push_back(arr[idx]);
      printsubset(arr,n,idx+1,ans,k);



}
int main(){
    int k=2;
int arr[]= {1,2,3};
int n= sizeof(arr)/sizeof(arr[0]);
vector<int>v;
printsubset(arr,n,0,v,k);
// for(int i=0;i<v.size;i++){
//     cout<<v[i]<<endl;
// }

}