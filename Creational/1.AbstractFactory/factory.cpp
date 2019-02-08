#include "factory.h"

Widget* LinuxFactory::create_button()
{
	return new LinuxButton;
}

Widget* LinuxFactory::create_menu()
{
	return new LinuxMenu;
}

Widget* WindowsFactory::create_button()
{
	return new WindowsButton;
}

Widget* WindowsFactory::create_menu()
{
	return new WindowsMenu;
}
