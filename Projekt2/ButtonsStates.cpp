#include "ButtonsStates.hpp"

bool ButtonsStates::getHealthyState() {
	return this->healthyState;
}

bool ButtonsStates::getInfectedState()
{
	return this->infectedState;
}

bool ButtonsStates::getProtectedState()
{
	return this->protectedState;
}

void ButtonsStates::setHealthyState(bool healthyState)
{
	this->healthyState = healthyState;
}

void ButtonsStates::setInfectedState(bool infectedState)
{
	this->infectedState = infectedState;
}

void ButtonsStates::setProtectedState(bool protectedState)
{
	this->protectedState = protectedState;
}

ButtonsStates::ButtonsStates() 
	:healthyState(true),
	infectedState(false),
	protectedState(false) {}
