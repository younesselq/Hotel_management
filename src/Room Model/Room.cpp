#include "Room.hpp"


// Constructor for the Room class
Room::Room(int id, std::string r_type, double price)
    : roomId(id), roomType(r_type), priceByNight(price), isAvailable(true) {}

// Method to book the room
void Room::book() {
    if (isAvailable) {
        isAvailable = false;
        std::cout << "Room " << roomId << " has been booked." << std::endl;
    } else {
        std::cout << "Room " << roomId << " is already booked." << std::endl;
    }
}

// Method to release the room
void Room::release() {
    if (!isAvailable) {
        isAvailable = true;
        std::cout << "Room " << roomId << " has been released." << std::endl;
    } else {
        std::cout << "Room " << roomId << " is already available." << std::endl;
    }
}

// Method to get the price of the room per night
double Room::getRoomPrice() {
    return priceByNight;
}

int Room::getRoomId()
{
    return roomId;
}

// Method to check if the room is available
bool Room::isRoomAvailable() {
    return isAvailable;
}
