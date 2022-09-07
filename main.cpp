#include "Plataforma.cpp"

int main() {
	Plataforma Amazon;
	Pelicula peliculas;
	Serie series;
	Amazon.iniciar_sesion();

	string respuesta;
	while (true) {
		try {
			cout << endl;
			cout << endl;
			cout << "Ingrese la opcion de su preferencia:" << endl;
			cout << endl;
			cout << "1.   Mostrar todas las peliculas" << endl;
			cout << "2.   Mostrar peliculas de un cierto genero" << endl;
			cout << "3.   Mostrar peliculas con una cierta calificacion" << endl;
			cout << "4.   Calificar una pelicula" << endl;
			cout << "5.   Mostrar todas las series" << endl;
			cout << "6.   Mostrar series de un cierto genero" << endl;
			cout << "7.   Mostrar series con una cierta calificacion" << endl;
			cout << "8.   Calificar una serie" << endl;
			cout << "9.   Mostrar peliculas y series de un cierto genero" << endl;
			cout << "10.  Mostrar peliculas y series con una cierta calificacion" << endl;
			cout << "0.   Salir de la cuenta" << endl;

			cin >> respuesta;

			if (respuesta == "0") {
				cout << endl;
				break;
			}
			else if (respuesta == "1") {
				peliculas.ver_videos();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "2") {
				peliculas.seleccionar_genero();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "3") {
				peliculas.seleccionar_calificacion();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "4") {
				peliculas.calificar_video();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "5") {
				series.ver_videos();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "6") {
				series.seleccionar_genero();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "7") {
				series.seleccionar_calificacion();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "8") {
				series.calificar_video();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "9") {
				peliculas.peliculas_y_series_genero();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else if (respuesta == "10") {
				peliculas.peliculas_y_series_calf();
				system("pause");
				system("cls");
				Amazon.bienvenida();
			}
			else throw InvalidOption(respuesta);
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what() << endl;
			cout << endl;
		}
	}

	system("pause");
	return 0;
}