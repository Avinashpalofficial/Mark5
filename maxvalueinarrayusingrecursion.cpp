#include<iostream>
#include <climits>
using namespace std;
          
    // MAX VALUE USING RECURSION


 int maxinarray(int arr[],int n,int idx){
    //base case
     if(idx==n) return INT_MIN;
      return max(arr[idx],maxinarray(arr,n,idx+1));
 }     
       
        void printmax(int arr[],int n,int idx,int max){
            if(idx==n) {
                cout<<max;
                return;
            }
            if(max<arr[idx]) {
                max= arr[idx];
                
            printmax(arr,n,idx+1,max);
            }
        
        }

int main(){
        

     // max value in an array using normal method
      
    int arr[]={1,2,3,4,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    // int max=-1;
    // for(int i=0;i<n;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
    // }
    // cout<<max;
    //cout<<maxinarray(arr,n,0);
    printmax(arr,n,0,INT_MIN);

    
}