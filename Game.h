#include "Entity.h"
#include <list>

#pragma once
class Game
{
	std::list<Entity> entities;
	void Tick();
public:
	bool Running;
	Game();
	void Run();
	void RegisterEntity(Entity entity);
};

