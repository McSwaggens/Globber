#include "Entity.h"
#include <list>
#include <iostream>
#include <cstdio>

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

