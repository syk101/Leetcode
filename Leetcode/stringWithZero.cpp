#include<iostream>
using namespace std;

int calculateStringLength(const char* str){

   int length = 0;

   while(str[length] != '\0'){
    length++;
   } 
      return length;

}

int main(){

     const char* myString = "Hello World";

    int length = calculateStringLength(myString);

  cout << "The length of string is : "<< length <<endl;

   return 0 ;
}