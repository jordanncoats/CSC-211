#include <iostream>

using namespace std;

int fib(int n){
    if (n < 1){
        return n;
    }
    if (n > 1){
        return fib(n-1)+fib(n-2);
    }
}

int main(){

    int someNum;

    cout << "enter some num for fib - basic" << endl;

    cin >> someNum;

    cout << fib(someNum) << endl;

    return 0;
}