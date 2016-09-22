#include "tools.hpp"
#include <vector>

class ThinkADot {
private:
	vector<vector<int>> states;

	//states[0] = (3, -1);
	//states[1] = (2, -1);
	//states[2] = (3, -1);
	

public:
	ThinkADot();
	//ThinkADot() = default;

	void play(int opt);
	void reset(int dir);
	void print();

};