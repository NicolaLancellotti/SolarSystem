//
//  Material.cpp
//  SolarSystem
//
//  Created by Nicola Lancellotti on 6/15/15.
//  Copyright © 2015 Nicola Lancellotti. All rights reserved.
//

#include "Material.hpp"

void Material::apply()
{
    glMaterialfv(GL_FRONT, GL_AMBIENT, ambient); 
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
    glMaterialf(GL_FRONT, GL_SHININESS, shininess);
}
