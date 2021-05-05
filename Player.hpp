#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include <set>

namespace pandemic{
	class Player{
		protected:
			Board board;
			std::set<City> city_cards;		
			City c_location;
			std::string m_role;

		public:
			Player(Board& board,City c1,std::string role):board(board),c_location(c1),m_role(role){}
			std::string role(){
				return this->m_role;
			}
			Player& take_card(City c1);
			Player& drive(City c1);
			Player& fly_charter(City c1);
			Player& fly_shuttle(City c1);
			virtual Player& fly_direct(City c1);
			virtual Player& build();
			virtual Player& treat(City c1);
			virtual Player& discover_cure(Color color);
			
	};	
	
}


