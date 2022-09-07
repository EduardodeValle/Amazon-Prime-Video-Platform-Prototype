#include "Serie.h"

Serie::Serie(){}

void Serie::ver_videos() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;
	ifstream lectura("series.txt"); // abre el archivo para leer cuyo nombre es "series.txt"
	string line;
	int s, contcols = 0;
	string serie;

	while (getline(lectura, line)) { // lee cada fila del archivo
		stringstream X(line);

		while (getline(X, line, '*')) { // lee cada columna de la fila actual

			// imprime el t�tulo de la serie en color verde
			if (contcols == 0 || contcols == 1 || contcols == 2 || contcols == 3 || contcols == 4 || contcols == 5) {
				SetConsoleTextAttribute(hConsole, 10);
				cout << line << endl;
				SetConsoleTextAttribute(hConsole, 15); // regresa el color del texto a blanco
			}

			// imprime el a�o de la serie
			if (contcols == 6) {
				cout << endl;
				cout << line << "  ";
			}

			// imprime la calificaci�n de la serie
			if (contcols == 7) {
				cout << line << "  ";
			}

			// imprime el n�mero de temporadas
			if (contcols == 8) {
				cout << line << endl;
				cout << endl;
			}

			// imprime la sinopsis de la serie
			if (contcols == 9) {
				cout << line << endl;
			}

			// imprime el reparto de la serie
			if (contcols == 10) {
				cout << endl;
				cout << line << endl;
			}

			// imprime los generos de la serie
			if (contcols == 11) {
				cout << line << endl;
			}

			// imprime los subt�tulos disponibles
			if (contcols == 12) {
				cout << line << endl;
			}

			// imprime los idiomas de audio
			if (contcols == 13) {
				cout << line << endl;
			}

			// imprime m�s detalles sobre la serie
			if (contcols == 14) {
				cout << endl;
				cout << endl;
				cout << line << endl;
				cout << endl;
			}

			// imprime los productores de la serie
			if (contcols == 15) {
				cout << line << endl;
			}

			// imprime la red de la serie
			if (contcols == 16) {
				cout << line << endl;
			}

			// imprime la calificaci�n por edades de Amazon
			if (contcols == 17) {
				cout << line << endl;
			}

			// imprime las advertencias de contenido
			if (contcols == 18) {
				cout << line << endl;
			}

			// imprime los actores secundairios
			if (contcols == 19) {
				cout << line << endl;
			}

			contcols++;
		}
		contcols = 0;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}
	lectura.close();

	ifstream lectura2("series.txt"); // abre el archivo para leer cuyo nombre es "series.txt"
	// contador de temporadas
	int cont_temps = 1;

	// t�tulo de la serie
	string t1, t2, t3, t4, t5, t6;

	// informaci�n de las series
	string anio, calf, temps, sinopsis, reparto, generos, subtitulos, idiomas;

	//m�s informaci�n de las series
	string mas_info, productores, red, edades, advertencias, actores_sec, nombre;

	cout << "Ingrese la serie que desea ver:" << endl;
	cout << "1. Sr. Robot" << endl;
	cout << "2. Sons of Anarchy" << endl;
	cout << "3. The Man in the High Castle" << endl;
	cout << "4. Ken'ichi, el discipulo mas fuerte de la historia" << endl;
	cout << "5. Pequenias Coincidencias" << endl;
	cin >> s;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	//INSERTAR EXCEPCI�N SI SE INTRODUCE UN DATO INV�LIDO


	// si se eligi� ver a Sr. Robot
	if (s == 1) {
		serie = "Sr. Robot";
	}
	else if (s == 2) {
		serie = "Sons of Anarchy";
	}
	else if (s == 3) {
		serie = "The Man in the High Castle";
	}
	else if (s == 4) {
		serie = "Ken'ichi, el discipulo mas fuerte de la historia";
	}
	else if (s == 5) {
		serie = "Pequenias Coincidencias";
	}

	while (getline(lectura2, line)) { // lee cada fila del archivo
		stringstream X(line);

		while (getline(X, line, '*')) { // lee cada columna de la fila actual

			// guarda la variable del titulo
			if (contcols == 0) {
				t1 = line;
			}

			// guarda la variable del titulo
			if (contcols == 1) {
				t2 = line;
			}

			// guarda la variable del titulo
			if (contcols == 2) {
				t3 = line;
			}

			// guarda la variable del titulo
			if (contcols == 3) {
				t4 = line;
			}

			// guarda la variable del titulo
			if (contcols == 4) {
				t5 = line;
			}

			// guarda la variable del titulo
			if (contcols == 5) {
				t6 = line;
			}

			// guarda la variable del anio
			if (contcols == 6) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (contcols == 7) {
				calf = line;
			}

			// guarda la variable del n�mero de temporadas
			if (contcols == 8) {
				temps = line;
			}

			// guarda la variable de la sinopsis
			if (contcols == 9) {
				sinopsis = line;
			}

			// guarda la variable del reparto
			if (contcols == 10) {
				reparto = line;
			}

			// guarda la variable de los generos
			if (contcols == 11) {
				generos = line;
			}

			// guarda la varibale de los subtitulos
			if (contcols == 12) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (contcols == 13) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (contcols == 14) {
				mas_info = line;
			}

			// iguarda la variable de los productores
			if (contcols == 15) {
				productores = line;
			}

			// guarda la variable de la red
			if (contcols == 16) {
				red = line;
			}

			// guarda la variable de calificacion por edades
			if (contcols == 17) {
				edades = line;
			}

			// guarda la variable de las advertencias
			if (contcols == 18) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (contcols == 19) {
				actores_sec = line;
			}

			// guarda la variable del nombre de la serie
			if (contcols == 20) {
				nombre = line;
				/* se rompe el ciclo porque a partir del contador 20 se leen los cap�tulos y temporadas,
				primero se debe comprobar si la fila actual corresponde a la serie solicitada por el usuario*/
				break;
			}

			contcols++;
		}

		// si la serie solicitada por el usuario coincide con la fila actual entonces se imprime su informaci�n
		if (serie == nombre) {
			SetConsoleTextAttribute(hConsole, 10); // imprime el nombre de la serie en color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl;
			SetConsoleTextAttribute(hConsole, 15); // cuando termine de imprimir el nombre de la serie devuelve el color del texto a blanco
			cout << endl << endl;
			cout << anio << "  " << calf << "  " << temps << endl;
			cout << endl;
			cout << sinopsis << endl;
			cout << endl;
			cout << reparto << endl;
			cout << generos << endl;
			cout << subtitulos << endl;
			cout << idiomas << endl;
			cout << endl;
			cout << endl;
			cout << mas_info << endl;
			cout << endl;
			cout << productores << endl;
			cout << red << endl;
			cout << edades << endl;
			cout << advertencias << endl;
			cout << actores_sec << endl;


			/* Justo antes de empezar a leer las temporadas se rompi� el ciclo
			y ahora va a empezar desde las temporadas y cap�tulos.*/
			while (getline(X, line, '*')) {
				if (line == "TEMPORADA") {
					cout << endl;
					cout << endl;
					cout << endl;
					cout << line << " " << cont_temps << endl; // se imprime la temporada con su respectivo contador
					cout << endl;
					cont_temps++; // aumenta el contador de las temporadas
				}
				else {
					cout << line << endl;
				}
			}
		}

		cont_temps = 1;
		contcols = 0;
	}

	lectura2.close();
}

