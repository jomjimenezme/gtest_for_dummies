
// main.cpp 
#include "dates.h"


int main()
{
  Date d1{23, 6, 2002};
  Date d2{d1};
  Date d3 = d1;
  d2.print();
  d3.print();
}
