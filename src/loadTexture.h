//
//  loadTexture.h
//  SolarSystem
//
//  Created by Nicola Lancellotti on 6/1/15.
//  Copyright (c) 2015 Nicola Lancellotti. All rights reserved.
//

#ifndef __SolarSystem__loadTexture__
#define __SolarSystem__loadTexture__

#include <stdio.h>
#include "glutCrossPlatform.h"

GLuint loadTexture(char textName[]);
GLuint loadCubeTexture(char texCubeFaces[6][50]);

#endif /* defined(__SolarSystem__loadTexture__) */
