//
//  Sphere.cpp
//  TemplateOpenGL
//
//  Created by Nicola Lancellotti on 6/15/15.
//  Copyright © 2015 Nicola Lancellotti. All rights reserved.
//

#include "Sphere.hpp"

int Sphere::_displayList = 0;

void Sphere::init() { 
    _displayList = glGenLists(1);
    GLUquadric* sphere = gluNewQuadric();
    gluQuadricDrawStyle(sphere, GLU_FILL);
    gluQuadricOrientation(sphere, GLU_OUTSIDE);
    gluQuadricTexture(sphere, GL_TRUE);
    gluQuadricNormals(sphere, GLU_SMOOTH);
    glNewList(_displayList, GL_COMPILE);
    gluSphere(sphere, 1.0, 20, 20);
    glEndList();
    gluDeleteQuadric(sphere);
}