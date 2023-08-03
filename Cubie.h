#pragma once
#ifndef CUBIE_H
#define CUBIE_H


#include "raylib.h"

class Cubie {


public:
	Cubie(Vector3 position);
	~Cubie();
	void draw();

private:
	Vector3 position;
	Vector3  size;
	float width;
	float height;
	float length;
};






#endif // !CUBIE_H
