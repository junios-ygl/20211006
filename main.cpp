#include <iostream>
#include "Engine.h"
#include "Actor.h"
#include <vector>

using namespace std;

int main()
{
	vector<Actor*> Actors;

	Actors.push_back(new Actor());
	Actors.push_back(new Actor());
	Actors.push_back(new Actor());
	Actors.push_back(new Actor());

	cout << Actors.size() << endl;


	//Engine* engine = new Engine();

	//engine->SpawnActor();
	//engine->SpawnActor();

	//engine->DestroyActor(0);

	//engine->Run();

	//delete engine;

	return 0;
}