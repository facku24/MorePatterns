#include "shape.h"
#include <iostream>

int Shape::total_ = 0;

Shape::Shape()
{
	id_ = total_++;
}

void Circle::draw()
{
	std::cout << "circle " << id_ << ": draw" << std::endl;
}

void Square::draw()
{
	std::cout << "square " << id_ << ": draw" << std::endl;
}

void Ellipse::draw()
{
	std::cout << "ellipse " << id_ << ": draw" << std::endl;
}

void Rectangle::draw()
{
	std::cout << "rectangle " << id_ << ": draw" << std::endl;
}

