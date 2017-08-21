//
//  Sphere.hpp
//  TemplateOpenGL
//
//  Created by Nicola Lancellotti on 6/15/15.
//  Copyright © 2015 Nicola Lancellotti. All rights reserved.
//

#ifndef Sphere_cpp
#define Sphere_cpp

#include <stdio.h>
#include "glutCrossPlatform.h"

class Sphere {
    static int _displayList;
    
public:
    static void init();
    
    static void render()
    {
        glCallList(Sphere::_displayList);
    }
    
};

#endif /* Sphere_cpp */
