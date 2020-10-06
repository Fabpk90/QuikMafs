//
// Created by fab on 05/10/2020.
//

#ifndef QUIKMAFS_VECTOR3SLOW_HPP
#define QUIKMAFS_VECTOR3SLOW_HPP


class Vector3Slow
{
private:
    float* data;

public:
    Vector3Slow();
    Vector3Slow(float f0, float f1, float f2);

    ~Vector3Slow();

    Vector3Slow& operator+(const Vector3Slow& v);
};


#endif //QUIKMAFS_VECTOR3SLOW_HPP
