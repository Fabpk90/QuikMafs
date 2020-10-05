//
// Created by fab on 05/10/2020.
//

#include "Vector3.hpp"

Vector3::Vector3()
{
    data = {0};
}

Vector3::Vector3(float f0, float f1, float f2)
{
    data = {f0, f1, f2, 0};
}

Vector3 &Vector3::operator+(Vector3 &v)
{
    data = _mm256_add_ps(data, v.data);

    return *this;
}

Vector3::Vector3(const Vector3 &v)
{
    //TODO: free the vector, i think there's no special way
    free(data.m256_f32);
    data = v.data;
}
