#include <Windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "InputManager.h"
#include "Window.h"



int main() {
	InputManager& inputManager = InputManager::getInstance();
	Window window(800,600,"Test Window");

	while (window.isWindowOpen()) {
		window.pollWindowEvents();

		window.clearWindow();
		window.swapBuffers();
	}

	return 0;
}