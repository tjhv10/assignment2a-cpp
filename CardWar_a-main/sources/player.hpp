#ifndef PLAYER_H
#define PLAYER_H
#include <string>
namespace ariel
{
    class Player
    {
    private: 
    std::string name;
    public: 
        Player();
        Player(std::string name);
        int stacksize();
        int cardesTaken();
        std::string getname();
        ~Player();
    };
}
#endif