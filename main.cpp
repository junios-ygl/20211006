#include <iostream>
#include "Engine.h"
#include "Actor.h"
#include <vector> //STL //TArray
#include <list>
#include <map> //Map
#include <set>	//set
#include <algorithm>  //shuffle, search, sort

using namespace std;

int main()
{
	//list<int> IntListStore;
	//for (int i = 1; i <= 10; ++i)
	//{
	//	IntListStore.push_back(i);
	//}


	//for (auto v : IntListStore)
	//{
	//	cout << v << endl;
	//}
//	for (auto iter = IntListStore.begin(); iter != IntListStore.end(); ++iter)
////	for (list<int>::iterator iter = IntListStore.begin(); iter != IntListStore.end(); ++iter) 
//	{
//		cout << *iter << endl;
//	}
//
	vector<int> IntStore;

	for (int i = 1; i <= 10; ++i)
	{
		IntStore.push_back(i);
	}

	cout << IntStore.capacity() << endl;


	//random_shuffle<vector<int>::iterator>(IntStore.begin(), IntStore.end());

	//for (auto v : IntStore) //range for
	//{
	//	cout << v << endl;
	//}

//	//IntStore.erase(IntStore.begin() + 3);
//	//IntStore.insert(IntStore.begin() + 2, 11);
//
//	for (auto iter = IntStore.begin(); iter != IntStore.end(); ++iter)
//	//for (size_t i = 0; i < IntStore.size(); ++i)
//	{
//		cout << *iter << endl;
//	}
//



//	Engine* engine = new Engine();
//
//	(*engine).SpawnActor();
//	 //Wall, Player, Goal(Object)
//	engine->SpawnActor();
//
////	engine->DestroyActor(0);
//
//	engine->Run();
//
//	delete engine;
//
	return 0;
}