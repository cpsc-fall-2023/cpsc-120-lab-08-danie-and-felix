// Daniel Quan 
// danielq9321@csu.fullerton.edu
// @danielq9321
// Partner: @IlFeIix

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

if (arguments.size() < 2) {
  std::cout<<"error: you must supply at least one number";
  return 1;
}
double sum = 0.0;
for(size_t i = 1; i < arguments.size(); ++i) {
  sum += std::stod(arguments[i]);
}
double average = sum / (arguments.size() - 1);
std::cout<<"average = "<<average<<"\n";
  return 0;
}
