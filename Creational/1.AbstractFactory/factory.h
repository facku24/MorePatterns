#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "widgetAF.h"
/*
 * Abstract factory defines methods to create all
 * related products.
 */

class Factory
{
public:
	virtual Widget* create_button() = 0;
	virtual Widget* create_menu() = 0;
};

/*
 * Each concrete factory corresponds to one product 
 * family. It creates all possible products of
 * one kind.
 */

class LinuxFactory : public Factory
{
public:
	Widget* create_button();
	Widget* create_menu();
};

/*
 * Concrete factory creates products, but
 * returns them as abstract.
 */

class WindowsFactory : public Factory
{
public:
	Widget* create_button();
	Widget* create_menu();
};

#endif // _FACTORY_H_