// Name: Ethan Heap
// Student Number: B00714306
// Date: 14/11/17
// Subject: OOP - Flight Control System Assignment


#include"Aircraft.h"

Aircraft::Aircraft()

{
	//Remove cout messages after testing only have the messages that the assignment states
	std::cout << "Aircraft constructor called" << std::endl;

}

Aircraft::Aircraft(std::string flightNumber, std::string airline, std::string aircraftType,
	std::string gridReference, int groundSpeed, int altitude, int heading)

{
	flightNumber_ = flightNumber;
	airline_ = airline;
	aircraftType_ = aircraftType;
	gridReference_ = gridReference;
	groundSpeed_ = groundSpeed;
	altitude_ = altitude;
	heading_ = heading;
}


void Aircraft::SetFlightNumber(std::string flightNumber) {
   flightNumber_ = flightNumber;
}
std::string Aircraft::GetFlightNumber() const {
	return flightNumber_;
}

void Aircraft::SetAirline(std::string airline) {
	airline_ = airline;
}
std::string Aircraft::GetAirline() const {
	return airline_;
}

void Aircraft::SetAircraftType(std::string aircraftType) {
	aircraftType_ = aircraftType;
}
std::string Aircraft::GetAircraftType() const {
	return aircraftType_;
}

void Aircraft::SetGridReference(std::string gridReference) {
	gridReference_ = gridReference;
}
std::string Aircraft::GetGridReference() const {
	return gridReference_;
}

void Aircraft::SetGroundSpeed(int groundSpeed) {
	groundSpeed_ = groundSpeed;
}
int Aircraft::GetGroundSpeed() const {
	return groundSpeed_;
}

void Aircraft::SetAltitude(int altitude) {
	altitude_ = altitude;
}
int Aircraft::GetAltitude() const {
	return altitude_;
}

void Aircraft::SetHeading(int heading) {
	heading_ = heading;
}
int Aircraft::GetHeading() const {
	return heading_;
}

