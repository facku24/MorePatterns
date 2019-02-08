#include "clientAF.h"
#include "factory.h"
/*
 * Now the nasty switch statement is needed only once to
 * pick and create a proper factory. Usually that's
 * happening somewhere in program initialization code.
 */

int main()
{
	Factory *factory;
	#ifdef LINUX
	factory = new LinuxFactory;
	#else // WINDOWS
	factory = new WindowsFactory;
	#endif

	Client *c = new Client(factory);
	c->draw();
	return 0;
}