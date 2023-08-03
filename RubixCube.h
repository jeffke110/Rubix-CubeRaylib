#pragma once
#ifndef RUBIXCUBE_H
#define RUBIXCUBE_H

#include "Cubie.h"
#include <vector>


class RubixCube {


public:

	RubixCube();
	~RubixCube();

	void drawCubes();
private:
	std::vector<Cubie> cubes;

};




#endif // !RUBIXCUBE_H
