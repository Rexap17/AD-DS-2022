#include "Reverse.h"
#include <iostream>
#include <string>
using namespace std;


Reverse::Reverse(){}

int Reverse::reverseDigit(int num){

  static int reverseNum = 0;
  static int pos = 1;

  if(num > 0){ 
    reverseDigit(num/10); 
    reverseNum += (num%10)*pos; 
    pos *= 10; 
  }
  return reverseNum;
}


std::string Reverse::reverseString(std::string str){
  
  if(str.size() <= 1){
    return str;
  }else{
    return reverseString(str.substr(1,str.length())) + str.at(0);
  }
  
}
