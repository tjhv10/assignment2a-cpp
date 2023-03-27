#include "game.hpp"
#include "player.hpp"
#include <string>
#include <stdexcept>
namespace ariel{
    Game::Game()
    {
        throw std::invalid_argument("cant build a game without players.");
    }
    Game::Game(Player p1, Player p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }
    int Game::playTurn()
    {
        return 0;
    }
    std::string Game::printLastTurn()
    {
        return "";
    }
    int Game::playAll()
    {
        return 0;
    }
    string Game::printWiner()
    {
        return "";
    }
    string Game::printLog()
    {
        return "";
    }
    string Game::printStats()
    {
        return "";
    }
    Player Game::getFirstPlayer()
    {
        return this->p1;
    }
    Player Game::getSecondPlayer()
    {
        return this->p2;
    }
    Game::~Game()
    {
    }
}