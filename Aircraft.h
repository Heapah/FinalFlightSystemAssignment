// Name: Ethan Heap
// Student Number: B00714306
// Date: 14/11/17
// Subject: OOP - Flight Control System Assignment

#pragma once
#include<iostream>
#include<string>

class Aircraft {

	// Setting the Aircraft variables

private:

	std::string flightNumber_;
	std::string airline_;
	std::string aircraftType_;
	std::string gridReference_;
	int groundSpeed_;
	int altitude_;
	int heading_;

public:

	Aircraft();
	Aircraft(std::string flightNumber, std::string airline, std::string aircraftType,
		std::string gridReference, int groundSpeed, int altitude, int heading);

	// Setters and Getters

	void SetFlightNumber(std::string flightNumber);
	std::string GetFlightNumber() const;

	void SetAirline(std::string airline);
	std::string GetAirline() const;

	void SetAircraftType(std::string aircraftType);
	std::string GetAircraftType() const;

	void SetGridReference(std::string gridReference);
	std::string GetGridReference() const;

	void SetGroundSpeed(int groundSpeed);
	int GetGroundSpeed() const;

	void SetAltitude(int altitude);
	int GetAltitude() const;

	void SetHeading(int heading);
	int GetHeading() const;

};