void Serie::seleccionar_genero() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;
	int respuesta, contcols = 0;
	string gen, line;

	ifstream lectura("series.txt"); // abre el archivo para leer cuyo nombre es "series.txt"
	// contador de temporadas
	int cont_temps = 1;

	// t�tulo de la serie
	string t1, t2, t3, t4, t5, t6;

	// informaci�n de las series
	string anio, calf, temps, sinopsis, reparto, generos, subtitulos, idiomas;

	//m�s informaci�n de las series
	string mas_info, productores, red, edades, advertencias, actores_sec, nombre;

	while (true) {
		try {
			cout << endl;
			cout << endl;
			cout << "Ingrese el genero de las series que desea visualizar:" << endl;
			cout << "1. Suspenso" << endl;
			cout << "2. Drama" << endl;
			cout << "3. Accion" << endl;
			cout << "4. Anime" << endl;
			cout << "5. Romance" << endl;
			cin >> respuesta;



			if (respuesta == 1) {
				gen = "Suspenso";
				break;
			}
			else if (respuesta == 2) {
				gen = "Drama";
				break;
			}
			else if (respuesta == 3) {
				gen = "Accion";
				break;
			}
			else if (respuesta == 4) {
				gen = "Anime";
				break;
			}
			else if (respuesta == 5) {
				gen = "Romance";
				break;
			}
			else if (respuesta < 1) { 
				ostringstream str1;
				str1 << respuesta;
				string s = str1.str();
				throw InvalidOption(s);
			}
			else if (respuesta > 5) {
				ostringstream str1;
				str1 << respuesta;
				string s = str1.str();
				throw InvalidOption(s);
			}
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what() << endl;
			cout << endl;
		}
	}

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	while (getline(lectura, line)) { // lee cada fila del archivo
		stringstream X(line);

		while (getline(X, line, '*')) { // lee cada columna de la fila actual

			// guarda la variable del titulo
			if (contcols == 0) {
				t1 = line;
			}

			// guarda la variable del titulo
			if (contcols == 1) {
				t2 = line;
			}

			// guarda la variable del titulo
			if (contcols == 2) {
				t3 = line;
			}

			// guarda la variable del titulo
			if (contcols == 3) {
				t4 = line;
			}

			// guarda la variable del titulo
			if (contcols == 4) {
				t5 = line;
			}

			// guarda la variable del titulo
			if (contcols == 5) {
				t6 = line;
			}

			// guarda la variable del anio
			if (contcols == 6) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (contcols == 7) {
				calf = line;
			}

			// guarda la variable del n�mero de temporadas
			if (contcols == 8) {
				temps = line;
			}

			// guarda la variable de la sinopsis
			if (contcols == 9) {
				sinopsis = line;
			}

			// guarda la variable del reparto
			if (contcols == 10) {
				reparto = line;
			}

			// guarda la variable de los generos
			if (contcols == 11) {
				generos = line;
			}

			// guarda la varibale de los subtitulos
			if (contcols == 12) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (contcols == 13) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (contcols == 14) {
				mas_info = line;
			}

			// iguarda la variable de los productores
			if (contcols == 15) {
				productores = line;
			}

			// guarda la variable de la red
			if (contcols == 16) {
				red = line;
			}

			// guarda la variable de calificacion por edades
			if (contcols == 17) {
				edades = line;
			}

			// guarda la variable de las advertencias
			if (contcols == 18) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (contcols == 19) {
				actores_sec = line;
			}

			// guarda la variable del nombre de la serie
			if (contcols == 20) {
				nombre = line;
				/* se rompe el ciclo porque a partir del contador 20 se leen los cap�tulos y temporadas,
				primero se debe comprobar si la fila actual corresponde a la serie solicitada por el usuario*/
				break;
			}

			contcols++;
		}

		// si la serie solicitada por el usuario coincide con la fila actual entonces se imprime su informaci�n
		if (generos.find(gen) != std::string::npos) {
			SetConsoleTextAttribute(hConsole, 10); // imprime el color de la serie en color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl;
			SetConsoleTextAttribute(hConsole, 15); // cuando termine de imprimir el nombre de la serie devuelve el color de texto a blanco
			cout << endl << endl;
			cout << anio << "  " << calf << "  " << temps << endl;
			cout << endl;
			cout << sinopsis << endl;
			cout << endl;
			cout << reparto << endl;
			cout << generos << endl;
			cout << subtitulos << endl;
			cout << idiomas << endl;
			cout << endl;
			cout << endl;
			cout << mas_info << endl;
			cout << endl;
			cout << productores << endl;
			cout << red << endl;
			cout << edades << endl;
			cout << advertencias << endl;
			cout << actores_sec << endl;


			/* Justo antes de empezar a leer las temporadas se rompi� el ciclo
			y ahora va a empezar desde las temporadas y cap�tulos.*/
			while (getline(X, line, '*')) {
				if (line == "TEMPORADA") {
					cout << endl;
					cout << endl;
					cout << endl;
					cout << line << " " << cont_temps << endl; // se imprime la temporada con su respectivo contador
					cout << endl;
					cont_temps++; // aumenta el contador de las temporadas
				}
				else {
					cout << line << endl;
				}
			}
		}
		cont_temps = 1;
		contcols = 0;
	}

	lectura.close();
}

