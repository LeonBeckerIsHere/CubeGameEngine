#pragma once
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <vector>
#include "Material.h"
#include "Vertex.h"
#include "Texture.h"
#include "Shader.h"

class Cube {
public:
	void Draw(Shader shader);
	Cube(GLuint x, GLuint y, GLuint width, GLuint height);
private:
	const std::vector<GLuint> indices{
		0, 1, 2,		0, 2, 3,		// front
		4, 5, 6,		4, 6, 7,		// back
		8, 9, 10,		8, 10, 11,		// top
		12, 13, 14,		12, 14, 15,		// bottom
		16, 17, 18,		16, 18, 19,		// right
		20, 21, 22,		20, 22, 23,		// left
	};

	std::vector<Vertex> vertices;
	std::vector<Texture> textures;
	Material material;
	GLuint VAO, VBO, EBO;
	void setup();
	

};