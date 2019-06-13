#include "CoreEngine.h"

CoreEngine::CoreEngine(GLuint width, GLuint height, const char* title) : window(width, height, title) {
}

void CoreEngine::MainLoop(){
	while (window.isWindowOpen()) {
		window.pollWindowEvents();

		window.clearWindow();
		window.swapBuffers();
	}

}