void Serie::seleccionar_calificacion() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;
	float calificacion, calf_float;
	bool is_serie = false;
	int contcols = 0;
	string line;
	ifstream lectura("series.txt"); // abre el archivo para leer cuyo nombre es "series.txt"
	// contador de temporadas
	int cont_temps = 1;

	// t�tulo de la serie
	string t1, t2, t3, t4, t5, t6;

	// informaci�n de las series
	string anio, calf, temps, sinopsis, reparto, generos, subtitulos, idiomas;

	//m�s informaci�n de las series
	string mas_info, productores, red, edades, advertencias, actores_sec, nombre;

	while (true) {
		try {
			cout << endl;
			cout << "Ingrese la calificacion minima de las series (1-5):" << endl;
			cin >> calificacion;
			cout << endl;

			if (calificacion < 1) { // la calificacion se convierte a string para manejar la excepci�n
				ostringstream str1;
				str1 << calificacion;
				string s = str1.str();
				throw InvalidOption(s);
			}
			else if (calificacion > 5) {
				ostringstream str1;
				str1 << calificacion;
				string s = str1.str();
				throw InvalidOption(s);
			}
			else { break; }
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what() << endl;
			cout << endl;
		}
	}
	

	while (getline(lectura, line)) { // lee cada fila del archivo
		stringstream X(line);

		while (getline(X, line, '*')) { // lee cada columna de la fila actual

			// guarda la variable del titulo
			if (contcols == 0) {
				t1 = line;
			}

			// guarda la variable del titulo
			if (contcols == 1) {
				t2 = line;
			}

			// guarda la variable del titulo
			if (contcols == 2) {
				t3 = line;
			}

			// guarda la variable del titulo
			if (contcols == 3) {
				t4 = line;
			}

			// guarda la variable del titulo
			if (contcols == 4) {
				t5 = line;
			}

			// guarda la variable del titulo
			if (contcols == 5) {
				t6 = line;
			}

			// guarda la variable del anio
			if (contcols == 6) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (contcols == 7) {
				calf = line;
			}

			// guarda la variable del n�mero de temporadas
			if (contcols == 8) {
				temps = line;
			}

			// guarda la variable de la sinopsis
			if (contcols == 9) {
				sinopsis = line;
			}

			// guarda la variable del reparto
			if (contcols == 10) {
				reparto = line;
			}

			// guarda la variable de los generos
			if (contcols == 11) {
				generos = line;
			}

			// guarda la varibale de los subtitulos
			if (contcols == 12) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (contcols == 13) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (contcols == 14) {
				mas_info = line;
			}

			// iguarda la variable de los productores
			if (contcols == 15) {
				productores = line;
			}

			// guarda la variable de la red
			if (contcols == 16) {
				red = line;
			}

			// guarda la variable de calificacion por edades
			if (contcols == 17) {
				edades = line;
			}

			// guarda la variable de las advertencias
			if (contcols == 18) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (contcols == 19) {
				actores_sec = line;
			}

			// guarda la variable del nombre de la serie
			if (contcols == 20) {
				nombre = line;
				/* se rompe el ciclo porque a partir del contador 20 se leen los cap�tulos y temporadas,
				primero se debe comprobar si la fila actual corresponde a la serie solicitada por el usuario*/
				break;
			}

			contcols++;
		}

		calf_float = stof(calf); // se convierte de string a float la calificacion obtenida del archivo

		/* si la calificaci�n de la pel�cula es mayor o igual a la solicitada
		por el usuario entonces se imprime toda su informaci�n*/
		if (calf_float >= calificacion) {
			is_serie = true;
			cout << endl;
			cout << endl;
			cout << endl;
			SetConsoleTextAttribute(hConsole, 10); // imprime el nombre de la serie en color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl;
			SetConsoleTextAttribute(hConsole, 15); // cuando termine de imprimir el nombre de la serie regresa el color de texto a blanco
			cout << endl << endl;
			cout << anio << "  " << calf << "  " << temps << endl;
			cout << endl;
			cout << sinopsis << endl;
			cout << endl;
			cout << reparto << endl;
			cout << generos << endl;
			cout << subtitulos << endl;
			cout << idiomas << endl;
			cout << endl;
			cout << endl;
			cout << mas_info << endl;
			cout << endl;
			cout << productores << endl;
			cout << red << endl;
			cout << edades << endl;
			cout << advertencias << endl;
			cout << actores_sec << endl;


			/* Justo antes de empezar a leer las temporadas se rompi� el ciclo
			y ahora va a empezar desde las temporadas y cap�tulos.*/
			while (getline(X, line, '*')) {
				if (line == "TEMPORADA") {
					cout << endl;
					cout << endl;
					cout << endl;
					cout << line << " " << cont_temps << endl; // se imprime la temporada con su respectivo contador
					cout << endl;
					cont_temps++; // aumenta el contador de las temporadas
				}
				else {
					cout << line << endl;
				}
			}
		}
		cont_temps = 1;
		contcols = 0;
	}

	if (is_serie == false) {
		cout << endl;
		cout << "Ninguna serie tiene la calificacion minima ingresada" << endl;
	}

	lectura.close();
}

