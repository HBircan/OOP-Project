#ifndef LEND_H
#define LEND_H
#include "Action.h"
#include <string>
using namespace std;

class Lend : public Action{
private:
public:
	Lend(int, Screen&, Keyboard&, LibraryDatabase&);
	virtual void Execute();

};
#endif
