#include <iostream>
using namespace std;
class integer
{
private:
    int number;

public:
    integer() {}
    integer(int num) { number = num; }
    void printnum() { cout << number << endl; }
    integer &operator++() // preincrement
    {
        ++number;
        return *this; // Return the current object by reference
    }
    integer operator++(int) // int is used to differenciate between pre and pos;
    {
        integer temp;
        temp.number = number;
        number++;
        return (temp);
    }
};

int main()
{
    integer a(1), b;
    ++a;
    a.printnum();
    b = a++;
    b.printnum();
    a.printnum();
    return 0;
}