#include "Pelicula.h"

Pelicula::Pelicula() {}

void Pelicula::ver_videos() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;
	ifstream lectura("peliculas.txt"); // abre el archivo para leer cuyo nombre es "peliculas.txt"
	string line;
	int cont = 0;

	while (getline(lectura, line)) {
		stringstream X(line);

		while (getline(X, line, '*')) {

			// imprime el t�tulo de la pel�cula en color verde
			if (cont == 0 || cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5) {
				SetConsoleTextAttribute(hConsole, 10);
				cout << line << endl;
				SetConsoleTextAttribute(hConsole, 15); // cuando se termine de imprimir los t�tulos el color se devuelve a blanco
			}

			// imprime la duraci�n de la pel�cula
			if (cont == 6) {
				cout << endl;
				cout << line << "  ";
			}

			// imprime el a�o cuando se estren�
			if (cont == 7) {
				cout << line << "  ";
			}

			// imprime la calificaci�n
			if (cont == 8) {
				cout << line << endl;
				cout << endl;
			}

			// imprime la sinopsis
			if (cont == 9) {
				cout << line << endl;
			}

			// imprime la direcci�n
			if (cont == 10) {
				cout << endl;
				cout << line << endl;
			}

			// imprime el reparto
			if (cont == 11) {
				cout << line << endl;
			}

			// imprime el/los g�neros 
			if (cont == 12) {
				cout << line << endl;
			}

			// imprime los idiomas de los subt�tulos 
			if (cont == 13) {
				cout << line << endl;
			}

			// imprime los idiomas de audio
			if (cont == 14) {
				cout << line << endl;
			}

			// imprime m�s detalles sobre la pel�cula
			if (cont == 15) {
				cout << endl;
				cout << endl;
				cout << line << endl;
				cout << endl;
			}

			// imprime la informaci�n de los productores
			if (cont == 16) {
				cout << line << endl;
			}

			// imprime la informaci�n del estudio
			if (cont == 17) {
				cout << line << endl;
			}

			// imprime la edad m�nima para poder ver la pel�cula
			if (cont == 18) {
				cout << line << endl;
			}

			// imprime las advertencias de contenido 
			if (cont == 19) {
				cout << line << endl;
			}

			// imprime los actores secundarios
			if (cont == 20) {
				cout << line << endl;
			}

			// cuando termine de leer todos los elementos de la pel�cula se imprime esta l�nea de c�digo
			if (cont == 21) {
				cout << endl;
				cout << "1996-2021, Amazon.com, Inc. o sus filiales." << endl;
			}

			cont++;
		}
		// cuando termine de imprimir todos los detalles de la pel�cula va a dar saltos de l�nea para que no se amontone con la pr�xima
		cont = 0;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}
	lectura.close();
}

