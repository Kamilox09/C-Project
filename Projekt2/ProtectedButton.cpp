#include "ProtectedButton.hpp"

void ProtectedButton::loadTextures() {
	unpressed.loadFromFile("pictures/unpressedprotected.jpg");
	pressed.loadFromFile("pictures/pressedprotected.jpg");
}
ProtectedButton::ProtectedButton(float xPos, float yPos) {
	this->loadTextures();
	buttonSprite.setTexture(unpressed);
	buttonSprite.setPosition(xPos, yPos);
}
void ProtectedButton::onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates) {
	if (ProtectedButton::isClicked(window, event)) {
		if (buttonsStates->getProtectedState() == false) {
			buttonsStates->setInfectedState(false);
			buttonsStates->setProtectedState(true);
			buttonsStates->setHealthyState(false);
			this->checkTexture(buttonsStates);
		}
	}
}
void ProtectedButton::checkTexture(ButtonsStates *buttonsStates) {
	if (buttonsStates->getProtectedState() == true) {
		buttonSprite.setTexture(pressed);
	}
	else {
		buttonSprite.setTexture(unpressed);
	}
}