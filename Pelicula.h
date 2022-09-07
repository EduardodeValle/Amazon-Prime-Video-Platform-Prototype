#pragma once

#include "Serie.cpp"

class Pelicula :
    public Video
{
public:
    Pelicula();
    void ver_videos();
    void seleccionar_genero();
    void seleccionar_calificacion();
    void calificar_video();
    void peliculas_y_series_calf();
    void peliculas_y_series_genero();
};

