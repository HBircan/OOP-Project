#ifndef OVERDUEITEM_H
#define OVERDUEITEM_H
#include "Action.h"

class OverdueItem : public Action {
public:
	OverdueItem(int, Screen&, Keyboard&, LibraryDatabase&);
	virtual void Execute();
};
#endif
