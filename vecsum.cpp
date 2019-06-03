#include <iostream>
#include <vector>
using namespace std;

int vecSum(vector<int> someV){
  //Add correct parameter and implement here
  int answer = 0;
  for(int i = 0; i < 5; i++){
    answer = answer + someV[i];
  }
  return answer;
}

int main(){

  vector<int> someV;
  int userIn;
  for(int i = 0; i < 5; i++){
    cin >> userIn;
    someV.push_back(userIn);
  }

  int result = vecSum(someV);

  cout << result << endl;

}