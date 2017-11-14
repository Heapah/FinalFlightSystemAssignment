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

