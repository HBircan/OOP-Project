#ifndef RETURN_h
#define RETURN_h
#include "Action.h"

class Return : public Action {
public:
	Return(int, Screen&, Keyboard&, LibraryDatabase&);
	virtual void Execute();
};
#endif
