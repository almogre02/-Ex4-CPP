#include "Medic.hpp"
#include "Player.hpp"
#include "Scientist.hpp"
#include "Researcher.hpp"
#include "Dispatcher.hpp"
#include "OperationsExpert.hpp"
#include "GeneSplicer.hpp"
#include "FieldDoctor.hpp"
#include "Virologist.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <stdlib.h>

using namespace std;
using namespace pandemic;

int random_desease_level=0;
TEST_CASE("operator []"){
	Board board;
	
	random_desease_level=(int)(rand()%5)+1;
	CHECK_NOTHROW(board[City::Algiers]=random_desease_level);
	CHECK_NOTHROW(board[City::Lima]=random_desease_level);
	CHECK_NOTHROW(board[City::NewYork]=random_desease_level);
	CHECK_NOTHROW(board[City::LosAngeles]=random_desease_level);
	CHECK_NOTHROW(board[City::Seoul]+=random_desease_level);
	CHECK_NOTHROW(board[City::Sydney]-=random_desease_level);
}
TEST_CASE("Players functions"){
	Board board;
	Medic m{board,City::Bogota};
	OperationsExpert o{board,City::BuenosAires};
	o.build();
	Virologist v{board,City::Miami};
	Dispatcher d{board,City::Cairo};

	/* Drive */
	CHECK_NOTHROW(m.drive(City::Miami));
	CHECK_NOTHROW(o.drive(City::SaoPaulo));
	CHECK_NOTHROW(v.drive(City::Washington));
	CHECK_NOTHROW(d.drive(City::Algiers));
	CHECK_THROWS(m.drive(City::Beijing));
	CHECK_THROWS(o.drive(City::Chicago));
	CHECK_THROWS(v.drive(City::Manila));
	CHECK_THROWS(d.drive(City::Santiago));

	/* All types of fly: fly_direct,fly_charter,fly_shuttle*/
	CHECK_THROWS(d.fly_direct(City::SaoPaulo));
	o.build();
	CHECK_NOTHROW(d.fly_direct(City::SaoPaulo));
	CHECK_THROWS(d.fly_shuttle(City::Tokyo));
	CHECK_NOTHROW(d.fly_shuttle(City::BuenosAires));


	/* Treat */
	FieldDoctor f{board,City::BuenosAires};
	board[City::BuenosAires]=4;
	CHECK_THROWS(d.treat(City::BuenosAires));
	CHECK_THROWS(d.treat(City::Taipei));
	CHECK_NOTHROW(f.treat(City::BuenosAires));
	CHECK(board[City::BuenosAires]==3);

}

	

