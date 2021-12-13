#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

int main(){
  int horizontal = 0;
  int depth= 0;
  char next[]="changeable";
  int number=0;
  std::fstream infile("data");
  while(infile >> next >> number){
    horizontal = horizontal+(strcmp(next,"forward")==0)*number;
    depth = depth - (strcmp(next,"up")==0)*number;
    depth = depth + (strcmp(next,"down")==0)*number;

  }
  std::cout << depth*horizontal << "\n";
  return 0;
}
