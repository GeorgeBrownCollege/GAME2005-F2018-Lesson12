// Core Libraries
#include <iostream>
#include <string>

#include <math.h>
#include <Windows.h>

//#include <map> // for std::map
//#include <memory> // for std::shared_ptr
//#include <fstream>

// 3rd Party Libraries
#include <GLEW\glew.h>
//#include <GLUT/freeglut.h>
//#include <IL/il.h> // for ilInit()
//#include "IL\ilu.h"
#include <glm\vec3.hpp>
#include <glm\gtx\color_space.hpp>


#include "TextureManager.h"
#include "Game.h"


// our Game Object
Game* g_game = 0;


int main(int argc, char * args[])
{
	// show console
	AllocConsole();
	freopen("CON", "w", stdout);


	TheGame::Instance()->init("Hello World", 100, 100, 640, 480, false);

	while (TheGame::Instance()->running())
	{
		TheGame::Instance()->handleEvents();
		TheGame::Instance()->update();
		TheGame::Instance()->render();

	}

	TheGame::Instance()->clean();

	return 0;
}

