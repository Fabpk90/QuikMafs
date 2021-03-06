//
// Created by fab on 05/10/2020.
//

#ifndef QUIKMAFS_VECTOR3_HPP
#define QUIKMAFS_VECTOR3_HPP

#include <immintrin.h>

class Vector3
{
private:
    union {
        __m128 data;
        float fdata[4];
    };


public:
    Vector3();
    Vector3(float f0, float f1, float f2);

    Vector3(const Vector3&v );

    ~Vector3();

    Vector3& operator+(Vector3& v);
    Vector3& operator*(Vector3& v);
    Vector3& operator*(float f);
};


#endif //QUIKMAFS_VECTOR3_HPP
