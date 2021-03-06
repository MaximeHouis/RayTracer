/*
** RayTracer Copyright (C) 2020 Maxime Houis, Pierre Langlois
** This program comes with ABSOLUTELY NO WARRANTY.
** This is free software, and you are welcome to redistribute it
** under certain conditions; see LICENSE for details.
*/

#pragma once

#include "AMaterial.hpp"

class Glass : public AMaterial {
public:
    explicit Glass(const raymath::Vector3 &attenuation);
};
