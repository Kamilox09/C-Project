#include "SizeComponent.hpp"
void SizeComponent::onClick(sf::Event* event,sf::RenderWindow* window) {
	if (isUpClicked(window, event)) {
		onClickUp();
		

	}
	if (isDownClicked(window, event)) {
		this->onClickDown();
		
	}
}

SizeComponent::SizeComponent(std::wstring title, int startValue, float xPos, float yPos) {
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

void SizeComponent::onClickDown()
{
	if (this->value > 2) {
		this->value--;
		this->valueInStr.setString(std::to_string(value));
	}
}
