#include "factoryShape.h"

Shape* SimpleShapeFactory::createCurvedInstance()
{
	return new Circle;
}

Shape* SimpleShapeFactory::createStraightInstance()
{
	return new Square;
}

Shape* RobustShapeFactory::createCurvedInstance()
{
	return new Ellipse;
}

Shape* RobustShapeFactory::createStraightInstance()
{
	return new Rectangle;
}
