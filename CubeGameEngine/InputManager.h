#pragma once
#include <typeinfo>
#include <memory>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class InputManager {
public:
	static InputManager& getInstance() {
		static InputManager instance;
		return instance;
	}

	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode) {
		if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
			glfwSetWindowShouldClose(window, GL_TRUE);
	}
	void key_callback_Impl()

	InputManager(InputManager const&) = delete;
	InputManager(InputManager&&) = delete;
	InputManager& operator=(InputManager const&) = delete;
	InputManager& operator=(InputManager&&) = delete;
private:
	InputManager() {};
	~InputManager() {};
};