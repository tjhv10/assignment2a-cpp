#include "player.hpp"
#include <string>
namespace ariel{
Player::Player()
    {
        this->name = "Achiya";
    }
    Player::Player(std::string name)
    {
        this->name = name;
    }

    Player::~Player()
    {
    }
    int Player::stacksize()
    {
        return 0;
    }
    int Player::cardesTaken()
    {
        return 0;
    }
    std::string Player::getname()
    {
        return this->name;
    }
}