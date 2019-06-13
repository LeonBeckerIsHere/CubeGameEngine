#pragma once
#include <typeinfo>
#include <memory>
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class InputManager {
public:
	static InputManager& getInstance() {
		static InputManager instance;
		return instance;
	}

	static void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mode) {
		InputManager::getInstance().keyCallbackImplementation(window, key, scancode, action, mode);
	}
	void keyCallbackImplementation(GLFWwindow* window, int key, int scancode, int action, int mode);

	InputManager(InputManager const&) = delete;
	InputManager(InputManager&&) = delete;
	InputManager& operator=(InputManager const&) = delete;
	InputManager& operator=(InputManager&&) = delete;
private:
	InputManager() {};
	virtual ~InputManager() {};
};