#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "InputManager.h"
#include "Window.h"



int main() {
	InputManager& inputManager = InputManager::getInstance();
	Window window(1280, 720, "Main Screen");
	while (window.isWindowOpen()) {
		window.pollWindowEvents();

		window.clearWindow();
		window.swapBuffers();
	}

	return 0;
}