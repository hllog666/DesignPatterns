#ifndef DESIGNPATTERNS_ENTRY_H
#define DESIGNPATTERNS_ENTRY_H

#include <string>
#include <vector>
#include "element.h"

class Entry : public Element {
public:
    virtual std::string GetName() = 0;

    virtual int GetSize() = 0;

    virtual Entry *Add(Entry *entry) {

    }

    virtual std::vector<Entry *>::iterator GetIteratorBegin() {

    }

    virtual std::vector<Entry *>::iterator GetIteratorEnd() {

    }

    std::string ToString() {
        return GetName() + " (" + std::to_string(GetSize()) + ")";
    }
};

#endif //DESIGNPATTERNS_ENTRY_H
