#pragma once

#include "InvalidOption.cpp"

class Resenia
{
private:
	string video;
	float calf;
	int n_opiniones;
	float sumatoria_calfs;

public:
	Resenia();
	Resenia(float);
	void setCalf(string, float);
	float getCalf();

	Resenia operator+(const Resenia& obj) {
		string line, video_aux, calf_aux, sumatoria, num_calfs;
		Resenia r3;
		r3.video = video;
		r3.n_opiniones = n_opiniones + 1;
		r3.calf = (sumatoria_calfs + obj.calf) / (r3.n_opiniones);
		r3.sumatoria_calfs = sumatoria_calfs + obj.calf;


		// agregar los nuevos datos al archivo de resenias
		ifstream lectura("resenias.txt"); // abre el archivo para leer cuyo nombre es "resenias.txt"
		ofstream escritura("resenias_aux.txt", ios::out); // abre el archivo para escribir cuyo nombre es "resenias_aux.txt", si no existe crea uno nuevo

		while (getline(lectura, line)) { // lee cada fila del archivo
			stringstream X(line);
			int cont = 0;

			while (getline(X, line, '*')) { // lee cada columna del archivo
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
			// si el nombre de la pel�cula actual coincide con el de la pel�cula ingresada entonces se ingresan los nuevos datos al archivo nuevo
			if (r3.video == video_aux) {
				escritura << r3.video << "*" << r3.calf << "*" << r3.sumatoria_calfs << "*" << r3.n_opiniones << endl;
			}
			else { // si el nombre de la pel�cula actual es diferente al solicitado por el usuario entonces simplemente se agrega al nuevo documento las variables
				escritura << video_aux << "*" << calf_aux << "*" << sumatoria << "*" << num_calfs << endl;
			}
		}

		lectura.close();
		escritura.close();
		remove("resenias.txt");
		rename("resenias_aux.txt", "resenias.txt");
		return r3;
	}
};