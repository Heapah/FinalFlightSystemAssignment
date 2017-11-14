// Name: Ethan Heap
// Student Number: B00714306
// Date: 14/11/17
// Subject: OOP - Flight Control System Assignment

#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Aircraft.h"

class FlightSystem {

	// Setting the FlightSystem variables

private:

	std::vector<Aircraft> aircraftList_;

public:
	FlightSystem();

	void AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType,
		std::string gridReference, int groundSpeed, int altitude, int heading);
	std::vector<Aircraft> ListAllAircraft();
	std::vector<Aircraft> ListAllCruisingAircraft();
	void RemoveAircraft(std::string flightNumber);
	void ChangeAltitude(std::string flightNumber, int altitude);
	int GetAltitude(std::string flightNumber);
	void ChangeHeading(std::string flightNumber, int heading);
	int GetHeading(std::string flightNumber);
	int numAircraftInSector();

};
