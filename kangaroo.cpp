#include <iostream>
using namespace std;

int main(){
	int x1, x2, v1, v2;

	cin >> x1 >> v1 >> x2 >> v2;

	if(v2 >= v1 && x1 != x2){
		cout << "NO" << endl;
	}
	else if((x2 - x1) % (v1 - v2) == 0){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}
