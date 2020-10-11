//
// Created by fab on 05/10/2020.
//

#include "Vector3.hpp"

Vector3::Vector3()
{
    data = _mm_set_ps1(0.0f);
}

Vector3::Vector3(float f0, float f1, float f2)
{
    //remember, use instrisic function cause they're not cross platform
    data = _mm_set_ps(f0, f1, f2, 0);
}

Vector3 &Vector3::operator+(Vector3 &v)
{
    data = _mm_add_ps(data, v.data);

    return *this;
}

Vector3::Vector3(const Vector3 &v)
{
    //TODO: free the vector, i think there's no special way
    //free(data.m128_f32);
    data = v.data;
}

Vector3::~Vector3()
{
    //I think it's not necessary as they are registers, not RAM
}

Vector3 &Vector3::operator*(Vector3 &v)
{
    data = _mm_mul_ps(data, v.data);
    return *this;
}

Vector3 &Vector3::operator*(float v)
{
    __m128 tmp = _mm_set_ps1(v);

    data = _mm_mul_ps(data, tmp);

    return *this;
}
