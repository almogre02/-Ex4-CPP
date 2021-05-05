#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <set>

namespace pandemic{
	class GeneSplicer: public Player{
	
		public:
			GeneSplicer(Board& board,City c1):Player(board,c1,"GeneSplicer"){}
			Player& discover_cure(Color color);
	};	
	
}


