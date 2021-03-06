/*
** RayTracer Copyright (C) 2020 Maxime Houis, Pierre Langlois
** This program comes with ABSOLUTELY NO WARRANTY.
** This is free software, and you are welcome to redistribute it
** under certain conditions; see LICENSE for details.
*/

#include "Materials/Normal.hpp"
#include "Objects/Sphere.hpp"

Normal::Normal(const raymath::Vector3 &attenuation)
        : AMaterial(attenuation, true, 0, 0.25f, 0.f)
{
}

RayTraceOpt Normal::reflect(const raylib::Ray &, raylib::RayHitInfo &info) const noexcept
{
    raymath::Vector3 color = info.position + info.normal + Sphere::getRandomPoint();
    raylib::Ray reflection{info.position, color - info.position};

    return std::pair{reflection, m_attenuation};
}

