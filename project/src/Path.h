#ifndef SRC_PATH_H_
#define SRC_PATH_H_

#include <iostream>
#include <utility>
#include <string>
#include "No.h"
#include "Veiculo.h"
#include <limits>
#include <cstddef>
#include <vector>

using namespace std;

class Path {
private:
	vector<No*> path;
	float dist;
	No rescue;

public:
	Path(){};
	Path(float dist);
	Path(vector<No*> path, float dist);
	vector<No*> get_path();
	float get_dist();
	void print();
	void update_vehicle_path( Veiculo *vehicle);
	bool operator<(Path &rhs);

	void append(Path rhs);
	vector<No> get_nodes();

	No get_rescue();
	void set_rescue(No rescue);

};

#endif /* SRC_PATH_H_ */
