//
//  Planet.h
//  TemplateOpenGL
//
//  Created by Nicola Lancellotti on 6/11/15.
//  Copyright (c) 2015 Nicola Lancellotti. All rights reserved.
//

#ifndef __TemplateOpenGL__Planet__
#define __TemplateOpenGL__Planet__

#include <stdio.h>
#include <vector>
#include <iostream>
#include "glutCrossPlatform.h"
#include "Material.hpp"

class Planet {
    std::string _name;
    GLfloat _rotationPeriod;
    GLfloat _orbitalPeriod;
    GLfloat _orbitalDistance;
    GLfloat _radius;
    
    GLuint _texture;
    Material _material;
    std::vector<Planet> _moons;

    GLfloat _angleRotation;
    GLfloat _angleOrbital;
    
public:
    static GLfloat rotationPeriodSpeed;
    static GLfloat orbitalPeriodSpeed;
    
    Planet(GLfloat rotationPeriod,
           GLfloat orbitalPeriod,
           GLfloat orbitalDistance,
           GLfloat radius,
           char textureName[]);
    
    void update(GLfloat timeInterval);
   
    void render();
    
    void addMoon(Planet moon);
};


#endif /* defined(__TemplateOpenGL__Planet__) */