void Pelicula::seleccionar_genero() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;
	string respuesta;
	string gen;

	while (true) {
		try {
			cout << "Ingrese el genero de las peliculas que desea visualizar:" << endl;
			cout << "1. Drama" << endl;
			cout << "2. Comedia" << endl;
			cout << "3. Romance" << endl;
			cout << "4. Fantasia" << endl;
			cout << "5. Ciencia ficcion" << endl;
			cout << "6. Accion" << endl;
			cout << "7. Aventura" << endl;
			cout << "8. Terror" << endl;
			cout << "9. Infantil" << endl;

			cin >> respuesta;

			if (respuesta == "1") {
				gen = "Drama";
				break;
			}
			else if (respuesta == "2") {
				gen = "Comedia";
				break;
			}
			else if (respuesta == "3") {
				gen = "Romance";
				break;
			}
			else if (respuesta == "4") {
				gen = "Fantasia";
				break;
			}
			else if (respuesta == "5") {
				gen = "Ciencia ficcion";
				break;
			}
			else if (respuesta == "6") {
				gen = "Accion";
				break;
			}
			else if (respuesta == "7") {
				gen = "Aventura";
				break;
			}
			else if (respuesta == "8") {
				gen = "Terror";
				break;
			}
			else if (respuesta == "9") {
				gen = "Infantil";
				break;
			}
			else throw InvalidOption(respuesta);
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what() << endl;
			cout << endl;
		}
	}

	ifstream lectura("peliculas.txt"); // abre el archivo para leer cuyo nombre es "peliculas.txt"
	string line;
	int cont = 0;

	//variables del t�tulo
	string t1, t2, t3, t4, t5, t6;

	//informacion de la pelicula
	string duracion, anio, calf, sinopsis, direccion, reparto, generos, subtitulos, idiomas;

	//mas informacion de la pel�cula
	string mas_info, productores, estudio, calf_edades, advertencias, actores_secundarios;

	while (getline(lectura, line)) {
		stringstream X(line);

		/* va a guardar las variables de la pel�cula. Si el g�nero ingresado por el usuario existe
		en la informaci�n de los g�neros de la pel�cula entonces se van a imprimir todas las variables
		de la pel�cula y va a continuar leyendo la siguiente fila del archivo*/
		while (getline(X, line, '*')) {

			// guarda las variables del t�tulo de la pel�cula
			if (cont == 0)
			{
				t1 = line;
			}
			else if (cont == 1) {
				t2 = line;
			}
			else if (cont == 2) {
				t3 = line;
			}
			else if (cont == 3) {
				t4 = line;
			}
			else if (cont == 4) {
				t5 = line;
			}
			else if (cont == 5) {
				t6 = line;
			}

			// guarda la variable de la duraci�n
			if (cont == 6) {
				duracion = line;
			}

			// guarda la variable del a�o de estreno
			if (cont == 7) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (cont == 8) {
				calf = line;
			}

			// guarda la variable de la sinopsis
			if (cont == 9) {
				sinopsis = line;
			}

			// guarda la variable de la direcci�n
			if (cont == 10) {
				direccion = line;
			}

			// guarda la variable del reparto
			if (cont == 11) {
				reparto = line;
			}

			// guarda la variable de el/los g�neros
			if (cont == 12) {
				generos = line;
			}

			// guarda la variable de los idiomas de los subt�tulos
			if (cont == 13) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (cont == 14) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (cont == 15) {
				mas_info = line;
			}

			// guarda la variable de los productores
			if (cont == 16) {
				productores = line;
			}

			// guarda la variable del estudio
			if (cont == 17) {
				estudio = line;
			}

			// guarda la variable de la edad m�nima
			if (cont == 18) {
				calf_edades = line;
			}

			// guarda la variable de las advertencias de contenido
			if (cont == 19) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (cont == 20) {
				actores_secundarios = line;
			}

			cont++;
		}

		/* si el g�nero ingresado por el usuario existe en la informaci�n del g�nero de la
		pel�cula entonces se despliega toda la pel�cula, si no contiene el g�nero solicitado
		entonces no se imprimen las variables y se lee la siguiente fila del archivo*/
		if (generos.find(gen) != std::string::npos) {
			SetConsoleTextAttribute(hConsole, 10); // el t�tulo se imprime de color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl;
			SetConsoleTextAttribute(hConsole, 15); // cuando ya se termin� de imprimir el color se devuelve a blanco
			cout << endl;
			cout << duracion << "  " << anio << "  " << calf << endl;
			cout << endl;
			cout << sinopsis << endl;
			cout << endl;
			cout << direccion << endl;
			cout << reparto << endl;
			cout << generos << endl;
			cout << subtitulos << endl;
			cout << idiomas << endl;
			cout << endl;
			cout << endl;
			cout << mas_info << endl;
			cout << endl;
			cout << productores << endl;
			cout << estudio << endl;
			cout << calf_edades << endl;
			cout << advertencias << endl;
			cout << actores_secundarios << endl;
			cout << endl;
			cout << "1996-2021, Amazon.com, Inc. o sus filiales." << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
		}

		// cuando termine de imprimir todos los detalles de la pel�cula va a dar saltos de l�nea para que no se amontone con la pr�xima
		cont = 0;
	}


	lectura.close();
}

