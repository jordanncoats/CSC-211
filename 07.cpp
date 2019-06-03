//Programming can be a blank canvas full of possibilities.

//Here is your blank canvas.

#include<iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

void print24(string str){
   if (str[8] == 'P'){
      int first, second, carry, temp;
      string one, two;
      one = str[0];
      two = str[1];
      first = stoi(one);
      second = stoi(two);
         second = second + 2;
         if(second > 9){
            carry = 1;
            second = second % 10;
         }
         else{
            carry = 0;
         }
         string rest = str.substr(2,6);
         first = first + 1 + carry;

         if(first == 2 && second == 4){
         cout << str.substr(0,8) << endl;
         }
      else{
         cout << first << second << rest << endl;
   }}
   else{
      int first, second, carry, temp;
      string one, two;
      one = str[0];
      two = str[1];
      first = stoi(one);
      second = stoi(two);
         if(first == 1 && second == 2){
         int first = 0;
         int second = 0;
         string rest = str.substr(2,6);
         cout << first << second << rest << endl;
      }
      else{
      cout << str.substr(0,8) << endl;
   }
}
}

int main()
{
   cout << "Enter a time in the following format! - 11:05:45PM" << endl;
   string str;
   cin >> str;
   print24(str);
   return 0;
}