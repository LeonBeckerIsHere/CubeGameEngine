#pragma once
#include <iostream>
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include "InputManager.h"

//Wrapper class for GLFW Window in order to simplify window creation
class Window{
public:
	bool isWindowOpen();
	void pollWindowEvents();
	void clearWindow();
	void swapBuffers();
	void defineViewport(GLuint x, GLuint y, GLuint width, GLuint height);
	void loadGLAD();
	void setToCurrentContext();
	Window(GLuint width, GLuint height, const char* title);
	~Window();

private:
	//GLFW API uses raw pointers
	InputManager inputManager;
	GLFWwindow* window;
	void setWindowHints();
};