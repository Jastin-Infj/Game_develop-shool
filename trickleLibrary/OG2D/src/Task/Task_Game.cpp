#include "Task_Game.h"
using namespace std;
#define ADD_FUNCTION(a) \
	[](std::vector<Object*>* objs_) { a(objs_); }
//-------------------------------------------------------------------------------------------------
void Game::Initialize()
{
	back.Initialize();
	cout << "Game初期化" << endl;
}
//-------------------------------------------------------------------------------------------------
TaskFlag Game::Update()
{
	TaskFlag nowTask = TaskFlag::Task_Game;
	
	//仮処理 エラーはここ！
	if (gameEngine->in.down(Input::KeyBoard::S))
	{
		nowTask = Task_Title;
	}
	return nowTask;
}
//-------------------------------------------------------------------------------------------------
void Game::Render2D()
{
	back.Render();
}
//-------------------------------------------------------------------------------------------------
void Game::Finalize()
{
	back.Finalize();
}
//-------------------------------------------------------------------------------------------------