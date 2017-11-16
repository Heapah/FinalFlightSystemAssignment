// Name: Ethan Heap
// Student Number: B00714306
// Date: 14/11/17
// Subject: OOP - Flight Control System Assignment

#include "FlightSystem.h"
#include "Aircraft.h"

FlightSystem::FlightSystem()
{
}

void FlightSystem::AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType,
	std::string gridReference, int groundSpeed, int altitude, int heading);

// Adds a new Aircraft into the system

Aircraft a1(flightNumber, airline, aircraftType, gridReference, groundSpeed, altitude, heading);

bool DoesFlightExist = false;
for (int i = 0; i < AircraftList.size(); i++) {
	if (AircraftList.at(i).GetFlightNumber() == flightNumber) {
		DoesFlightExist = true;
	}
}

// If 'DoesFlightExist' equal to false, then a new Aircraft is added to the system

if (DoesFlightExist == false) {
	AircraftList.push_back(Aircraft(a1));
}

// If 'DoesFlightExist equal to true, then an error message is printed to the user

if (DoesFlightExist == true) {
	std::cout << "Flight " << flightNumber << " already in the system" << endl;
}

// Method for listing all Aircraft

std::vector<Aircraft> FlightSystem::ListAllAircraft() {
	return AircraftList;
}

// Method for listing all Cruising Aircraft

std::vector<Aircraft> FlightSystem::ListAllCruisingAircraft() {
	std::vector<Aircraft> AircraftListAbove30k
}
for (int i = 0; i < AircraftList.size(); i++) {
	if (AircraftList[i].GetAltitude() >= 30000) {
		AircraftListAbove30k.push_back(AircaftList[i]);
	}
	return AircraftListAbove30k;
}
