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
		}
	}



	while (useroption != 0);

} 
