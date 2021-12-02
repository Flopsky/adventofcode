#include <iostream>
#include <fstream>


int main(){
  int result = 0;
  int a= 0;
  int b = 0;
  int c = 0;
  std::fstream infile("data.txt");
  infile >> a;
  infile >> b;
  infile >> c;
  int prev = a+b+c;
  int next= 0;
  a=b;
  b=c;
  while(infile >> c){
    next=a+b+c;
    result = (prev < next) + result;
    a=b;
    b=c;
    prev=next;
  }
  std::cout << result << "\n";
  return 0;
}
