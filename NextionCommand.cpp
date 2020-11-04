#include "Arduino.h"
#include "NextionCommand.h"

void NextionCommand::sendCommand(const char *command){
	separator();
	Serial.write(command);
	separator();
	Serial.println("");
}
void NextionCommand::separator(){
	for(unsigned int i=0; i<3; i++){
		Serial.write(_separator);
	}
}
void NextionCommand::setPage(const char *pageNumber){
	command = "";
	command += "page ";
	command += pageNumber;
	sendCommand(command.c_str());
}
void NextionCommand::resetDevice(){
	command = "rest";
	sendCommand(command.c_str());
}

NextionCommand NexCommand;