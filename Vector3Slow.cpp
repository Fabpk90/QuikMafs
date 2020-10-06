//
// Created by fab on 05/10/2020.
//

#include "Vector3Slow.hpp"

Vector3Slow &Vector3Slow::operator+(const Vector3Slow &v)
{
    data[0] += v.data[0];
    data[1] += v.data[1];
    data[2] += v.data[2];

    return *this;
}

Vector3Slow::Vector3Slow(float f0, float f1, float f2)
{
    data = new float [3];
    data[0] = f0;
    data[1] = f1;
    data[2] = f2;
}

Vector3Slow::Vector3Slow()
{
    data = new float [3];
}

Vector3Slow::~Vector3Slow()
{
    delete [] data;
}
