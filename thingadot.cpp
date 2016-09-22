#include "thingadot.hpp"
ThinkADot::
ThinkADot() : states(3, {-0}) {

}
void ThinkADot::
play(int opt) {
	cout << "play~" << opt;
	if(opt == 0) {
		if(states[0][opt] == -1) {
			
		}

	} else if(opt == 1) {

	} else {

	}
}

void ThinkADot::
reset(int dir) {
	if(dir == -1) {
		//RESET TO L
		//states[0] = (3, -1);
		states[0] = {-1, -1, -1};
		states[1] = {-1, -1};
		states[2] = {-1, -1, -1};
		//states[0] = (3, -1);
		//states[1] = (2, -1);
		//states[2] = (3, -1);
	} else {
		//RESET TO R
		states[0] = {1, 1, 1};
		states[1] = {1, 1};
		states[2] = {1, 1, 1};
		//states[0] = (3, 1);
		//states[1] = (2, 1);
		//states[2] = (3, 1);
	}

	cout << "reset~" << states[0][0];
	print();
}

void ThinkADot::
print() {
	cout << "\n----TABLE----\n";
	for(int i = 0; i < 3; i++) {
		if(i != 1) {
			for(int j  = 0; j < 3; j++) {
				if(states[i][j] == 1) {
					cout << "R ";
				} else {
					cout << "L ";
				}
			}
			cout << "\n";
		} else {
			cout << " ";
			for(int j  = 0; j < 2; j++) {
				if(states[i][j] == 1) {
					cout << "R ";
				} else {
					cout << "L ";
				}
			}
			cout << "\n";
		}
	}
	// cout << "\n----TABLE----\n";
	// cout <<states[0][0] << " " << states[0][1] << " " << states[0][2] << "\n";
	// cout << "  " << states[1][0] << " " << states[1][1] << "\n";
	// cout <<states[2][0] << " " << states[2][1] << " " << states[2][2] << "\n";


}