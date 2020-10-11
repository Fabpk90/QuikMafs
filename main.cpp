#include <iostream>

#include "Vector3.hpp"
#include "Vector3Slow.hpp"

#include <array>
#include <iostream>

int main()
{
    const int amount = 10000;

    std::array<Vector3*, amount> v0 = std::array<Vector3*, amount>();
    std::array<Vector3*, amount> v1 = std::array<Vector3*, amount>();

    for (int i = 0; i < amount; ++i)
    {
        v0[i] = new Vector3(10, 0, 0);
        v1[i] = new Vector3(5, 0, 0);
    }

    for (int i = 0; i < amount; ++i)
    {
        *v0[i] = *v0[i] * 5 + *v1[i];
    }

    std::array<Vector3Slow*, amount> v0s = std::array<Vector3Slow*, amount>();
    std::array<Vector3Slow*, amount> v1s = std::array<Vector3Slow*, amount>();

    for (int i = 0; i < amount; ++i)
    {
        v0s[i] = new Vector3Slow(10, 0, 0);
    //    std::cout << "yep" << std::endl;
        v1s[i] = new Vector3Slow(5, 0, 0);
    }

    for (int i = 0; i < amount; ++i)
    {
        *v0s[i] = *v0s[i] * 5 + *v1s[i];
    }

    std::cout << "finished computing" << std::endl;

    for (int i = 0; i < amount; ++i)
    {
        delete v0[i];
        delete v1[i];
        delete v1s[i];
        delete v0s[i];
    }

    return 0;
}
