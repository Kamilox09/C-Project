#include "HealthButton.hpp"

void HealthButton::loadTextures() {
	unpressed.loadFromFile("pictures/unpressedhealth.jpg");
	pressed.loadFromFile("pictures/pressedhealth.jpg");
}

void HealthButton::checkTexture(ButtonsStates *buttonsStates){
	if (buttonsStates->getHealthyState() == true) {
		buttonSprite.setTexture(pressed);
	}
	else{
		buttonSprite.setTexture(unpressed);
	}
}

HealthButton::HealthButton(float xPos, float yPos){
	this->loadTextures();
	buttonSprite.setTexture(pressed);
	buttonSprite.setPosition(xPos, yPos);
}

void HealthButton::onClick(sf::RenderWindow *window, sf::Event *event, ButtonsStates *buttonsStates) {
	if (HealthButton::isClicked(window, event)) {
		if (buttonsStates->getHealthyState() == false) {
			buttonsStates->setInfectedState(false);
			buttonsStates->setProtectedState(false);
			buttonsStates->setHealthyState(true);
			this->checkTexture(buttonsStates);
		}
	}
}