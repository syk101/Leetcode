#include<iostream>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int length = 0;
        int i = s.length()-1;

      while(i >=0 && s[i]== ' '){
        i--;
      }

       while(i >= 0 && s[i]!= ' '){

        length++;
        i--;
       }
          return length;
    }


};
int main(){

 
   Solution solution; 
    
    string s1 =  "Hello World";
    string s2 =  "   fly me   to   the moon  ";
    string s3 =  "luffy is still joyboy";

    cout << " length of the last word: "<<solution.lengthOfLastWord(s1)<<endl;
    cout << " length of the last word: "<<solution.lengthOfLastWord(s2)<<endl;
    cout << " length of the last word: "<<solution.lengthOfLastWord(s3)<<endl;


return 0;
     
}

    
