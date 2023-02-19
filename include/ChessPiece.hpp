#include <sstream>
#include <string>
#include "Player.hpp"
#include "Board.hpp"

class Piece : public Player
{
    public:
        void move();
        Piece(std::string PieceName, Player *p);
    
        std::string PieceName;
        std::string Allegiance;

    private:

};