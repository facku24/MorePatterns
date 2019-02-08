#ifndef _WIDGETAF_H_
#define _WIDGETAF_H_

#define LINUX

/*
 * Abstract base product. It should define an interface
 * which will be common to all products. Clients will
 * work with products though this interface, so it
 * should be sufficient to use all products
 */

class Widget
{
public:
	virtual void draw() = 0;
};

/*
 * Concrete product family 1.
 */
class LinuxButton : public Widget
{
public:
	void draw();
};

class LinuxMenu : public Widget
{
public:
	void draw();
};


class WindowsButton : public Widget
{
public:
	void draw();
};

class WindowsMenu : public Widget
{
public:
	void draw();
};


#endif //_WIDGETAF_H_