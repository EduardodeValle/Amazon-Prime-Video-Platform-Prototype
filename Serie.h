#pragma once

#include "Video.cpp"
class Serie :
    public Video
{
public: 
    Serie();
    void ver_videos();
    void seleccionar_genero();
    void seleccionar_calificacion();
    void calificar_video();
};

