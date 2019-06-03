#include <iostream>

int point (int x, int y){
  if (x >= 1 && y >= 1){
    return 1;
  }
  else if (x <= -1 && y >= 1){
    return 2;
  }
  else if (x >= 1 && y <= -1){
    return 4;
  }
  else{
    return 3;
  }
}

int main(){
  int x, y;
  std::cin >> x;
  std::cin >> y;
  std::cout << point(x, y) << std::endl;
  return 0;
}