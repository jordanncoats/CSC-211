#include <iostream>
#include <string>
#include <vector>
#include "card.h"
using namespace std;
//Default card is Ace of Spades
    Card::Card(){
         suit = "Spade";
         rank = 1;
         color = "Black";
    }
//This creates a card
    Card::Card(std::string c, std::string s, int r){
        if (s == "Spade" || s == "Diamond" || s == "Heart" || s == "Club") this->suit = s;
        else cerr << "Card not valid" <<endl;
        if (r < 1 || r > 13) cerr << "Card not valid" << endl;
        else this->rank = r;
        if (c == "Black" || c == "Red") this->color = c;
        else cerr << "Card not valid" << endl;
    }

    string Card::get_suit(){
		return this->suit;
    }

   string Card::get_color(){
        return this->color;
    }
//Turns rank into string
   string Card::get_rank(){
       switch(rank){
           case 1: return "Ace";
           case 2: return "2";
           case 3: return "3";
           case 4: return "4";
           case 5: return "5";
           case 6: return "6";
           case 7: return "7";
           case 8: return "8";
           case 9: return "9";
           case 10: return "10";
           case 11: return "Jack";
           case 12: return "Queen";
           case 13: return "King";
           default: return "Card not valid";
       }
    }

       bool Card::operator ==(const Card &other){
           return rank == other.rank;
       }
       bool Card::operator !=(const Card &other){
           return rank != other.rank;
       }
        bool Card::operator >(const Card &other){
           return rank > other.rank;
       }
       bool Card::operator <(const Card &other){
           return rank < other.rank;
       }
       bool Card::operator >=(const Card &other){
           return rank >= other.rank;
       }
       bool Card::operator <=(const Card &other){
           return rank <= other.rank;
       }