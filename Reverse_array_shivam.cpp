#include<iostream>
using namespace std;
    int  reversearr(int arr[],int size){
     
     if(size>0){
        cout<<arr[size-1]<<endl;
        
     }

             reversearr(arr,size-1);
    }
   

  int main(){
    int arr[] ={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    reversearr(arr,size);
}