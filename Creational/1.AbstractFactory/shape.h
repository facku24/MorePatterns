#ifndef _SHAPE_H_
#define _SHAPE_H_

#define ROBUST

class Shape
{
public:
	Shape();
	virtual void draw() = 0;
protected:
	int id_;
	static int total_;
};

class Circle : public Shape
{
public:
	void draw();
};

class Square : public Shape
{
public:
	void draw();
};

class Ellipse : public Shape
{
public:
	void draw();
};

class Rectangle : public Shape
{
public:
	void draw();
};




#endif // _SHAPE_H_