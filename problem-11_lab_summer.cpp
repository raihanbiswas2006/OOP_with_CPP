// Problem 11

#include <iostream>
using namespace std;

class Series
{
public:
    void printEvenOdd()
    {
        cout << "Even Series: ";
        for (int i = 2; i <= 100; i += 2)
            cout << i << " ";

        cout << "\nOdd Series:  ";
        for (int i = 1; i <= 100; i += 2)
            cout << i << " ";
    }
};

int main()
{
    Series a;
    a.printEvenOdd();
}