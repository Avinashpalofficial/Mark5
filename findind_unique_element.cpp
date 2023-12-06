#include<iostream>
//#include<vector>

using namespace std;
void print(string ans,string original){
     if(original==""){ 
     cout<<ans<<endl;
     return;
     }
     for(int i=0;i<original.length();i++){
     char ch = original[i];
     string left =original.substr(0,i);
     string right=original.substr(i+1);
     print(ans+ch,left+right);

     }
    
}
int main(){

    string str= "abc";
    
    print("",str);
    
}