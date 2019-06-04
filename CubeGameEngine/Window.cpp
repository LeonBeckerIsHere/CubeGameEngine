#include "Window.h"

Window::Window(GLuint width, GLuint height, const char* title) {
	if (!glfwInit()) {
		Window::setWindowHints();

		window = glfwCreateWindow(width, height, title, NULL, NULL);
		Window::setToCurrentContext();
		
		if (window == NULL) {
			std::cerr << "Failed to create a GLFW window" << std::endl;
			exit(-1);
		}

		glfwSetKeyCallback(window, InputManager::getInstance().key_callback);
		Window::loadGLAD();
		Window::defineViewport(0, 0, width, height);
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

bool Window::isWindowOpen() {
	return !glfwWindowShouldClose(window);
}

void Window::pollWindowEvents() {
	glfwPollEvents();
}

void Window::swapBuffers() {
	glfwSwapBuffers(window);
}

void Window::clearWindow() {
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}

void Window::defineViewport(GLuint x, GLuint y, GLuint width, GLuint height) {
	glViewport(x, y, width, height);
}

void Window::loadGLAD() {
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cerr << "Failed to initialize OpenGL context" << std::endl;
		exit(-1);
	}
}

void Window::setToCurrentContext() {
	glfwMakeContextCurrent(window);
}

void Window::setWindowHints() {
	if (window != NULL) {
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	}
}

