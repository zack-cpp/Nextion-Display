#include "Arduino.h"
#include "NextionComponent.h"

NextionComponent::NextionComponent(const char *name):NextionObject(name){}

void NextionComponent::setText(const char *buffer){
	cmd = "";
	cmd += getObjName();
	cmd += ".txt=\"";
    cmd += buffer;
    cmd += "\"";
	sendCommand(cmd.c_str());
}

void NextionComponent::setVisual(bool state){
	cmd = "";
	cmd += "vis ";
	cmd += getObjName();
	cmd += ",";
	if(state == true)
		cmd += "1";
	if(state == false)
		cmd == "0";
	sendCommand(cmd.c_str());
}
void NextionComponent::setTouchable(bool state){
	cmd = "";
	cmd += "tsw ";
	cmd += getObjName();
	cmd += ",";
	if(state == true)
		cmd += "1";
	if(state == false)
		cmd += "0";
	sendCommand(cmd.c_str());
}
void NextionComponent::setPic(const char *picID){
	cmd = "";
	cmd += getObjName();
	cmd += ".pic=";
	cmd += picID;
	sendCommand(cmd.c_str());
}
const char *NextionComponent::getText(){
	dataReceived = "";
	dataOut = "";
	while(!Serial.available()){
		cmd = "";
		//cmd += "get ";
		cmd += "print ";
		cmd += getObjName();
		cmd += ".txt";
		sendCommand(cmd.c_str());
		delay(200);
	}
	
	while(Serial.available()){
		char readSerial = Serial.read();
		dataReceived += readSerial;
	}
	/*
	if(dataReceived.length() != 4){
		for(unsigned int i=1; i<dataReceived.length()-3; i++){
			dataOut += dataReceived[i];
		}
	}
	*/
	return dataReceived.c_str();
}