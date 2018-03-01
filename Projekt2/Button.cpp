#include "Button.hpp"

bool Button::isClicked(sf::RenderWindow * window, sf::Event * event) {
	sf::IntRect temp(buttonSprite.getPosition().x, buttonSprite.getPosition().y,
		buttonSprite.getGlobalBounds().width, buttonSprite.getGlobalBounds().height);
	if (event->type == sf::Event::MouseButtonPressed) {
		return (temp.contains(sf::Mouse::getPosition(*window)));
	}
	return false;
}
void Button::drawSprite(sf::RenderWindow * window) {
	window->draw(buttonSprite);
}
