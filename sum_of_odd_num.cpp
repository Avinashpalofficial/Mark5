#include<iostream>
using namespace std;
 int findsum(int curr,int lastnum){
    if(curr>lastnum) return 0;
    if(curr%2==0) return findsum(curr+1,lastnum);
    return(curr+(curr+2,lastnum));
 }
 
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<findsum(a,b)<<endl;


         
       
     
    }
