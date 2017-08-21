//
//  Light.cpp
//  TemplateOpenGL
//
//  Created by Nicola Lancellotti on 6/15/15.
//  Copyright (c) 2015 Nicola Lancellotti. All rights reserved.
//

#include "Light.h"

void Light::apply()
{
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_POSITION, position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
}