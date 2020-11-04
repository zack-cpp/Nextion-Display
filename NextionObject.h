#ifndef Nextionobject_h
#define Nextionobject_h

#include "Arduino.h"

class NextionObject{
public:
	NextionObject(const char *name);
	const char *getObjName();
private:
	const char *_name;
};

#endif