#pragma once
#include "SFML/Graphics.hpp"
class Entity
{
public:
	sf::Clock clock;
	Entity();
	void Tick();
};

