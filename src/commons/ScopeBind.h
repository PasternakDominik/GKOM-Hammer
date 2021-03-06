#pragma once

#include <GL/glew.h>

#include "model/Shape.h"
#include "model/Texture.h"

class ScopeBindVBO {
    public:
        ScopeBindVBO(GLenum target, GLuint VBO) {
            glBindBuffer(target, VBO);
        }
        ~ScopeBindVBO() {
            glBindBuffer(GL_ARRAY_BUFFER, 0);
        }
};

class ScopeBindVAO {
    public:
        ScopeBindVAO(GLuint VAO) {
            glBindVertexArray(VAO);
        }
        ~ScopeBindVAO() {
            glBindVertexArray(0);
        }
};

class ScopeBindShape {
    public:
        ScopeBindShape(const Shape& s) {
            glBindVertexArray(s.VAO);
            glBindBuffer(GL_ARRAY_BUFFER, s.VBO);
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, s.EBO);
        }
        ~ScopeBindShape() {
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
            glBindBuffer(GL_ARRAY_BUFFER, 0);
            glBindVertexArray(0);
        }
};

class ScopeBindTexture {
    public:
        ScopeBindTexture(const Texture& t) {
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, t.texture);
        }
        ~ScopeBindTexture() {
            glActiveTexture(0);
            glBindTexture(GL_TEXTURE_2D, 0);
        }
};

namespace ScopeBind {
    inline ScopeBindVBO guard(GLenum target, GLuint VBO) {
        return ScopeBindVBO(target, VBO);
    }

    inline ScopeBindVAO guard(GLuint VAO) {
        return ScopeBindVAO(VAO);
    }

    inline ScopeBindShape guard(const Shape& s) {
        return ScopeBindShape(s);
    }

    inline ScopeBindTexture guard(const Texture& t) {
        return ScopeBindTexture(t);
    }
};