void Serie::calificar_video() {
	cout << endl;
	cout << endl;
	ifstream lectura("series.txt"); // abre el archivo para leer cuyo nombre es "series.txt"
	ofstream escritura("series_aux.txt", ios::out); // abre el archivo para escribir cuyo nombre es "series_aux.txt"
	string line, serie, respuesta;
	float calf_resenia;

	// contador de temporadas
	int cont_temps = 1;

	// t�tulo de la serie
	string t1, t2, t3, t4, t5, t6;

	// informaci�n de las series
	string anio, calf, temps, sinopsis, reparto, generos, subtitulos, idiomas;

	//m�s informaci�n de las series
	string mas_info, productores, red, edades, advertencias, actores_sec, nombre;

	while (true) {
		try {
			cout << "Ingrese el nombre de la serie a calificar:" << endl;
			cout << "1. Sr. Robot" << endl;
			cout << "2. Sons of Anarchy" << endl;
			cout << "3. The Man in the High Castle" << endl;
			cout << "4. Ken'ichi, el discipulo mas fuerte de la historia" << endl;
			cout << "5. Pequenias Coincidencias" << endl;
			cin >> respuesta;
			cout << endl;
			cout << endl;

			if (respuesta == "1") {
				serie = "Sr. Robot";
			}
			else if (respuesta == "2") {
				serie = "Sons of Anarchy";
			}
			else if (respuesta == "3") {
				serie = "The Man in the High Castle";
			}
			else if (respuesta == "4") {
				serie = "Ken'ichi, el discipulo mas fuerte de la historia";
			}
			else if (respuesta == "5") {
				serie = "Pequenias Coincidencias";
			}
			else throw InvalidOption(respuesta);

			break;
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what();
			cout << endl;
		}
	}

	while (true) {
		try {
			cout << endl;
			cout << "Ingrese la calificacion deseada (1-5):" << endl;
			cin >> calf_resenia;
			cout << endl;
			cout << endl;

			if (calf_resenia < 0) {
				// la rese�a se convierte de float a string y se arroja la excepci�n
				ostringstream str1;
				str1 << calf_resenia;
				string s = str1.str();
				throw InvalidOption(s);
			}
			else if (calf_resenia > 5) {
				// la rese�a se convierte de float a string y se arroja la excepci�n
				ostringstream str1;
				str1 << calf_resenia;
				string s = str1.str();
				throw InvalidOption(s);
			}
			else if (!cin) throw InvalidOption("string typed");
			else { break; }
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what();
			cout << endl;
		}
	}

	while (getline(lectura, line)) { // lee cada fila del archivo
		stringstream X(line);
		int contcols = 0;
		while (getline(X, line, '*')) { // lee cada columna de la fila actual

			// guarda la variable del titulo
			if (contcols == 0) {
				t1 = line;
			}

			// guarda la variable del titulo
			if (contcols == 1) {
				t2 = line;
			}

			// guarda la variable del titulo
			if (contcols == 2) {
				t3 = line;
			}

			// guarda la variable del titulo
			if (contcols == 3) {
				t4 = line;
			}

			// guarda la variable del titulo
			if (contcols == 4) {
				t5 = line;
			}

			// guarda la variable del titulo
			if (contcols == 5) {
				t6 = line;
			}

			// guarda la variable del anio
			if (contcols == 6) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (contcols == 7) {
				calf = line;
			}

			// guarda la variable del n�mero de temporadas
			if (contcols == 8) {
				temps = line;
			}

			// guarda la variable de la sinopsis
			if (contcols == 9) {
				sinopsis = line;
			}

			// guarda la variable del reparto
			if (contcols == 10) {
				reparto = line;
			}

			// guarda la variable de los generos
			if (contcols == 11) {
				generos = line;
			}

			// guarda la varibale de los subtitulos
			if (contcols == 12) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (contcols == 13) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (contcols == 14) {
				mas_info = line;
			}

			// iguarda la variable de los productores
			if (contcols == 15) {
				productores = line;
			}

			// guarda la variable de la red
			if (contcols == 16) {
				red = line;
			}

			// guarda la variable de calificacion por edades
			if (contcols == 17) {
				edades = line;
			}

			// guarda la variable de las advertencias
			if (contcols == 18) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (contcols == 19) {
				actores_sec = line;
			}

			// guarda la variable del nombre de la serie
			if (contcols == 20) {
				nombre = line;
				/* se rompe el ciclo porque a partir del contador 20 se leen los cap�tulos y temporadas,
				primero se debe comprobar si la fila actual corresponde a la serie solicitada por el usuario*/
				break;
			}

			contcols++;
		}

		// si la fila actual es de la serie deseada entonces se modificar� la calificaci�n y despu�s se agregar�
		if (serie == nombre) {
			Resenia r1;
			Resenia r2(calf_resenia); // se guardan los valores de la rese�a ingresada por el usuario en el objeto r2
			Resenia r3;

			r1.setCalf(serie, calf_resenia); // se guardan los valores de la rese�a actual en el objeto r1

			r3 = r1 + r2; // sobrecarga de operadores, el objeto r3 tiene el valor de la nueva rese�a

			// agregar los nuevos datos al archivo auxiliar
			escritura << t1 << "*" << t2 << "*" << t3 << "*" << t4 << "*" << t5 << "*" << t6 << "*" << anio << "*" << r3.getCalf() << "*" << temps << "*" << sinopsis << "*" << reparto << "*" << generos << "*" << subtitulos << "*" << idiomas << "*" << mas_info << "*" << productores << "*" << red << "*" << edades << "*" << advertencias << "*" << actores_sec << "*" << nombre << "*";

			// se deben agrgar los cap�tulos y temporadas
			while (getline(X, line, '*')) {
				escritura << line << "*";
			}
			escritura << endl; // cuando termine de agregar toda la informaci�n de las series va a agregar un salto de l�nea en el archivo
		}
		else { // si la fila actual no es de la pel�cula deseada entonces los datos se agregan simplemente al nuevo archivo
			escritura << t1 << "*" << t2 << "*" << t3 << "*" << t4 << "*" << t5 << "*" << t6 << "*" << anio << "*" << calf << "*" << temps << "*" << sinopsis << "*" << reparto << "*" << generos << "*" << subtitulos << "*" << idiomas << "*" << mas_info << "*" << productores << "*" << red << "*" << edades << "*" << advertencias << "*" << actores_sec << "*" << nombre << "*";

			// se deben agrgar los cap�tulos y temporadas
			while (getline(X, line, '*')) {
				escritura << line << "*";
			}
			escritura << endl; // cuando termine de agregar toda la informaci�n de las series va a agregar un salto de l�nea en el archivo
		}
		contcols = 0;
	}

	lectura.close();
	escritura.close();
	remove("series.txt");
	rename("series_aux.txt", "series.txt");
}