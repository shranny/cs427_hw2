#include "game.hpp"
#include "tools.hpp"
#include <vector>


int main(int argc, char* argv[]) {
	banner();
	try{
		Game game;
		game.play();
	} catch (Fatal& e) {
		cerr << "Catching Fatal exception\n" << endl;
	} catch (...) {
		std::cerr << "Uncaught exception" << std::endl;
	}
	bye();
}
