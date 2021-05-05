#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{
	class OperationsExpert: public Player{
		public:
			OperationsExpert(Board& board,City c1):Player(board,c1,"OperationsExpert"){}
			Player& build();
				
	};	
	
}


