#ifndef REGISTER_H
#define REGISTER_H
#include "Action.h"

class Register : public Action {
public:
	Register(int, Screen&, Keyboard&, LibraryDatabase&);
	virtual void Execute();
};
#endif
