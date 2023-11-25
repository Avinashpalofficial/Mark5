#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){    //using four variable
    //base case
   // sr-> starting row
   //er->endrow// sc->startingcolumn
    if(sr>er||sc>ec) return 0;   // when person out of the box-> return 0
    if(sr==er&&sc==ec) return 1;  //  return 1-> when person reach the final destination
    int rightways= maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways =rightways+downways;
    return totalways;

   }

    // method 2 -> using two variable

   int maze2(int row,int column){
        if(row<1||column<1) return 0;  
        if(row==1&&column==1) return 1;
        int rightways= maze2(row,column-1);  // pahale rightways call lagayega aur no of path find karne ke bad 
        int downways = maze2(row-1,column);  //  downways ko find karenge  
        int totalways= rightways+downways;
        return totalways;
    }
      
      // Print path using four variable
      void printpath(int sr,int sc,int er,int ec,string s){
         if(sr>er||sc>ec)  return ;   // when person out of the box-> return 0
         if(sr==er&&sc==ec){
          cout<<s<<endl;
          return ;
         }
         printpath(sr,sc+1,er,ec,s+"R");
          printpath(sr+1,sc,er,ec,s+"D");
         
      }

         // print path using two variable
        void printpath(int row,int column,string s){
            if(row<1||column<1) return ;
            if(row==1 && column==1){
                cout<<s<<endl;
                return ;
            }
            printpath(row,column-1,s+"R");
            printpath(row-1,column,s+"D");
        }



int main(){
    cout<<maze(1,1,3,3);
    cout<<endl;
   cout<<maze2(3,3);
   cout<<endl;
       printpath(1,1,3,3,""); 
       cout<<endl;
          printpath(3,3,"");                          
}
