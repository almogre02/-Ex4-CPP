#include "Board.hpp"
#include <iostream>
using namespace pandemic;
using namespace std;

ostream& pandemic::operator<<(ostream& os, const Board& board){
	return os;
}
int& Board::operator[](City c) {
    return desease_level[c];
}
bool Board::is_clean(){
	return false;
}
bool Board::is_connected(City c1,City c2){
	return false;
}

bool Board::is_research_city(City c1){
	return false;
}

bool Board::is_discover_cure(City c1){
	return false;
}
void Board::remove_cures(){}
			
		

