#pragma once

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
	GLuint ID;
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	void use();
	void setBool(const std::string& name, GLboolean value) const;
	void setInt(const std::string& name, GLint value) const;
	void setFloat(const std::string& name, GLfloat value) const;
};