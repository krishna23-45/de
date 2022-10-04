#include <iostream>

class Distance
{

private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }

    Distance(int i, float t)
    {
        feet = i;
        inches = t;
    }
};

int main()
{
    std::cout << "The best way to do ti \n";
}