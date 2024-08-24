#pragma once

#include <iostream>

/**
 * @file Room.hpp
 * @brief Defines the Room class, which represents a hotel room with attributes such as room ID,
 * room type, price per night, and availability status. This class provides methods to book,
 * release, and retrieve information about the room.
 */
class Room {
private:
    // Unique identifier for the room
    int roomId;

    // Type of the room (e.g., single, double, suite)
    std::string roomType;

    // Price per night for the room
    double priceByNight;

    // Availability status of the room
    bool isAvailable;

public:
    /**
     * @brief Constructs a Room object with the given parameters.
     * 
     * @param id The unique ID of the room.
     * @param r_type The type of the room.
     * @param price The price per night for the room.
     */
    Room(int id, std::string r_type, double price);

    /**
     * @brief Marks the room as booked.
     * 
     * If the room is currently available, it will be marked as booked.
     * Otherwise, no action is taken.
     */
    void book();

    /**
     * @brief Releases the room, marking it as available.
     * 
     * If the room is currently booked, it will be marked as available.
     * Otherwise, no action is taken.
     */
    void release();

    /**
     * @brief Retrieves the price of the room per night.
     * 
     * @return The price per night for the room.
     */
    double getRoomPrice();

    /**
     * @brief Checks if the room is currently available.
     * 
     * @return True if the room is available, false otherwise.
     */
    bool isRoomAvailable();
};
