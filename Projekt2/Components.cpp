#include "Components.hpp"

Components::Components(float xPos, float yPos,
	std::wstring sizeTitle, int sizeStart,
	std::wstring fpsTitle, int fpsStart,
	std::wstring infectionTimeTitle, int infectionTimeStart,
	std::wstring protectionTimeTitle, int protectionTimeStart,
	std::wstring probabilityTitle, int probabilityStart)
{
	size = new SizeComponent(sizeTitle,sizeStart,xPos,yPos);
	fps = new UpAndDownComponent(fpsTitle, fpsStart, xPos, yPos + 50);
	infectionTime = new UpAndDownComponent(infectionTimeTitle, infectionTimeStart, xPos, yPos + 100);
	protectionTime = new UpAndDownComponent(protectionTimeTitle, protectionTimeStart, xPos, yPos + 150);
	probability = new UpAndDownComponent(probabilityTitle, probabilityStart, xPos, yPos + 200);
	
}

Components::~Components() {
	delete size;
	delete fps;
	delete infectionTime;
	delete protectionTime;
}
void Components::drawComponents(sf::RenderWindow *window) {
	size->drawComponent(window);
	fps->drawComponent(window);
	infectionTime->drawComponent(window);
	protectionTime->drawComponent(window);
	probability->drawComponent(window);
}
SizeComponent* Components::getSize() {
	return size;
}
UpAndDownComponent* Components::getFps() {
	return fps;
}
UpAndDownComponent* Components::getInfectionTime() {
	return infectionTime;
}
UpAndDownComponent* Components::getProtectionTime() {
	return protectionTime;
}
UpAndDownComponent* Components::getProbability() {
	return probability;
}
