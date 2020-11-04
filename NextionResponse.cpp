#include "Arduino.h"
#include "NextionResponse.h"

const char *NextionResponse::getResponse(){
	dataReceived = "";
	while(!Serial.available()){
		delay(100);
	}
	while(Serial.available()){
		char readSerial = Serial.read();
		dataReceived += readSerial;
	}
	return dataReceived.c_str();
}

const char *NextionResponse::ResponseAndMQTT(){
	dataReceived = "";
	while(Serial.available()){
		char readSerial = Serial.read();
		dataReceived += readSerial;
	}
	return dataReceived.c_str();
}

NextionResponse NexResponse;