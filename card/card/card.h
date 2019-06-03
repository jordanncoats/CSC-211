#ifndef CARD_H
#define CARD_H

class Card{
    protected:
        std::string suit;
		int rank;
        std::string color;
    public:
        Card();
        Card(std::string c, std::string s, int r);
        std::string get_suit();
        std::string get_rank();
        std::string get_color();
        bool operator ==(const Card &other);
        bool operator !=(const Card &other);
        bool operator >(const Card &other);
        bool operator <(const Card &other);
        bool operator >=(const Card &other);
        bool operator <=(const Card &other);
};
#endif