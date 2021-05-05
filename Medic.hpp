#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{
	class Medic: public Player{
	
		public:
			Medic(Board& board,City c1):Player(board,c1,"Medic"){}
			Player& treat(City c1);
	};	
	
}


