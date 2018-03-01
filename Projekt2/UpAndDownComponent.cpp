#include "UpAndDownComponent.hpp"

UpAndDownComponent::UpAndDownComponent(std::wstring title, int startValue, float xPos, float yPos) {
	this->upTexture.loadFromFile("pictures/up.jpg");
	this->downTexture.loadFromFile("pictures/down.jpg");
	this->font.loadFromFile("arial.ttf");
	this->up.setTexture(this->upTexture);
	this->down.setTexture(this->downTexture);
	this->title.setFont(this->font);
	this->title.setCharacterSize(18);
	this->title.setString(title);
	this->title.setFillColor(sf::Color::Black);
	this->title.setPosition(sf::Vector2f(xPos, yPos));
	this->valueInStr.setFont(this->font);
	this->valueInStr.setCharacterSize(18);
	this->valueInStr.setString(std::to_string(startValue));
	this->value = startValue;
	this->valueInStr.setFillColor(sf::Color::Black);
	this->valueInStr.setPosition(sf::Vector2f(xPos + 25, yPos + 25));
	this->down.setPosition(sf::Vector2f(xPos, yPos + 25));
	this->up.setPosition(sf::Vector2f(xPos + 50, yPos + 25));
}
UpAndDownComponent::UpAndDownComponent() {

}

void UpAndDownComponent::drawComponent(sf::RenderWindow* window) {
	window->draw(this->title);
	window->draw(this->valueInStr);
	window->draw(this->down);
	window->draw(this->up);
}


bool UpAndDownComponent::isUpClicked(sf::RenderWindow* window, sf::Event* event) {
	sf::IntRect rect(this->up.getPosition().x,up.getPosition().y,this->up.getGlobalBounds().width, this->up.getGlobalBounds().height);
	if (event->type == sf::Event::MouseButtonPressed) {
		return (rect.contains(sf::Mouse::getPosition(*window)));
	}
	return false;
}
bool UpAndDownComponent::isDownClicked(sf::RenderWindow* window, sf::Event* event) {
	sf::IntRect rect(this->down.getPosition().x, this->down.getPosition().y, this->down.getGlobalBounds().width, this->down.getGlobalBounds().height);
	if (event->type == sf::Event::MouseButtonPressed) {
		return (rect.contains(sf::Mouse::getPosition(*window)));
	}
	return false;
}
void UpAndDownComponent::onClickUp() {
	if (this->value < 100) {
		this->value++;
		this->valueInStr.setString(std::to_string(value));
	}
}
void UpAndDownComponent::onClickDown() {
	if (this->value > 1) {
		this->value--;
		this->valueInStr.setString(std::to_string(value));
	}
}
void UpAndDownComponent::onClick(sf::RenderWindow* window, sf::Event* event) {
	if (isUpClicked(window, event)) {
		onClickUp();
	}
	if (isDownClicked(window, event)) {
		onClickDown();
	}
}
int UpAndDownComponent::getValue() {
	return this->value;
}