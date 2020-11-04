#ifndef Nextioncomponent_h
#define Nextioncomponent_h
#include "Arduino.h"
#include "NextionObject.h"
#include "NextionCommand.h"

class NextionComponent: public NextionObject, public NextionCommand{
public:
	NextionComponent(const char *name);
	void setText(const char *buffer);
	void setVisual(bool state);
	void setTouchable(bool state);
	void setPic(const char *picID);
	const char *getText();
private:
	String cmd;
	String dataReceived;
	String dataOut;
};

#endif