void Pelicula::seleccionar_calificacion() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;
	float calificacion, calf_float;
	bool is_movie = false;
	string line;
	int cont = 0;

	while (true) {
		try {
			cout << endl;
			cout << "Ingrese la calificacion minima de las peliculas (1-5):" << endl;
			cin >> calificacion;
			cout << endl;
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


	ifstream lectura("peliculas.txt"); // abre el archivo para leer cuyo nombre es "peliculas.txt"

	//variables del t�tulo
	string t1, t2, t3, t4, t5, t6;

	//informacion de la pelicula
	string duracion, anio, calf, sinopsis, direccion, reparto, generos, subtitulos, idiomas;

	//mas informacion de la pel�cula
	string mas_info, productores, estudio, calf_edades, advertencias, actores_secundarios;

	while (getline(lectura, line)) {
		stringstream X(line);

		/* va a guardar las variables de la pel�cula. Si la calificaci�n de la pel�cula es mayor o igual
		a la ingresada por el usuario entonces se imprimen las variables de la pel�cula*/
		while (getline(X, line, '*')) {

			// guarda las variables del t�tulo de la pel�cula
			if (cont == 0)
			{
				t1 = line;
			}
			else if (cont == 1) {
				t2 = line;
			}
			else if (cont == 2) {
				t3 = line;
			}
			else if (cont == 3) {
				t4 = line;
			}
			else if (cont == 4) {
				t5 = line;
			}
			else if (cont == 5) {
				t6 = line;
			}

			// guarda la variable de la duraci�n
			if (cont == 6) {
				duracion = line;
			}

			// guarda la variable del a�o de estreno
			if (cont == 7) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (cont == 8) {
				calf = line;
			}

			// guarda la variable de la sinopsis
			if (cont == 9) {
				sinopsis = line;
			}

			// guarda la variable de la direcci�n
			if (cont == 10) {
				direccion = line;
			}

			// guarda la variable del reparto
			if (cont == 11) {
				reparto = line;
			}

			// guarda la variable de el/los g�neros
			if (cont == 12) {
				generos = line;
			}

			// guarda la variable de los idiomas de los subt�tulos
			if (cont == 13) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (cont == 14) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (cont == 15) {
				mas_info = line;
			}

			// guarda la variable de los productores
			if (cont == 16) {
				productores = line;
			}

			// guarda la variable del estudio
			if (cont == 17) {
				estudio = line;
			}

			// guarda la variable de la edad m�nima
			if (cont == 18) {
				calf_edades = line;
			}

			// guarda la variable de las advertencias de contenido
			if (cont == 19) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (cont == 20) {
				actores_secundarios = line;
			}

			cont++;
		}

		// la calificaci�n obtenida del archivo se convierte de string a entero
		calf_float = stof(calf);

		/* si la calificaci�n de la pel�cula es mayor o igual a la ingresada por el usuario entonces
		se imprimen sus datos*/
		if (calf_float >= calificacion) {
			SetConsoleTextAttribute(hConsole, 10); // se imprime el t�tulo de la pel�cula en color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl;
			SetConsoleTextAttribute(hConsole, 15); // cuando se termine de imprimir el t�tulo se devuelve el color a blanco
			cout << endl;
			cout << duracion << "  " << anio << "  " << calf << endl;
			cout << endl;
			cout << sinopsis << endl;
			cout << endl;
			cout << direccion << endl;
			cout << reparto << endl;
			cout << generos << endl;
			cout << subtitulos << endl;
			cout << idiomas << endl;
			cout << endl;
			cout << endl;
			cout << mas_info << endl;
			cout << endl;
			cout << productores << endl;
			cout << estudio << endl;
			cout << calf_edades << endl;
			cout << advertencias << endl;
			cout << actores_secundarios << endl;
			cout << endl;
			cout << "1996-2021, Amazon.com, Inc. o sus filiales." << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			is_movie = true;
		}

		// cuando termine de imprimir todos los detalles de la pel�cula va a dar saltos de l�nea para que no se amontone con la pr�xima
		cont = 0;
	}

	if (is_movie == false) {
		cout << endl;
		cout << "Ninguna pelicula tiene la calificacion minima ingresada." << endl;
	}

	lectura.close();
}

void Pelicula::calificar_video() {
	cout << endl;
	cout << endl;
	float calf_resenia;
	string opc, pelicula, pelicula_aux, line;
	//variables del t�tulo
	string t1, t2, t3, t4, t5, t6;

	//informacion de la pelicula
	string duracion, anio, calf, sinopsis, direccion, reparto, generos, subtitulos, idiomas;

	//mas informacion de la pel�cula
	string mas_info, productores, estudio, calf_edades, advertencias, actores_secundarios;
	cin.ignore();
	while (true) {
		try {
			cout << "Ingrese el nombre de la pelicula que desea calificar:" << endl;
			cout << endl;
			cout << "1.   Spiderman" << endl;
			cout << "2.   Mortal Kombat" << endl;
			cout << "3.   La maldicion de la Llorona" << endl;
			cout << "4.   Shrek" << endl;
			cout << "5.   El Lobo De Wall Street" << endl;
			cout << "6.   Diario de una Pasion" << endl;
			cout << "7.   Saw" << endl;
			cout << "8.   Los Croods 2: Una Nueva Era" << endl;
			cout << "9.   Chiquito pero peligroso" << endl;
			cout << "10.  Yo antes de ti" << endl;
			getline(cin, opc);

			if (opc == "1") {
				pelicula = "Spiderman";
			}
			else if (opc == "2") {
				pelicula = "Mortal Kombat";
			}
			else if (opc == "3") {
				pelicula = "La maldicion de la Llorona";
			}
			else if (opc == "4") {
				pelicula = "Shrek";
			}
			else if (opc == "5") {
				pelicula = "El Lobo De Wall Street";
			}
			else if (opc == "6") {
				pelicula = "Diario de una Pasion";
			}
			else if (opc == "7") {
				pelicula = "Saw";
			}
			else if (opc == "8") {
				pelicula = "Los Croods 2: Una Nueva Era";
			}
			else if (opc == "9") {
				pelicula = "Chiquito pero peligroso";
			}
			else if (opc == "10") {
				pelicula = "Yo antes de ti";
			}
			else throw InvalidOption(opc);

			// resenia
			while (true) {
				try {
					cout << endl;
					cout << "Ingrese la calificacion deseada (1-5):" << endl;
					cin >> calf_resenia;
					cout << endl;
					cout << endl;

					if (calf_resenia < 1) {
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
					else {
						break;
					}

				}
				catch (InvalidOption obj) {
					cout << endl;
					cout << obj.what();
					cout << endl;
				}
			}

			ifstream lectura("peliculas.txt"); // abre el archivo para leer cuyo nombre es "peliculas.txt"
			ofstream escritura("peliculas_aux.txt", ios::out); // abre el archivo para escribir cuyo nombre es "peliculas_aux.txt"


			while (getline(lectura, line)) { // lee cada fila del archivo 
				stringstream X(line);
				int cont = 0;

				while (getline(X, line, '*')) {

					// guarda las variables del t�tulo de la pel�cula
					if (cont == 0)
					{
						t1 = line;
					}
					else if (cont == 1) {
						t2 = line;
					}
					else if (cont == 2) {
						t3 = line;
					}
					else if (cont == 3) {
						t4 = line;
					}
					else if (cont == 4) {
						t5 = line;
					}
					else if (cont == 5) {
						t6 = line;
					}

					// guarda la variable de la duraci�n
					if (cont == 6) {
						duracion = line;
					}

					// guarda la variable del a�o de estreno
					if (cont == 7) {
						anio = line;
					}

					// guarda la variable de la calificaci�n
					if (cont == 8) {
						calf = line;
					}

					// guarda la variable de la sinopsis
					if (cont == 9) {
						sinopsis = line;
					}

					// guarda la variable de la direcci�n
					if (cont == 10) {
						direccion = line;
					}

					// guarda la variable del reparto
					if (cont == 11) {
						reparto = line;
					}

					// guarda la variable de el/los g�neros
					if (cont == 12) {
						generos = line;
					}

					// guarda la variable de los idiomas de los subt�tulos
					if (cont == 13) {
						subtitulos = line;
					}

					// guarda la variable de los idiomas de audio
					if (cont == 14) {
						idiomas = line;
					}

					// guarda la variable de m�s detalles
					if (cont == 15) {
						mas_info = line;
					}

					// guarda la variable de los productores
					if (cont == 16) {
						productores = line;
					}

					// guarda la variable del estudio
					if (cont == 17) {
						estudio = line;
					}

					// guarda la variable de la edad m�nima
					if (cont == 18) {
						calf_edades = line;
					}

					// guarda la variable de las advertencias de contenido
					if (cont == 19) {
						advertencias = line;
					}

					// guarda la variable de los actores secundarios
					if (cont == 20) {
						actores_secundarios = line;
					}

					// guarda la variable de la pel�cula
					if (cont == 21) {
						pelicula_aux = line;
					}

					cont++;
				}

				// si la fila actual es de la pel�cula deseada entonces se modificar� la calificaci�n y despu�s se agregar�
				if (pelicula == pelicula_aux) {
					Resenia r1;
					Resenia r2(calf_resenia); // se guardan los valores de la rese�a ingresada por el usuario en el objeto r2
					Resenia r3;

					r1.setCalf(pelicula, calf_resenia); // se guardan los valores de la rese�a en el objeto r1

					r3 = r1 + r2; // sobrecarga de operadores


					// agregar los nuevos datos al archivo auxiliar
					escritura << t1 << "*" << t2 << "*" << t3 << "*" << t4 << "*" << t5 << "*" << t6 << "*" << duracion << "*" << anio << "*" << r3.getCalf() << "*" << sinopsis << "*" << direccion << "*" << reparto << "*" << generos << "*" << subtitulos << "*" << idiomas << "*" << mas_info << "*" << productores << "*" << estudio << "*" << calf_edades << "*" << advertencias << "*" << actores_secundarios << "*" << pelicula_aux << endl;
				}
				else { // si la fila actual no es de la pel�cula deseada entonces los datos se agregan simplemente al nuevo archivo
					escritura << t1 << "*" << t2 << "*" << t3 << "*" << t4 << "*" << t5 << "*" << t6 << "*" << duracion << "*" << anio << "*" << calf << "*" << sinopsis << "*" << direccion << "*" << reparto << "*" << generos << "*" << subtitulos << "*" << idiomas << "*" << mas_info << "*" << productores << "*" << estudio << "*" << calf_edades << "*" << advertencias << "*" << actores_secundarios << "*" << pelicula_aux << endl;
				}
			}

			escritura.close();
			lectura.close();
			remove("peliculas.txt");
			rename("peliculas_aux.txt", "peliculas.txt");

			break;
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what();
			cout << endl;
			cout << endl;
		}
	}
}

void Pelicula::peliculas_y_series_calf() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;
	float calificacion, calf_float;
	bool is_movie = false, is_serie = false;
	string line;
	int cont = 0;

	while (true) {
		try {
			cout << "Ingrese la calificacion minima de las series y peliculas (1-5):" << endl;
			cin >> calificacion;
			cout << endl;

			if (calificacion < 1) {
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
			else {
				break;

			}
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what() << endl;
			cout << endl;
		}
	}


	ifstream lectura("peliculas.txt"); // abre el archivo para leer cuyo nombre es "peliculas.txt"

	//variables del t�tulo
	string t1, t2, t3, t4, t5, t6;

	//informacion de la pelicula
	string duracion, anio, calf, sinopsis, direccion, reparto, generos, subtitulos, idiomas;

	//mas informacion de la pel�cula
	string mas_info, productores, estudio, calf_edades, advertencias, actores_secundarios;

	// varibales de las series
	string temps, red, edades, actores_sec, nombre;

	while (getline(lectura, line)) {
		stringstream X(line);

		/* va a guardar las variables de la pel�cula. Si la calificaci�n de la pel�cula es mayor o igual
		a la ingresada por el usuario entonces se imprimen las variables de la pel�cula*/
		while (getline(X, line, '*')) {

			// guarda las variables del t�tulo de la pel�cula
			if (cont == 0)
			{
				t1 = line;
			}
			else if (cont == 1) {
				t2 = line;
			}
			else if (cont == 2) {
				t3 = line;
			}
			else if (cont == 3) {
				t4 = line;
			}
			else if (cont == 4) {
				t5 = line;
			}
			else if (cont == 5) {
				t6 = line;
			}

			// guarda la variable de la duraci�n
			if (cont == 6) {
				duracion = line;
			}

			// guarda la variable del a�o de estreno
			if (cont == 7) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (cont == 8) {
				calf = line;
			}

			// guarda la variable de la sinopsis
			if (cont == 9) {
				sinopsis = line;
			}

			// guarda la variable de la direcci�n
			if (cont == 10) {
				direccion = line;
			}

			// guarda la variable del reparto
			if (cont == 11) {
				reparto = line;
			}

			// guarda la variable de el/los g�neros
			if (cont == 12) {
				generos = line;
			}

			// guarda la variable de los idiomas de los subt�tulos
			if (cont == 13) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (cont == 14) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (cont == 15) {
				mas_info = line;
			}

			// guarda la variable de los productores
			if (cont == 16) {
				productores = line;
			}

			// guarda la variable del estudio
			if (cont == 17) {
				estudio = line;
			}

			// guarda la variable de la edad m�nima
			if (cont == 18) {
				calf_edades = line;
			}

			// guarda la variable de las advertencias de contenido
			if (cont == 19) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (cont == 20) {
				actores_secundarios = line;
			}

			cont++;
		}

		// la calificaci�n obtenida del archivo se convierte de string a entero
		calf_float = stof(calf);

		/* si la calificaci�n de la pel�cula es mayor o igual a la ingresada por el usuario entonces
		se imprimen sus datos*/
		if (calf_float >= calificacion) {
			SetConsoleTextAttribute(hConsole, 10); // se imprime el t�tulo de la pel�cula de color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl;
			SetConsoleTextAttribute(hConsole, 15); // cuando se termine de imprimir el t�tulo el color del texto se devuelve a blanco
			cout << endl;
			cout << duracion << "  " << anio << "  " << calf << endl;
			cout << endl;
			cout << sinopsis << endl;
			cout << endl;
			cout << direccion << endl;
			cout << reparto << endl;
			cout << generos << endl;
			cout << subtitulos << endl;
			cout << idiomas << endl;
			cout << endl;
			cout << endl;
			cout << mas_info << endl;
			cout << endl;
			cout << productores << endl;
			cout << estudio << endl;
			cout << calf_edades << endl;
			cout << advertencias << endl;
			cout << actores_secundarios << endl;
			cout << endl;
			cout << "1996-2021, Amazon.com, Inc. o sus filiales." << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			is_movie = true;
		}

		// cuando termine de imprimir todos los detalles de la pel�cula va a dar saltos de l�nea para que no se amontone con la pr�xima
		cont = 0;
	}

	if (is_movie == false) {
		cout << endl;
		cout << "Ninguna pelicula tiene la calificacion minima ingresada." << endl;
		cout << endl;
		cout << endl;
	}

	lectura.close();


	// Buscar e imprimir las series con la calificaci�n m�nima

	int contcols = 0;
	ifstream lectura2("series.txt"); // abre el archivo para leer cuyo nombre es "series.txt"
	// contador de temporadas
	int cont_temps = 1;

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

		calf_float = stof(calf); // se convierte de string a float la calificacion obtenida del archivo

		/* si la calificaci�n de la pel�cula es mayor o igual a la solicitada
		por el usuario entonces se imprime toda su informaci�n*/
		if (calf_float >= calificacion) {
			is_serie = true;
			cout << endl;
			cout << endl;
			cout << endl;
			SetConsoleTextAttribute(hConsole, 10); // imprime el t�tulo de la serie de color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl;
			SetConsoleTextAttribute(hConsole, 15); // cuando termine de imprimir el t�tulo el color de texto se devuelve a blanco
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
		cout << endl;
		cout << endl;
	}

	lectura2.close();
}

void Pelicula::peliculas_y_series_genero() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;

	bool is_serie = false;
	int respuesta;
	string gen;
	while (true) {
		try {
			cout << endl;
			cout << endl;
			cout << "Ingrese el genero de las series y peliculas que desea visualizar:" << endl;
			cout << "1. Drama" << endl;
			cout << "2. Comedia" << endl;
			cout << "3. Romance" << endl;
			cout << "4. Fantasia" << endl;
			cout << "5. Ciencia ficcion" << endl;
			cout << "6. Accion" << endl;
			cout << "7. Aventura" << endl;
			cout << "8. Terror" << endl;
			cout << "9. Infantil" << endl;

			cin >> respuesta;

			if (respuesta == 1) {
				gen = "Drama";
				break;
			}
			else if (respuesta == 2) {
				gen = "Comedia";
				break;
			}
			else if (respuesta == 3) {
				gen = "Romance";
				break;
			}
			else if (respuesta == 4) {
				gen = "Fantasia";
				break;
			}
			else if (respuesta == 5) {
				gen = "Ciencia ficcion";
				break;
			}
			else if (respuesta == 6) {
				gen = "Accion";
				break;
			}
			else if (respuesta == 7) {
				gen = "Aventura";
				break;
			}
			else if (respuesta == 8) {
				gen = "Terror";
				break;
			}
			else if (respuesta == 9) {
				gen = "Infantil";
				break;
			}
			else {
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

	ifstream lectura("peliculas.txt"); // abre el archivo para leer cuyo nombre es "peliculas.txt"
	string line;
	int cont = 0;

	//variables del t�tulo
	string t1, t2, t3, t4, t5, t6;

	//informacion de la pelicula
	string duracion, anio, calf, sinopsis, direccion, reparto, generos, subtitulos, idiomas;

	//mas informacion de la pel�cula
	string mas_info, productores, estudio, edades, advertencias, actores_secundarios;

	while (getline(lectura, line)) {
		stringstream X(line);

		/* va a guardar las variables de la pel�cula. Si el g�nero ingresado por el usuario existe
		en la informaci�n de los g�neros de la pel�cula entonces se van a imprimir todas las variables
		de la pel�cula y va a continuar leyendo la siguiente fila del archivo*/
		while (getline(X, line, '*')) {

			// guarda las variables del t�tulo de la pel�cula
			if (cont == 0)
			{
				t1 = line;
			}
			else if (cont == 1) {
				t2 = line;
			}
			else if (cont == 2) {
				t3 = line;
			}
			else if (cont == 3) {
				t4 = line;
			}
			else if (cont == 4) {
				t5 = line;
			}
			else if (cont == 5) {
				t6 = line;
			}

			// guarda la variable de la duraci�n
			if (cont == 6) {
				duracion = line;
			}

			// guarda la variable del a�o de estreno
			if (cont == 7) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (cont == 8) {
				calf = line;
			}

			// guarda la variable de la sinopsis
			if (cont == 9) {
				sinopsis = line;
			}

			// guarda la variable de la direcci�n
			if (cont == 10) {
				direccion = line;
			}

			// guarda la variable del reparto
			if (cont == 11) {
				reparto = line;
			}

			// guarda la variable de el/los g�neros
			if (cont == 12) {
				generos = line;
			}

			// guarda la variable de los idiomas de los subt�tulos
			if (cont == 13) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (cont == 14) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (cont == 15) {
				mas_info = line;
			}

			// guarda la variable de los productores
			if (cont == 16) {
				productores = line;
			}

			// guarda la variable del estudio
			if (cont == 17) {
				estudio = line;
			}

			// guarda la variable de la edad m�nima
			if (cont == 18) {
				edades = line;
			}

			// guarda la variable de las advertencias de contenido
			if (cont == 19) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (cont == 20) {
				actores_secundarios = line;
			}

			cont++;
		}

		/* si el g�nero ingresado por el usuario existe en la informaci�n del g�nero de la
		pel�cula entonces se despliega toda la pel�cula, si no contiene el g�nero solicitado
		entonces no se imprimen las variables y se lee la siguiente fila del archivo*/
		if (generos.find(gen) != std::string::npos) {
			SetConsoleTextAttribute(hConsole, 10); // imprime el t�tulo de la pel�cula de color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl; // cuando termine de imprimir el t�tulo el color de texto se regresa a blanco
			SetConsoleTextAttribute(hConsole, 15);
			cout << endl;
			cout << duracion << "  " << anio << "  " << calf << endl;
			cout << endl;
			cout << sinopsis << endl;
			cout << endl;
			cout << direccion << endl;
			cout << reparto << endl;
			cout << generos << endl;
			cout << subtitulos << endl;
			cout << idiomas << endl;
			cout << endl;
			cout << endl;
			cout << mas_info << endl;
			cout << endl;
			cout << productores << endl;
			cout << estudio << endl;
			cout << edades << endl;
			cout << advertencias << endl;
			cout << actores_secundarios << endl;
			cout << endl;
			cout << "1996-2021, Amazon.com, Inc. o sus filiales." << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
		}

		// cuando termine de imprimir todos los detalles de la pel�cula va a dar saltos de l�nea para que no se amontone con la pr�xima
		cont = 0;
	}
	lectura.close();

	// imprimiendo las series con un determinado g�nero

	ifstream lectura2("series.txt"); // abre el archivo para leer cuyo nombre es "series.txt"
	// contador de temporadas
	int cont_temps = 1;
	string temps, red, nombre;


	// INSERTAR EXCEPCION SI EL USUARIO INTRODUCE UN DATO INVALIDO


	while (getline(lectura2, line)) { // lee cada fila del archivo
		stringstream X(line);

		while (getline(X, line, '*')) { // lee cada columna de la fila actual

			// guarda la variable del titulo
			if (cont == 0) {
				t1 = line;
			}

			// guarda la variable del titulo
			if (cont == 1) {
				t2 = line;
			}

			// guarda la variable del titulo
			if (cont == 2) {
				t3 = line;
			}

			// guarda la variable del titulo
			if (cont == 3) {
				t4 = line;
			}

			// guarda la variable del titulo
			if (cont == 4) {
				t5 = line;
			}

			// guarda la variable del titulo
			if (cont == 5) {
				t6 = line;
			}

			// guarda la variable del anio
			if (cont == 6) {
				anio = line;
			}

			// guarda la variable de la calificaci�n
			if (cont == 7) {
				calf = line;
			}

			// guarda la variable del n�mero de temporadas
			if (cont == 8) {
				temps = line;
			}

			// guarda la variable de la sinopsis
			if (cont == 9) {
				sinopsis = line;
			}

			// guarda la variable del reparto
			if (cont == 10) {
				reparto = line;
			}

			// guarda la variable de los generos
			if (cont == 11) {
				generos = line;
			}

			// guarda la varibale de los subtitulos
			if (cont == 12) {
				subtitulos = line;
			}

			// guarda la variable de los idiomas de audio
			if (cont == 13) {
				idiomas = line;
			}

			// guarda la variable de m�s detalles
			if (cont == 14) {
				mas_info = line;
			}

			// iguarda la variable de los productores
			if (cont == 15) {
				productores = line;
			}

			// guarda la variable de la red
			if (cont == 16) {
				red = line;
			}

			// guarda la variable de calificacion por edades
			if (cont == 17) {
				edades = line;
			}

			// guarda la variable de las advertencias
			if (cont == 18) {
				advertencias = line;
			}

			// guarda la variable de los actores secundarios
			if (cont == 19) {
				actores_secundarios = line;
			}

			// guarda la variable del nombre de la serie
			if (cont == 20) {
				nombre = line;
				/* se rompe el ciclo porque a partir del contador 20 se leen los cap�tulos y temporadas,
				primero se debe comprobar si la fila actual corresponde a la serie solicitada por el usuario*/
				break;
			}

			cont++;
		}

		// si la serie solicitada por el usuario coincide con la fila actual entonces se imprime su informaci�n
		if (generos.find(gen) != std::string::npos) {
			is_serie = true;
			SetConsoleTextAttribute(hConsole, 10); // imprime el color de la serie en color verde
			cout << t1 << endl;
			cout << t2 << endl;
			cout << t3 << endl;
			cout << t4 << endl;
			cout << t5 << endl;
			cout << t6 << endl;
			SetConsoleTextAttribute(hConsole, 15); // cuando termine de imprimir el t�tulo el color del texto se regresa a blanco
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
			cout << actores_secundarios << endl;


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
		cont = 0;
	}

	if (is_serie == false) {
		cout << endl;
		cout << "No se encontraron series del genero " << gen << endl;
		cout << endl;
		cout << endl;
	}

	lectura2.close();

}