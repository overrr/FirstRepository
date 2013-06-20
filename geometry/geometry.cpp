#include "geometry.h"


Vector2d operator+ (const Vector2d& a, const Vector2d& b)
{
    return Vector2d(a.x + b.x, a.y + b.y);
}

Vector2d operator- (const Vector2d& a, const Vector2d& b)
{
    return Vector2d(a.x - b.x, a.y - b.y);
}

Vector2d operator* (double l, const Vector2d& a)
{
    return Vector2d(l*a.x, l*a.y);
}

Vector2d operator* (const Vector2d& a, double l)
{
	return Vector2d(l*a.x, l*a.y);
}

double operator* (const Vector2d& a, const Vector2d& b)
{
    return (a.x*b.x + a.y*b.y);
}

double Vector2d::length()
{
    return sqrt((*this) * (*this));
}

Vector2d Vector2d::normalized()
{
    double l = length();
    return Vector2d(x/l, y/l);
}

std::ostream& operator<< (std::ostream& os, const Vector2d& vec)
{
    return os << vec.x << " " << vec.y;
}