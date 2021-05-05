#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{
	class Dispatcher: public Player{
	
		public:
			Dispatcher(Board& board,City c1):Player(board,c1,"Dispatcher"){}
			Player& fly_direct(City c1);
	};	
	
}


