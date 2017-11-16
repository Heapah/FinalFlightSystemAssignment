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
	std::string gridReference, int groundSpeed, int altitude, int heading) {

	// Adds a new Aircraft into the system

	Aircraft a1(flightNumber, airline, aircraftType, gridReference, groundSpeed, altitude, heading);

	bool DoesFlightExist = false;
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {
			DoesFlightExist = true;
		}
	}

	// If 'DoesFlightExist' equal to false, then a new Aircraft is added to the system

	if (DoesFlightExist == false) {

		aircraftList_.push_back(Aircraft(a1));
	}

	// If 'DoesFlightExist equal to true, then an error message is printed to the user

	if (DoesFlightExist == true) {
		std::cout << "Flight " << flightNumber << " already in the system" << std::endl;
	}

	// Collision warning method
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {
			if (aircraftList_.at(i).GetGridReference() == gridReference) {
				if (altitude + 3000 >= aircraftList_.at(i).GetAltitude() && altitude <= aircraftList_.at(i).GetAltitude()
					|| altitude - 3000 <= aircraftList_.at(i).GetAltitude() && altitude >= aircraftList_.at(i).GetAltitude()) {
						{
							std::cout << "Warning - Aircraft collision possible between " << flightNumber << " and " << aircraftList_.at(i).GetFlightNumber() << std::endl;

						}
				}
			}
		}
	}
}
		
	




// Method for listing all Aircraft

std::vector<Aircraft> FlightSystem::ListAllAircraft() {
	return aircraftList_;
}

// Method for listing all Cruising Aircraft

std::vector<Aircraft> FlightSystem::ListAllCruisingAircraft() {
	std::vector<Aircraft> AircraftListAbove30k;

	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_[i].GetAltitude() >= 30000) {
			AircraftListAbove30k.push_back(aircraftList_[i]);
		}
		return AircraftListAbove30k;
	}
}

// Method for removing an Aircraft

void FlightSystem::RemoveAircraft(std::string flightNumber) {

	bool DoesFlightExist = false;
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {
			DoesFlightExist = true;
		}
	}

	// If 'DoesFlightExist' equal to true, then the Aircraft specific to the Flight Number is removed from the system

	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (DoesFlightExist = true)
			aircraftList_.erase(aircraftList_.begin() + i);
	}

	// If 'DoesFlightExist equal to false, then an error message is printed to the user

	if (DoesFlightExist == false) {
		std::cout << "Flight " << flightNumber << " already in the system" << std::endl;
	}
}

// Method for changing the Heading

void FlightSystem::ChangeHeading(std::string flightNumber, int heading) {
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {

		// If the Flight Number entered by the user matches the specified flightNumber, the user will get a prompt to change the Heading

		if (aircraftList_[i].GetFlightNumber() == flightNumber) {
			aircraftList_.at(i).SetHeading(heading);
			std::cout << "Heading of flight " << aircraftList_.at(i).GetFlightNumber() << " changed to " << heading << std::endl;
		}

		// If the Flight Number entered by the user does not match the specified flightNumber, the user will get get an error message

		if (aircraftList_[i].GetFlightNumber() != flightNumber) {
			std::cout << "Flight " << flightNumber << " already in the system" << std::endl;
		}
	}

}

// Method for returning the Heading value

int FlightSystem::GetHeading(std::string flightNumber) {
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {

		// If the Flight Number entered by the user matches the specified flightNumber, the user will get a prompt to change the Heading

		if (aircraftList_[i].GetFlightNumber() == flightNumber) {

			return aircraftList_.at(i).GetHeading();
		}

		// If the Flight Number entered by the user does not match the specified flightNumber, the user will get get an error message

		if (aircraftList_[i].GetFlightNumber() != flightNumber) {
			std::cout << "Flight " << flightNumber << " already in the system" << std::endl;
		}
	}
}

// Method for changing the Altitude

void FlightSystem::ChangeAltitude(std::string flightNumber, int altitude) {
	
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {

		// If the Flight Number entered by the user matches the specified flightNumber, the user will get a prompt to change the Altitude

		if (aircraftList_[i].GetFlightNumber() == flightNumber) {
			aircraftList_.at(i).SetAltitude(altitude);
			std::cout << "Altitude of flight " << aircraftList_.at(i).GetFlightNumber() << " changed to " << altitude << std::endl;
		}

		// If the Flight Number entered by the user does not match the specified flightNumber, the user will get get an error message

		if (aircraftList_[i].GetFlightNumber() != flightNumber) {
			std::cout << "Flight " << flightNumber << " already in the system" << std::endl;
		}
		
		// When changing the altitude, check for collion possibility
		
		for (unsigned int j = 0; j < aircraftList_.size(); j++)
		{
			// Check if both aircraft i and j have the same flight number
			if (aircraftList_.at(i).GetFlightNumber().compare(aircraftList_.at(j).GetFlightNumber()) != 0) {
				// Check if both aircraft i and j are within the same grid reference
				if (aircraftList_.at(i).GetGridReference() == aircraftList_.at(j).GetGridReference()) {
					// Check if both aircraft i and j are within 3000 feet altitude of each other
					if (aircraftList_.at(i).GetAltitude() + 3000 >= aircraftList_.at(j).GetAltitude() && aircraftList_.at(i).GetAltitude() <= aircraftList_.at(j).GetAltitude()
						|| aircraftList_.at(i).GetAltitude() - 3000 <= aircraftList_.at(j).GetAltitude() && aircraftList_.at(i).GetAltitude() >= aircraftList_.at(j).GetAltitude()) {
							{
								std::cout << "Warning - Aircraft collision possible between " << aircraftList_.at(i).GetFlightNumber() << " and " << aircraftList_.at(j).GetFlightNumber() << std::endl;
							}
					}
				}
			}
		}
	}

}

// Method for returning the Altitude value

int FlightSystem::GetAltitude(std::string flightNumber) {
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {

		// If the Flight Number entered by the user matches the specified flightNumber, the user will get a prompt to change the Heading

		if (aircraftList_[i].GetFlightNumber() == flightNumber) {

			return aircraftList_.at(i).GetAltitude();
		}

		// If the Flight Number entered by the user does not match the specified flightNumber, the user will get get an error message

		if (aircraftList_[i].GetFlightNumber() != flightNumber) {
			std::cout << "Flight " << flightNumber << " already in the system" << std::endl;
		}
	}
}

// Returning the number of Aircraft in the sector

int FlightSystem::numAircraftInSector() {

	int AircraftNumber = aircraftList_.size();

	return AircraftNumber;

}
