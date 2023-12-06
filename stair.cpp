#include<iostream>
using namespace std;

int stair(int n){
  if(n==1) return 1;
  if(n==2) return 2;
  if(n==3) return 3;

  return (stair(n-1)+stair(n-2)+stair(n-3));

}
  int  power(int a,int n){
    if(n==0) return 1;
      
     return(a*power(a,n-1));


     

  }
int main(){

   cout<<stair(5);

  
}