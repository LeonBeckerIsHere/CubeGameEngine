#pragma once
#include <iostream>
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include "InputManager.h"

//Wrapper class for GLFW Window in order to simplify window creation
class Window{
public:
	//Check if the window is open
	bool isWindowOpen();

	//Poll for window events e.g. key presses, mouse movement, etc
	void pollWindowEvents();

	//Clears the window with a bluish color
	void clearWindow();

	//Swaps the buffers of the window
	void swapBuffers();

	//Define the viewport of the window
	void defineViewport(GLuint x, GLuint y, GLuint width, GLuint height);
	
	//Loads GLAD to help with OpenGL extensions
	void loadGLAD();

	//Set this window to be the current context
	void setToCurrentContext();

	//Set the key callback method for this window
	void setKeyCallback();
	Window(GLuint width, GLuint height, const char* title);
	~Window();

private:
	//GLFW API uses raw pointers
	GLFWwindow* window;
	GLuint width, height;
	const char* title;
	void setWindowHints();
};