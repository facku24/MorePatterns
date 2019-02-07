#include "clietNAF.h"
#include "widgetNAF"
#include <iostream>

/**
 * Here's a client, which uses concrete products
 */
void Client::draw()
{
#ifdef
	Widget* w = new LinuxButton;
#else
	Widget* w = new WindowsButton;
#endif
	w->draw();
	display_window_one();
	display_window_two();
}

void Client::display_window_one()
{
#ifdef
	Widget* w[] = {
		new LinuxButton,
		new LinuxMenu
	};
#else
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
#ifdef
#else
#endif
}
