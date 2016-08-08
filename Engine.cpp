#include "Engine.h"

Engine::Engine() {
}

void Engine::Run()
{
	Running = true;
	while (Running)
	{
		Tick();
	}
	
	printf ("Goodbye");
}

void Engine::Tick()
{
	for (std::list<Entity>::iterator it = entities.begin(); it != entities.end(); it++)
	{
		it->Tick(1.0f);
	}
}