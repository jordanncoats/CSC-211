#include <iostream>
std::string oddities(int x){
  std::string y;
  if (x % 2 == 0) {
    y = "even";
  }
  else {
    y = "odd";
  }
  return y;
}
int main(){
  int x;
  std::string result;
  std::cin >> x;
  result = oddities(x);
  std::cout << result;
  return 0;
}