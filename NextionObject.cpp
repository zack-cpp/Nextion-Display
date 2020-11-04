#include "Arduino.h"
#include "NextionObject.h"

NextionObject::NextionObject(const char *name){
	this->_name = name;
}
const char *NextionObject::getObjName(){
	return _name;
}