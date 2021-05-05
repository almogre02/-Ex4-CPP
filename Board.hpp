#pragma once
#include "Color.hpp"
#include "City.hpp"
#include <map>


namespace pandemic{
	class Board{

		private:
			std::map<City,int> desease_level;
			std::map<Color,int> cities_colors;
			static std::map<City,std::map<Color,int>> cities_map;

		public:
			Board(){}
			bool is_clean();
			bool is_connected(City c1,City c2);
			bool is_research_city(City c1);
			bool is_discover_cure(City c1);
			void remove_cures();
			int& operator[](City c);
			friend std::ostream& operator<<(std::ostream& os, const Board& board);
	};
}