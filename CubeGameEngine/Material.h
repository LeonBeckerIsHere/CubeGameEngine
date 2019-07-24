#pragma once
#include <glad/glad.h>
#include <glm/glm.hpp>

struct Material {
	glm::vec3 ambient, diffuse, specular;
	GLfloat shininess;
};