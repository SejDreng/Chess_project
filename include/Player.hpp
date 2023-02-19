#include <sstream>
#include <string>
#include "Chessgame.hpp"

class Player : public Chesgame 
{
    private:
        std::string colour;
        
    public:
        virtual void MovePiece(char x, int y);
        Player(std::string colour);
        


};