#pragma once
#include <iostream>
#include <glfw/glfw3.h>


//Wrapper class for GLFW Window in order to simplify window creation
class Window {
	//GLFW API uses raw pointers
	GLFWwindow* window;
	Window(int width, int height, const char* title);
	~Window();
};