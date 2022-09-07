#pragma once

#include "Resenia.cpp"

class Video
{
public:
	virtual void ver_videos() = 0;
	virtual void seleccionar_genero() = 0;
	virtual void seleccionar_calificacion() = 0;
	virtual void calificar_video() = 0;
};

