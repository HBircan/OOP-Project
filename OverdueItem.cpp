#include "LibraryOverdueItem.h"
#include <iostream>

using namespace std;

bool LibraryOverdueItem::IsItemOverdue() const {
    return true;
}

void LibraryOverdueItem::Execute() {
    if (IsItemOverdue()) {
        cout << "Executing actions for overdue item..." << endl;
    } else {
        cout << "Item is not overdue." << endl;
    }
}

