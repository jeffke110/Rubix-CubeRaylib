#include "RubixCube.h"


RubixCube::RubixCube() {

	Vector3 position = { -.33, -.33, .33 };

	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cubes.push_back(Cubie(position));
				position.x += .33;
			}
			position.x = -.33;
			position.z -= .33;
		}
		position.z = .33;
		position.y += .33;
	}

}
RubixCube::~RubixCube() {


}

void RubixCube::drawCubes() {
	for (auto& cubie : cubes) {
		cubie.draw();
	}

}