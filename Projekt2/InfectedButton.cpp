#include "InfectedButton.hpp"

void InfectedButton::loadTextures() {
	unpressed.loadFromFile("pictures/unpressedinfected.jpg");
	pressed.loadFromFile("pictures/pressedinfected.jpg");
}
InfectedButton::InfectedButton(float xPos, float yPos) {
	this->loadTextures();
	buttonSprite.setTexture(unpressed);
	buttonSprite.setPosition(xPos, yPos);
}
void InfectedButton::onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates) {
	if (InfectedButton::isClicked(window, event)) {
		if (buttonsStates->getInfectedState() == false) {
			buttonsStates->setInfectedState(true);
			buttonsStates->setProtectedState(false);
			buttonsStates->setHealthyState(false);
			this->checkTexture(buttonsStates);
		}
	}
}
void InfectedButton::checkTexture(ButtonsStates *buttonsStates) {
	if (buttonsStates->getInfectedState() == true) {
		buttonSprite.setTexture(pressed);
	}
	else {
		buttonSprite.setTexture(unpressed);
	}
}
