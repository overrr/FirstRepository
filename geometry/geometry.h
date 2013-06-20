#include <iostream>
#include <math.h>
#pragma once

struct Vector2d
{ 
    double x;
    double y;
    
    Vector2d(double x, double y) : x(x), y(y) {}
    Vector2d()
    {
        x = 0;
        y = 0;
    }
    
    double length();
    Vector2d normalized();
};

typedef Vector2d Point;

Vector2d operator+ (const Vector2d& a, const Vector2d& b);

Vector2d operator- (const Vector2d& a, const Vector2d& b);

Vector2d operator* (double l, const Vector2d& a); //Умножение на число

Vector2d operator* (const Vector2d& a, double l); //Умножение на число

double operator* (const Vector2d& a, const Vector2d& b); //Скалярное произведение

std::ostream& operator<< (std::ostream& os, const Vector2d& vec);




struct Size
{
	double width;
	double height;

	Size(double width, double height) : width(width), height(height) {}
	Size()
	{
		width = 0;
		height = 0;
	}

	bool isNull()
	{
		if( (this->width == 0) && (this->height == 0) ) return 1;

		return 0;

	}
};


struct Rect
{
	/*
	- проверка на пересечение с другим прямоугольником
	- получение прямоугольника, который является пересечением с другим прямоугольником.
	если пересечения нет - возвращаем пустой рект в позиции (0, 0).
	*/

	Point origin;
	Size size;

	Rect(Point p, Size s) : origin(p), size(s) {}
	Rect()
	{
		origin.x = 0;
		origin.y = 0;
		size.height = 0;
		size.width = 0;
	}

	
	bool isNull()
	{
		if( (this->size.width == 0) && (this->size.height == 0) ) return 1;

		return 0;
	}
};

int intersection(Rect r1, Rect r2)
	{
		if ( (r1.isNull()) || (r2.isNull()) ) return -1; //Какой-то из прямоугольников вырожден в точку
		



		return 0; //Не пересекаются
	}