#include "ColorCreator.hpp"

std::vector<sf::Color> ColorCreator::createColorVect(sf::Color from, sf::Color to, int amount) {
	int diffR, diffG, diffB;
	int targetR, targetG, targetB;
	std::vector<sf::Color> colorVect;

	if (from.r == to.r) {
		diffR = 0;
		targetR = from.r;
	}
	else if (from.r > to.r) {
		diffR = from.r - to.r;
	}
	else if (from.r < to.r) {
		diffR = to.r - from.r;
	}
	if (from.g == to.g) {
		diffG = 0;
		targetG = from.g;
	}
	else if (from.g > to.g) {
		diffG = from.g - to.g;
	}
	else if (from.g < to.g) {
		diffG = to.g - from.g;
	}
	if (from.b == to.b) {
		diffB = 0;
		targetB = from.b;
	}
	else if (from.b > to.b) {
		diffB = from.b - to.b;
	}
	else if (from.b < to.b) {
		diffB = to.b - from.b;
	}

	for (int i = 0; i < amount; i++) {
		if (from.r >= to.r) {
			targetR = from.r - ((int)diffR / amount) * i;
		}
		else {
			targetR = from.r + ((int)diffR / amount) * i;
		}
		if (from.g >= to.g) {
			targetG = from.g - ((int)diffG / amount) * i;
		}
		else {
			targetG = from.g + ((int)diffG / amount) * i;
		}
		if (from.b >= to.b) {
			targetB = from.b - ((int)diffB / amount) * i;
		}
		else {
			targetB = from.b + ((int)diffB / amount) * i;
		}
		colorVect.push_back(sf::Color(targetR, targetG, targetB));

	}
	
	return colorVect;
}
