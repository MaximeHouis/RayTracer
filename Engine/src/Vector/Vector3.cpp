#include <iostream>
#include "Vector/Vector3.hpp"


namespace raymath
{
    Vector3::Vector3(float x, float y, float z) : Vector({x,y,z}) {}
    Vector3::Vector3(const Vector3 &Vx) : Vector(Vx.Vector) {}
    Vector3::Vector3(const ::Vector3 &Vx) : Vector(Vx) {}
    
    Vector3 &Vector3::operator=(const Vector3 &Vx)
    {
        Vector.x = Vx.Vector.x;
        Vector.y = Vx.Vector.y;
        Vector.z = Vx.Vector.z;

        return *this;
    }

    Vector3 &Vector3::operator=(const ::Vector3 &Vx)
    {
        Vector.x = Vx.x;
        Vector.y = Vx.y;
        Vector.z = Vx.z;

        return *this;
    }

} // namespace maths

