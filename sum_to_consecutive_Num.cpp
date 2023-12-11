#include<iostream>
using namespace std;
void print(int a[],int n){
    //basecase
    if(n<1) return ;
     int temp[n-1];
     for(int i=0;i<n-1;i++)temp[i] =a[i]+a[i+1]; 
             

     
     for(auto x: temp)cout<<x<<endl;
     print(temp,n-1);
      
}
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[n];
     }
      print(a,n);
     for(auto x: a) cout<<x<<endl;   
}