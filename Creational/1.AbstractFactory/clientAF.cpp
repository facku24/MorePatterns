#include "clientAF.h"

Client::Client(Factory *f)
{
	m_factory = f;
}

void Client::draw()
{
	Widget *w = m_factory->create_button();
	w->draw();
	display_window_one();
	display_window_two();
}

void Client::display_window_one()
{
	Widget *w[] = {
		m_factory->create_button(),
		m_factory->create_menu()
	};
	w[0]->draw();
	w[1]->draw();
}

void Client::display_window_two()
{
	Widget *w[] = {
		m_factory->create_button(),
		m_factory->create_menu()
	};
	w[0]->draw();
	w[1]->draw();
}
