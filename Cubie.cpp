#include "Cubie.h"



Cubie::Cubie(Vector3 position) {
	this->position = position;
	width = .33;
	height = .33;
	length = .33;
	size.x = width; //width
	size.y = height; //height
	size.z = length; //length


}
Cubie::~Cubie() {

}

void Cubie::draw() {

	size = { width, height, 0.0 };
	Vector3 front = { position.x, position.y, position.z + length/2};
	DrawCubeV(front, size, GREEN);
	DrawCubeWiresV(front, size, BLACK);

	Vector3 back = { position.x, position.y, position.z - length/ 2 };
	DrawCubeV(back, size, BLUE);
	DrawCubeWiresV(back, size, BLACK);

	size = { width, 0.0, length };
	Vector3 bottom = { position.x, position.y - height/2, position.z};
	DrawCubeV(bottom, size, WHITE);
	DrawCubeWiresV(bottom, size, BLACK);

	Vector3 top = { position.x, position.y + height/2, position.z };
	DrawCubeV(top, size, YELLOW);
	DrawCubeWiresV(top, size, BLACK);

	size = { 0.0, height, length };
	Vector3 right = { position.x + width / 2, position.y, position.z };
	DrawCubeV(right, size, ORANGE);
	DrawCubeWiresV(right, size, BLACK);

	Vector3 left = { position.x - width/ 2, position.y, position.z };
	DrawCubeV(left, size, RED);
	DrawCubeWiresV(left, size, BLACK);


}