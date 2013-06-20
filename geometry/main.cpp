#include "geometry.h"

int main()
{
    Vector2d a(1, 2);
    Vector2d b(3, 4);
	Vector2d c, e, k;
    c = a + b;
	e = a*5;
	k = 5*a;
    std::cout << c << std::endl;
	std::cout << e << std::endl;
	std::cout << k << std::endl;

	Size s(0, 0);
	std::cout << (s.isNull()) << std::endl;
	Size s1(1, 1);
	std::cout << (s1.isNull()) << std::endl;

	Rect r(a, s1);
	Rect r1;
	std::cout << r.isNull() << std::endl;
	std::cout << r1.isNull() << std::endl;


    std::cin.get();   
    return 0;
}