#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
          int five = 0, ten = 0;    
   
    for(int bill : bills){
       if(bill == 5){
        five++;
      } else if(bill == 10){
          if(five>0){
             
             five--;
             ten++;
          }else 
          return false;

      } else if(bill == 20){
        if(ten>0&&five>0){
            ten--;
            five--;
        }else if(five>=3){
            five -= 3;
        } else 
         return false;
            }
        } return true;
     }



 int main(){
    Solution solution;

      vector<int> bills1 = {5,5,5,10,20};
      vector<int> bills2 = {5,5,10,10,20};

   cout << (solution.lemonadeChange(bills1) ? "true": "false" ) << endl;
   cout << (solution.lemonadeChange(bills2) ? "true": "false" ) << endl;

   return 0;
 
   }
};