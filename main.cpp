//Ethan to put header info in here
#pragma once

#include "Aircraft.h"
#include "FlightSystem.h"
#include <iostream>

using namespace std;

int main() {

	FlightSystem a1;

	std::string flightNumber;
	std::string airline;
	std::string aircraftType;
	std::string gridReference;
	int groundSpeed;
	int altitude;
	int heading;

	int useroption;

	do {

		cout << "[Flight Control System Main Menu]" << endl;
		cout << "[Please press the specified key to choose that option]" << endl;
		cout << "[1.) Add an Aircraft to the system]" << endl;
		cout << "[2.) Print a List of all Aircrafts]" << endl;

		std::cin >> useroption;
		switch (useroption) {

		case 1:
		{
			cout << "[Please enter the following details]" << endl;
			cout << "[Flight Number: ]" << endl;
			cin >> flightNumber;
			cout << "[Airline: ]" << endl;
			cin >> airline;
			cout << "[Aircraft Type: ]" << endl;
			cin >> aircraftType;
			cout << "[Grid Reference: ]" << endl;
			cin >> gridReference;
			cout << "[Ground Speed: ]" << endl;
			cin >> groundSpeed;
			cout << "[Altitude: ]" << endl;
			cin >> altitude;
			cout << "[Heading: ]" << endl;
			cin >> heading;

			a1.AddAircraft(flightNumber, airline, aircraftType,
				gridReference, groundSpeed, altitude, heading);
		}
		break;

		case 2:
		{
			cout << "[List of all Aircrafts]" << endl;
			cout << "[Flight # | Airline | Aircraft Type | Grid Reference | Ground Speed | Altitude | Heading]" << endl;
			vector<Aircraft> AircraftList = FlightSystem.ListAllAircraft();
			for (int i = 0; AircraftList.size(); i++) {
				// Printing the Flight Number
				flightNumber = AircraftList[i].GetFlightNumber();
				cout << flightNumber;

				// Printing the Airline
				airline = AircraftList[i].GetAirline();
				cout << airline;

				// Printing the Aircraft Type
				aircraftType = AircraftList[i].GetAircraftType();
				cout << aircraftType;

				// Printing the Grid Reference
				gridReference = AircraftList[i].GetGridReference();
				cout << gridReference;

				// Printing the Ground Speed
				groundSpeed = AircraftList[i].GetGroundSpeed();
				cout << groundSpeed;

				// Printing the Altitude
				altitude = AircraftList[i].GetAltitude();
				cout << altitude;

				// Printing the Heading
				heading = AircraftList[i].GetHeading();
				cout << heading << endl;
			}
			break;
		}
		case 3:
			cout << "[List of all Aircrafts above 30000 feet]" << endl;
			cout << "[Flight # | Airline | Aircraft Type | Grid Reference | Ground Speed | Altitude | Heading]" << endl;
			vector<Aircraft> AircraftListAbove30k = FlightSystem.ListAllCruisingAircraft();
			for (int i = 0; AircraftListAbove30k.size(); i++) {
				// Printing the Flight Number
				flightNumber = AircraftListAbove30k[i].GetFlightNumber();
				cout << flightNumber;

				// Printing the Airline
				airline = AircraftListAbove30k[i].GetAirline();
				cout << airline;

				// Printing the Aircraft Type
				aircraftType = AircraftListAbove30k[i].GetAircraftType();
				cout << aircraftType;

				// Printing the Grid Reference
				gridReference = AircraftListAbove30k[i].GetGridReference();
				cout << gridReference;

				// Printing the Ground Speed
				groundSpeed = AircraftListAbove30k[i].GetGroundSpeed();
				cout << groundSpeed;

				// Printing the Altitude
				altitude = AircraftListAbove30k[i].GetAltitude();
				cout << altitude;

				// Printing the Heading
				heading = AircraftListAbove30k[i].GetHeading();
				cout << heading << endl;
			}
			break;
		}


	}
	while (useroption != 0);

}
