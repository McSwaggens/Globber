#include "Entity.h"
#include <list>

#pragma once
class Engine
{
	std::list<Entity> entities;
	void Tick();
public:
	bool Running;
	Engine();
	void Run();
	void RegisterEntity(Entity entity);
};

