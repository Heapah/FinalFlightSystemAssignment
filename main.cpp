//Ethan to put header info in here
#pragma once

#include "Aircraft.h"
#include "FlightSystem.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {


	//Test the aircraft class

	// Aircraft a1{};

	//Setters and Getters SUCCESS

	/* a1.SetFlightNumber("57856748");
	std::string temp = a1.GetFlightNumber();

	a1.SetAirline("Easy Jet");
	std::string temp1 = a1.GetAirline();

	a1.SetAircraftType("AA305");
	std::string temp2 = a1.GetAircraftType();

	a1.SetGridReference("A2");
	std::string temp3 = a1.GetGridReference();

	a1.SetGroundSpeed(400);
	int temp4 = a1.GetGroundSpeed();

	a1.SetAltitude(35000);
	int temp5 = a1.GetAltitude();

	a1.SetHeading(180);
	int temp6 = a1.GetHeading();

	//*/


	//Ethan to do 

	//Aircraft a2{} //test non default aircraft constructor SUCCESS

	/*Aircraft a2{};

	a2.SetFlightNumber("4568383");
	std::string temp7 = a2.GetFlightNumber();

	a2.SetAirline("Ryan Air");
	std::string temp8 = a2.GetAirline();

	a2.SetAircraftType("BB435");
	std::string temp9 = a2.GetAircraftType();

	a2.SetGridReference("A7");
	std::string temp10 = a2.GetGridReference();

	a2.SetGroundSpeed(350);
	int temp11 = a2.GetGroundSpeed();

	a2.SetAltitude(20000);
	int temp12 = a2.GetAltitude();

	a2.SetHeading(343);
	int temp13 = a2.GetHeading();

	*/

	FlightSystem a1;
	vector<Aircraft> aircraftList_;
	vector<Aircraft> AircraftListAbove30k;



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
		cout << "[3.) Print a List of all Aircrafts at or above 30000 feet]" << endl;
		cout << "[4.) Remove an Aircraft from the system]" << endl;

		std::cin >> useroption;
		switch (useroption) {

		case 1:
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
			break;
		case 2:
			cout << "[List of all Aircrafts]" << endl;
			cout << "[Flight # | Airline | Aircraft Type | Grid Reference | Ground Speed | Altitude | Heading]" << endl;
			
			aircraftList_ =  a1.ListAllAircraft() ;

			for (int i = 0; aircraftList_.size(); i++) {
				// Printing the Flight Number
				flightNumber = aircraftList_[i].GetFlightNumber();
				cout << flightNumber;

				// Printing the Airline
				airline = aircraftList_[i].GetAirline();
				cout << airline;

				// Printing the Aircraft Type
				aircraftType = aircraftList_[i].GetAircraftType();
				cout << aircraftType;

				// Printing the Grid Reference
				gridReference = aircraftList_[i].GetGridReference();
				cout << gridReference;

				// Printing the Ground Speed
				groundSpeed = aircraftList_[i].GetGroundSpeed();
				cout << groundSpeed;

				// Printing the Altitude
				altitude = aircraftList_[i].GetAltitude();
				cout << altitude;

				// Printing the Heading
				heading = aircraftList_[i].GetHeading();
				cout << heading << endl;
			}


			//}
			break;
		case 3:
			cout << "[List of all Aircrafts above 30000 feet]" << endl;
			cout << "[Flight # | Airline | Aircraft Type | Grid Reference | Ground Speed | Altitude | Heading]" << endl;

			AircraftListAbove30k = a1.ListAllCruisingAircraft();
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
		
		case 4:
			cout << "[Please enter the Flight Number of the Aircraft you wish to remove]" << endl;
			cin >> flightNumber;
			a1.RemoveAircraft(flightNumber);

		}
	} while (useroption != 0);
}
