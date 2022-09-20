#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "ReduceGCD.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> L = {6,   -11, 53, -16,  73,  128, 105,  104,  -71, -179,
                   102, 12,  21, -145, -99, 199, -156, -186, 43,  -189};

  MapTriple t;
  MapAbsoluteValue a;

  FilterOdd o;
  FilterForTwoDigitPositive d;

  ReduceMinimum m;
  ReduceGCD g;

  MapGeneric *mapT = &t;
  MapGeneric *mapA = &a;

  FilterGeneric *filterO = &o;
  FilterGeneric *filterD = &d;

  ReduceGeneric *reduceM = &m;
  ReduceGeneric *reduceG = &g;

  reduceM->reduce(filterD->filter(filterO->filter(mapA->map(mapT->map(L)))));
  reduceG->reduce(filterD->filter(filterO->filter(mapA->map(mapT->map(L)))));

  return 0;
}
