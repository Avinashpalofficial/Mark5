#include<iostream>
#include<algorithm>
#include <climits>
#include<vector>
using namespace std;
    int minimum_element(vector<int>v,int &mini,int idx ){
       if(idx==v.size()) return mini;

        mini =min(mini,v[idx]);
       return minimum_element(v, mini, idx+1);

   }

       int minimum(int arr[],int n,int idx, int &mini){
           if(idx==n) return mini;
           
           mini=min(mini,arr[idx]);
           
           
           

          return minimum(arr,n,idx+1,mini);



       }

       void minimum(int arr[],int n,int idx, int &mini){
        if(idx==n){
            cout<<mini;
            return;

        }
        if(mini>arr[idx]){
            mini=arr[idx];
        }

        minimum(arr,n,idx+1,mini);

       }
int main(){
    // int n;
    // cin>>n;
     
    //  int mini =23;
    //  vector<int>v(n);

    //  for(int i=0;i<v.size();i++){
    //     cin>>v[i];
    //  }

    //    cout<<minimum_element(v,mini,0);

    int arr[] = {2 ,3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mini = 50;
    //cout<<minimum(arr,n,0,mini); 
    minimum(arr,n,0,mini);        
}