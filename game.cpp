#include "game.hpp"
//sss

void Game::
play() {
	ThinkADot t;
	t.reset(-1);
	string input;
	while(1) {
		cout << "Please enter a command, type H to see instructions: ";
		cin >> input;

		if(input.compare("A") == 0 || input.compare("a") == 0) {
			t.play(0);

		} else if (input.compare("B") == 0 || input.compare("b") == 0) {
			t.play(1);

		} else if (input.compare("C") == 0 || input.compare("c") == 0) {
			t.play(2);

		} else if (input.compare("L") == 0 || input.compare("l") == 0) {
			t.reset(-1);

		} else if (input.compare("R") == 0 || input.compare("r") == 0) {
			t.reset(1);

		} else if (input.compare("P") == 0 || input.compare("p") == 0) {
			t.print();

		} else if (input.compare("H") == 0 || input.compare("h") == 0) {
			cout << "INSTRUCTION\n";

		} else if (input.compare("Q") == 0 || input.compare("q") == 0) {
			cout << "Thanks for playing with us\n" << endl;
			break;

		} else {
			cout << "Input Error, please enter a valid input. Type H to see input instructions.\n";

		}
														
		
	}
}