#pragma once
#include "Window.h"
#include <memory>

class CoreEngine {
public:
	void MainLoop();
	//TODO: Implement Window Settings
	CoreEngine(GLuint width, GLuint height, const char* title);
private:
	Window window;


};