#include <iostream>
using namespace std;

int main(){


for( int row = 1; row <= 12; ++row )
{
    for( int column = 1; column <= 12; ++column )
    {
        cout << column * row  << '\t';
    }
    cout << endl;
}

    return 0;
}