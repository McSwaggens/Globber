#include "Entity.h"
#include <list>
#include <iostream>
#include <cstdio>
#include <SFML/Graphics.hpp>

#pragma once
class Engine
{
	std::list<Entity> entities;
	void Tick();
public:
	sf::RenderWindow Screen;
	bool Running;
	Engine();
	void Run();
	void RegisterEntity(Entity entity);
};

