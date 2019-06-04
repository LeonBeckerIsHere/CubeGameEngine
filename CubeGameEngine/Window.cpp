#include "Window.h"

Window::Window(int width, int height, const char* title) {
	if (!glfwInit()) {
		window = glfwCreateWindow(width, height, title, NULL, NULL);
	}
	else {
		std::cerr << "GLFW failed to initialize" << std::endl;
		exit(-1);
	}
}

Window::~Window() {
	glfwDestroyWindow(window);
	glfwTerminate();
}