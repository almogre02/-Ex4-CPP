#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{
	class Virologist: public Player{
	
		public:
			Virologist(Board& board,City c1):Player(board,c1,"Virologist"){}
			Player& treat(City c1);
	};	
	
}


