#include <iostream>
#include "bigint.h"
using namespace std;


// Wicked small test file - just to get your feet wet with testing bigint
int main() {

		bigint x = 18446744073709551614;
        bigint y = 6;
        bigint z = x + y;

        cout << z << endl;

        z++;

        cout << z << endl;

        x = 5;
        y = 4;

        bool q = (x != y);

        cout << q << endl;

        return 0;
}
