#include "EfficientTruckloads.h"
#include <iostream>

EfficientTruckloads::EfficientTruckloads(){}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
  //static vector<int> calcTable;

  int crate1,crate2;
  if (numCrates <= 0 || loadSize <= 0){
    return -1;
  };

  if(numCrates <= loadSize){
    return 1;
  };

  if(numCrates%2 == 0){
    crate1 = numCrates/2;
    crate2 = numCrates/2;
  }else{
    crate1 = numCrates/2;
    crate2 = numCrates/2+1;
  };

  return numTrucks(crate1,loadSize) + numTrucks(crate2,loadSize);
}

