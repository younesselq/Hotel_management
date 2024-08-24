#pragma once

#include "Room.hpp"
#include <vector>

/**
 * @class RoomManagement
 * @brief Manages a collection of Room objects.
 * 
 * This class provides functionality to manage hotel rooms, including adding rooms,
 * removing rooms by their ID, and listing available rooms.
 */
class RoomManagement {
private:
    // Vector that stores the collection of rooms
    std::vector<Room> rooms;

public:
    /**
     * @brief Adds a new room to the collection.
     * 
     * This method adds a Room object to the internal vector of rooms.
     * 
     * @param room The Room object to be added.
     */
    void addRoom(const Room& room);

    /**
     * @brief Removes a room from the collection based on its ID.
     * 
     * This method searches for a room with the specified ID and removes it
     * from the internal vector of rooms if found.
     * 
     * @param roomId The ID of the room to be removed.
     */
    void removeRoom(int roomId);

    /**
     * @brief Retrieves a list of rooms that are currently available.
     * 
     * This method filters the internal vector of rooms to return a list
     * of rooms that are currently available.
     * 
     * @return A vector of Room objects that are available.
     */
    std::vector<Room> listOfRoomsAvailable();
};
