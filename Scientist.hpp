#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{
	class Scientist: public Player{
		int num;
	
		public:
			Scientist(Board& board,City c1,int num):Player(board,c1,"Scientist"),num(num){}
			Player& discover_cure(Color color);
	};	
	
}


