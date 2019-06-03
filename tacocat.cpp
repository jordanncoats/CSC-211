#include<iostream>
using namespace std;

bool is_palindrome(string query){
    bool status = false;
    string reverse=string(query.rbegin(),query.rend());
    if (query == reverse){
        status = true;
    }
    return status;
}

int main() {
  char query[100];
  cin >> query;
  if (is_palindrome(query) == true) {
    cout << "palindrome" << endl;
  } else {
    cout << "not a palindrome" << endl;
  }
  return 0;
}
