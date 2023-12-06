#include<iostream>
using namespace std;
  bool ispowerof2(int n){
 if(n==1){
   return true;
 }  
   else if(n%2==0){
    return  (ispowerof2(n/2));
    
 }    
      else  return false;

  }
    
 
int main(){
   int n;
   cin>>n;
   if(ispowerof2(n)){
    cout<<"yes";
   }
   else {
      cout<<"no";
   }

}