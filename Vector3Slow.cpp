//
// Created by fab on 05/10/2020.
//

#include "Vector3Slow.hpp"

#include <iostream>

Vector3Slow &Vector3Slow::operator+(const Vector3Slow &v)
{
    //std::cout << " + " << std::endl;
    data[0] += v.data[0];
    data[1] += v.data[1];
    data[2] += v.data[2];

    return *this;
}

Vector3Slow::Vector3Slow(float f0, float f1, float f2)
{
   // std::cout << "ctor complex" << std::endl;
    data = new float [3];
    data[0] = f0;
    data[1] = f1;
    data[2] = f2;
}

Vector3Slow::~Vector3Slow()
{
   // std::cout << "destroy" << " " << data[0] << std::endl;
    delete [] data;
}

Vector3Slow::Vector3Slow()
{
    //std::cout << "ctor simple" << std::endl;
    data = new float [3];
    data[0] = 1;
}


Vector3Slow::Vector3Slow(const Vector3Slow &c)
{
   // std::cout << "copy" << std::endl;
    data[0] = c.data[0];
    data[1] = c.data[1];
    data[2] = c.data[2];
    data[3] = c.data[3];
}

Vector3Slow &Vector3Slow::operator*(const Vector3Slow &v)
{
    data[0] *= v.data[0];
    data[1] *= v.data[1];
    data[2] *= v.data[2];

    return *this;
}

Vector3Slow &Vector3Slow::operator*(float f)
{
    data[0] *= f;
    data[1] *= f;
    data[2] *= f;

    return *this;
}
