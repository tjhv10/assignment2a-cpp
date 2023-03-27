#include "player.hpp"
using namespace std;
namespace ariel{
    class Game
    {
    private:
        Player p1;
        Player p2;
    public:
        Game();
        Game(Player player1, Player player2);
        ~Game();
        int playTurn();
        std::string printLastTurn();
        int playAll();
        string printWiner();
        string printLog();
        string printStats();
        Player getFirstPlayer();
        Player getSecondPlayer();
    };
}