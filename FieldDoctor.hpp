#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{
	class FieldDoctor: public Player{
	
		public:
			FieldDoctor(Board& board,City c1):Player(board,c1,"FieldDoctor"){}
			Player& treat(City c1);
	};	
	
}


