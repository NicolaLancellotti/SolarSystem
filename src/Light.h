//
//  Light.h
//  SolarSystem
//
//  Created by Nicola Lancellotti on 6/15/15.
//  Copyright (c) 2015 Nicola Lancellotti. All rights reserved.
//

#ifndef __SolarSystem__Light__
#define __SolarSystem__Light__

#include <stdio.h>
#include "glutCrossPlatform.h"

class Light {   

public:
    GLfloat position[4];
    GLfloat ambient[4];
    GLfloat diffuse[4];
    GLfloat specular[4];
        
    void apply();
};

#endif /* defined(__SolarSystem__Light__) */
