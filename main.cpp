#include <iostream>

#include "Vector3.hpp"
#include "Vector3Slow.hpp"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    int amount = 100000;

    Vector3* v0 = new Vector3[amount];
    Vector3* v1 = new Vector3[amount];

    for (int i = 0; i < amount; ++i)
    {
        v0[i] = Vector3(10, 0, 0);
        v1[i] = Vector3(5, 0, 0);
    }

    for (int i = 0; i < amount; ++i)
    {
        v0[i] = v0[i] + v1[i];
    }

    Vector3Slow* v0s = new Vector3Slow[amount];
    Vector3Slow* v1s = new Vector3Slow[amount];

    for (int i = 0; i < amount; ++i)
    {
        v0s[i] = Vector3Slow(10, 0, 0);
        v1s[i] = Vector3Slow(5, 0, 0);
    }

    for (int i = 0; i < amount; ++i)
    {
        v0s[i] = v0s[i] + v1s[i];
    }

    return 0;
}
