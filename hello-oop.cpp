#include <iostream>
using namespace std;

class HelloWorld
{
public:
    void display()
    {
        cout << "Hello, World. I am Raihan Biswas." <<endl;
    }
};

int main()
{
    HelloWorld obj; // Create object
    obj.display();  // Call member function
    return 0;
}