#ifndef _WIDGETNOTAF_H_
#define _WIDGETNOTAF_H_
#define LINUX
/*
 * Abstract base product	
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


/*
 * Concrete product family 2.
 */
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


#endif //_WIDGETNOTAF_H_