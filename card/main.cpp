#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
#include "card/card.h"

using namespace std;

//My first version was better but Mimir grader didn't like it...

int main() {
	Card c1("Red", "Heart", 8);
	Card c2;
	cout << c1.get_suit() << " " << c1.get_rank() << " "  << c1.get_color() << " "  << endl;
	cout << c2.get_suit() << " "  << c2.get_rank() << " "  << c2.get_color() << " "  << endl;
    bool q = (c1 <= c2);
    cout << q << endl;
	Card c(std::string("Red"), std::string("Club"), 5);
	cout << c.get_suit() << " " << c.get_rank() << " "  << c.get_color() << " " << endl;
	assert(c.get_rank() == std::string("5"));
	assert(c.get_color() == std::string("Red"));
	assert(c.get_suit() == std::string("Club"));
	Card x(std::string("Red"), std::string("Club"), 5);
	Card y(std::string("Black"), std::string("Diamond"), 5);
	Card z(std::string("Red"), std::string("Heart"), 10);
	assert(x <= y);
	assert(z > y);
	return 0;
}