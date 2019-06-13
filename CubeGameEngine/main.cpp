#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "InputManager.h"
#include "CoreEngine.h"



int main() {
	InputManager& inputManager = InputManager::getInstance();
	CoreEngine coreEngine(1280, 720, "Main Screen");
	coreEngine.MainLoop();
	return 0;
}