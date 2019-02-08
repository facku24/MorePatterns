#ifndef _FACTORYSHAPE_H_
#define _FACTORYSHAPE_H_

#include "shape.h"

class Factory
{
public:
	virtual Shape* createCurvedInstance() = 0;
	virtual Shape* createStraightInstance() = 0;
};

class SimpleShapeFactory : public Factory
{
public:
	Shape* createCurvedInstance();
	Shape* createStraightInstance();
};

class RobustShapeFactory : public Factory
{
public:
	Shape* createCurvedInstance();
	Shape* createStraightInstance();
};



#endif // _FACTORYSHAPE_H_
