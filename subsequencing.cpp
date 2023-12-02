#include<iostream>
#include<vector>
using namespace std;
void subsequence(int arr[],int n,int idx, int k, vector<int>ans ){
        if (idx==n){
            if(ans.size()==k){
                for(int i=0;i<ans.size();i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;

            }
            return;
        }

      //  if(ans.size()+(n-idx)<k)
            subsequence(arr,n,idx+1,k,ans);
        ans.push_back(arr[idx]);
        subsequence(arr,n,idx+1,k,ans);
        
        

}
int main(){

    int arr [] ={1,2,3,4,5};
    int n =sizeof (arr)/sizeof(arr[0]);
    int k=3;
     vector<int>v;
    subsequence(arr,n,0,k,v);


}