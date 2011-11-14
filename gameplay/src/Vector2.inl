/** 
 * Vector2.inl
 */

#include "Vector2.h"

namespace gameplay
{

inline Vector2 Vector2::operator+(const Vector2& v)
{
    Vector2 result(*this);
    result.add(v);
    return result;
}

inline Vector2& Vector2::operator+=(const Vector2& v)
{
    add(v);
    return *this;
}

inline Vector2 Vector2::operator-(const Vector2& v)
{
    Vector2 result(*this);
    result.subtract(v);
    return result;
}

inline Vector2& Vector2::operator-=(const Vector2& v)
{
    subtract(v);
    return *this;
}

inline Vector2 Vector2::operator-()
{
    Vector2 result(*this);
    result.negate();
    return result;
}

inline Vector2 Vector2::operator*(float x)
{
    Vector2 result(*this);
    result.scale(x);
    return result;
}

inline Vector2& Vector2::operator*=(float x)
{
    scale(x);
    return *this;
}

}
