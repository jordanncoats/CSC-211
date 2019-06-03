#include <iostream>
using namespace std;

int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << factorial(n);
  return 0;
}