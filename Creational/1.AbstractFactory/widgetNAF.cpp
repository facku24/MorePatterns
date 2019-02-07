#include "widgetNAF.h"
#include <iostream>

/*
 * Concrete product family 1.
 */
void LinuxButton::draw()
{
	std::cout << "LinuxButton" << std::endl;
}

void LinuxMenu::draw()
{
	std::cout << "LinuxMenu" << std::endl;
}

/*
 * Concrete product family 2.
 */
void WindowsButton::draw()
{
	std::cout << "WindowsButton" << std::endl;
}

void WindowsMenu::draw()
{
	std::cout << "WindowsMenu" << std::endl;
}

