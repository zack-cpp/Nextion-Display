#ifndef Nextioncommand_h
#define Nextioncommand_h

#include "Arduino.h"

class NextionCommand{
public:
    void sendCommand(const char *command);
	void setPage(const char *pageNumber);
	void resetDevice();
	void separator();
private:
    byte _separator = 0xff;
	String command;
};
extern NextionCommand NexCommand;
#endif