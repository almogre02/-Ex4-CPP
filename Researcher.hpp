#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{
	class Researcher: public Player{
	
		public:
			Researcher(Board& board,City c1):Player(board,c1,"Researcher"){}
			Player& discover_cure(Color color);
	};	
	
}


