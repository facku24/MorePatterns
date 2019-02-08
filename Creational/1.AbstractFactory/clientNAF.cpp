#include "clientNAF.h"
#include "widgetNAF.h"
#include <iostream>

/*
 * Here's a client, which uses concrete products directly
 * It's code filled up with nasty switch statements
 * which check the product type before its use.
 */

void Client::draw()
{
#ifdef LINUX
	Widget* w = new LinuxButton;
#else // WINDOWS
	Widget* w = new WindowsButton;
#endif
	w->draw();
	display_window_one();
	display_window_two();
}

void Client::display_window_one()
{
#ifdef LINUX
	Widget* w[] = {
		new LinuxButton,
		new LinuxMenu
	};
#else // WINDOWS
	Widget* w[] = {
		new WindowsButton,
		new WindowsMenu
	};
#endif
	w[0]->draw();
	w[1]->draw();
}

void Client::display_window_two()
{
#ifdef LINUX
	Widget* w[] = {
		new LinuxButton,
		new LinuxMenu
	};
#else // WINDOWS
	Widget* w[] = {
		new WindowsButton,
		new WindowsMenu
	};
#endif
	w[0]->draw();
	w[1]->draw();
}
