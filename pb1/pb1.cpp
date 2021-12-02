#include <iostream>
#include <fstream>


int main(){
  int result = 0;
  int prev= 0;
  int next = 0;
  std::fstream infile("data.txt");
  infile >> prev;
  while(infile >> next){
    result = (prev < next) + result;
    prev=next;
  }
  std::cout << result << "\n";
  return 0;
}
