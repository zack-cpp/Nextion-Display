#ifndef Nextionresponse_h
#define Nextionresponse_h

#include "Arduino.h"

class NextionResponse{
public:
	const char *getResponse();
	const char *ResponseAndMQTT();
private:
	String dataReceived;
};
extern NextionResponse NexResponse;
#endif