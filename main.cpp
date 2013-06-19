//сложение, вычитание, умножение на число, нормализация, длина, поворот на угол

#include <iostream>
//using namespace std;

struct MyVector
{ 
    double x;
    double y;
    
    MyVector(double x, double y) : x(x), y(y) {}
    //MyVector() : MyVector(0.0, 0.0) {}
};

MyVector sum(const MyVector& a, const MyVector& b)
{
    return MyVector(a.x + b.x, a.y + b.y);
}

int add(const int& a, const int& b)
{
    return a + b;
}



void printVector(const MyVector& vec)
{
    std::cout << vec.x << " " << vec.y << std::endl;
}

void main()
{
    int ii = 1;
    int &i = ii;
	add(1, 2);
    MyVector a(1, 2);
    MyVector b(3, 4);
    MyVector c;
    c = sum(a, b); //
    printVector(c);
    std::cin.get();
    return;
}