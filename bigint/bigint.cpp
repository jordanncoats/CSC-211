/*
A class to represent arbitrarily large integers
*/
#include "bigint.h"

void bigint::strip_zeros()
{
    //Give in class
    while (!number.empty() && number.back() == 0)
    {
        number.pop_back();
    }
    if (number.empty())
    {
        number.push_back(0);
    }
}

/* Constructors
 *
 * */

bigint::bigint()
{
    number.clear();
    number.push_back(0);
}

bigint::bigint(const std::vector<vec_bin> &that)
{
    number.clear();
    number = that;
    this->strip_zeros();
}

bigint::bigint(unsigned long long i)
{
    //Given in class
    number.clear();
    do
    {
        number.push_back((vec_bin)(i % 10));
    } while (i /= 10);
}

bigint::bigint(std::string str)
{
    number.clear();
    for (int i = str.length(); i > 0; --i)
    {
        number.push_back((vec_bin)(str[i - 1] - '0'));
    }
    this->strip_zeros();
}

bigint::bigint(const bigint &that)
{
    number.clear();
    number = that.getNumber();
}

/* Number Access
 *
 * */
const std::vector<vec_bin> &bigint::getNumber() const
{
    return number;
}

vec_bin bigint::operator[](size_t index) const
{
    return number[index];
}

/** Comparators
 *
 * */
bool bigint::operator==(const bigint &that) const
{
    return number == that.number;
}

bool bigint::operator!=(const bigint &that) const
{
    return !(*this == that);
}

bool bigint::operator<(const bigint &that) const
{
    //Will check lengths first as its easier than checking the actual numbers each time.
    if (number.size() < that.number.size())
        return true;
    else if (that.number.size() < number.size())
        return false;
    //if they happen to be equal it goes to the last place (first number) and compares those and so on.
    else
    {
        for (int i = number.size(); i > 0; --i)
        {
            if (number[i - 1] < that[i - 1])
                return true;
            else if (that[i - 1] < number[i - 1])
                return false;
        }
    }
}

bool bigint::operator<=(const bigint &that) const
{
    return !(that < *this);
}

bool bigint::operator>(const bigint &that) const
{
    return that < *this;
}

bool bigint::operator>=(const bigint &that) const
{
    return !(*this < that);
}

/** Addition
 *
 * */

bigint bigint::add(const bigint &that) const
{
    std::vector<vec_bin> result = number;
    //Fix for the band-aid of big to small
    std::vector<vec_bin> small;
    std::vector<vec_bin> big;
    //This is the proper addition portion
    //Using a carry over system and a temp variable to store the final amount.
    int carry = 0;
    int temp = 0;
    //this pads the numbers.
    if (number.size() < that.number.size())
    {
        big = that.number;
        small = number;
        for (int i = number.size(); i < that.number.size(); ++i)
        {
            result.push_back(0);
            small.push_back(0);
        }
    }

    else
    {
        big = number;
        small = that.number;
        for (int i = that.number.size(); i < number.size(); ++i)
        {
            result.push_back(0);
            small.push_back(0);
        }
    }
    //As the carry over for addition will only ever be one this just checks to see if it's over 9 then is carries 1, if not it carries 0 instead of trying to split it each time.
    for (int i = 0; i < big.size(); ++i)
    {
        temp = big[i] + small[i] + carry;
        if (temp > 9)
        {
            carry = 1;
            result[i] = temp % 10;
        }
        else
        {
            carry = 0;
            result[i] = temp;
        }
    }
    //If it's a 1 it will create a new spot at the front for it, if it is zero then it just gets stripped. (TA Helped)
    result.push_back(carry);
    bigint final = result;
    return final;
}

bigint bigint::operator+(const bigint &that) const
{
    bigint result = (*this).add(that);
    return result;
}

bigint &bigint::operator+=(const bigint &that)
{
    *this = (*this).add(that);
    return *this;
}

bigint &bigint::operator++()
{
    //()++ means to return it already incremented
    return *this += bigint(1);
}

bigint bigint::operator++(int)
{
    //++(int) means to return original value after incrementing the (int)
    //This is will return the original value, but increment the actual value by 1.
    bigint original = *this;
    ++*this;
    return original;
}

/** Multiplication - EXTRA CREDIT (10PTS)

//It doesn't actually work but this is how I was going about it..

bigint bigint::multiply(const bigint &that) const
{
    std::vector<vec_bin> result = number;
    std::vector<vec_bin> small;
    std::vector<vec_bin> big;
    int carry = 0;
    int temp = 0;
    bigint hold = 0;
    bigint addition = 0;

    for (int i = 0; i < small.size(); ++i)
    {
        for (int j = 0; j < big.size(); ++j)
        {
            temp = big[j] * small[i] + carry;
            if (temp > 9)
            {
                carry = floor(temp / 10);  //This didnt' work?
                result[i] = temp % 10;
            }
            else
            {
                carry = 0;
                result[i] = temp;
            }
        }
    if(i > 0){
        result.push_front(0); //This didn't work?
    }
	hold = result;
	addition += hold;

    }
    return addition;
}

bigint bigint::operator*(const bigint &that) const
{
    bigint result = (*this).multiply(that);
    return result;
}

bigint &bigint::operator*=(const bigint &that)
{
    *this = (*this).multiply(that);
    return *this;
}
**/

/** Display methods
 *
 **/

std::ostream &operator<<(std::ostream &os, const bigint &bigint1)
{
    return os << bigint1.to_string(true);
}

std::string bigint::to_string(bool commas) const
{
    // Build a string representation of the bigint.
    std::string result;
    result += (static_cast<char>(number[number.size() - 1] + '0'));
    // iterate up to 2 from the end, so triplets of digits can be separated by commas
    for (int i = number.size() - 2; i >= 0; --i)
    {
        if (i % 3 == 2 && commas)
            result += ',';
        result += (static_cast<char>(number[i] + '0'));
    }

    return result;
}
