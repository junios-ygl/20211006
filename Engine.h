#pragma once

class Actor;

class Engine
{
public:
	Engine();
	~Engine();

	void Run();

	void SpawnActor();
	void DestroyActor(int Index);

private:
	void Init();
	void Term();
	void Tick();
	void BeginPlay();
	void Input();
	void Render();
	void BeginOverlap();

	Actor* Actors[1000];

	int CountOfActors = 0;
};

