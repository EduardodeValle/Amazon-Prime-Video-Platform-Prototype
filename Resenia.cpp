#include "Resenia.h"

Resenia::Resenia() {
	video = "N/A";
	calf = 0;
	n_opiniones = 0;
	sumatoria_calfs = 0;
}

Resenia::Resenia(float calf) {
	video = "N/A";
	this->calf = calf;
	n_opiniones = 0;
	sumatoria_calfs = 0;
}

float Resenia::getCalf() {
	return calf;
}

void Resenia::setCalf(string video, float calf) {
	ifstream lectura("resenias.txt"); // abre el archivo para leer cuyo nombre es "resenias.txt"
	string line, video_aux, calf_aux, sumatoria, num_calfs;
	float sumatoria_float;
	int num_calfs_int;
	this->video = video;
	this->calf = calf;

	while (getline(lectura, line)) { // lee cada fila del archivo
		stringstream X(line);
		int cont = 0;

		while (getline(X, line, '*')) { // lee cada columna de la fila actual
			if (cont == 0) {
				video_aux = line;
			}
			else if (cont == 1) {
				calf_aux = line;
			}
			else if (cont == 2) {
				sumatoria = line;
			}
			else if (cont == 3) {
				num_calfs = line;
			}

			cont++;
		}
		if (video == video_aux) {
			sumatoria_float = stof(sumatoria); // convierte de string a float
			num_calfs_int = stoi(num_calfs); // convierte de string a entero
			n_opiniones = num_calfs_int;
			sumatoria_calfs = sumatoria_float;
		}
	}

	lectura.close();
}