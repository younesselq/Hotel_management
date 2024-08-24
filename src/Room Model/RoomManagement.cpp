#include "RoomManagement.hpp"

void RoomManagement::addRoom(const Room &room)
{
    rooms.push_back(room);
}

void RoomManagement::removeRoom(int roomId)
{
    for (auto it = rooms.begin(); it != rooms.end(); ) {
        if (it->getRoomId() == roomId) {
            // Erase the element and get the next iterator
            it = rooms.erase(it); 
        } else {
            // Move to the next element
            ++it; 
        }
    }

}

std::vector<Room> RoomManagement::listOfRoomsAvailable()
{
    std::vector<Room> availableRooms;
    for(auto room:rooms){
        if(room.isRoomAvailable()){
            availableRooms.push_back(room);
        }
    }
    return availableRooms;
}
