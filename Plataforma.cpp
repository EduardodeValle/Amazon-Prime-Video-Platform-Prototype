#include "Plataforma.h"
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

Plataforma::Plataforma() {}

void Plataforma::bienvenida() {
	// imprime la bienvenida de color azul
	SetConsoleTextAttribute(hConsole, 11);
	cout << " _______     ______    ________    __    __    __     __    ________    __    __    ______    _______         ______              ______" << endl;
	cout << "|       \\   |      \\  |        \\  |  \\  |  \\  |  \\   |  \\  |        \\  |  \\  |  \\  |      \\  |       \\      _/      \\_           /      \\" << endl;
	cout << "| $$$$$$$\\   \\$$$$$$  | $$$$$$$$  | $$\\ | $$  | $$   | $$  | $$$$$$$$  | $$\\ | $$   \\$$$$$$  | $$$$$$$\\    /   $$$$$$ \\         |  $$$$$$\\" << endl;
	cout << "| $$__/ $$    | $$    | $$__      | $$$\\| $$  | $$   | $$  | $$__      | $$$\\| $$    | $$    | $$  | $$   /  $$$____$$$\\        | $$__| $$" << endl;
	cout << "| $$    $$    | $$    | $$  \\     | $$$$\\ $$   \\$$\\ /  $$  | $$  \\     | $$$$\\ $$    | $$    | $$  | $$  |  $$/     \\ $$\\       | $$    $$" << endl;
	cout << "| $$$$$$$\\    | $$    | $$$$$     | $$\\$$ $$    \\$$\\  $$   | $$$$$     | $$\\$$ $$    | $$    | $$  | $$  | $$|  $$$$$| $$       | $$$$$$$$" << endl;
	cout << "| $$__/ $$   _| $$_   | $$_____   | $$ \\$$$$     \\$$ $$    | $$_____   | $$ \\$$$$   _| $$_   | $$__/ $$  | $$| $$| $$| $$       | $$  | $$" << endl;
	cout << "| $$    $$  |   $$ \\  | $$     \\  | $$  \\$$$      \\$$$     | $$     \\  | $$  \\$$$  |   $$ \\  | $$    $$  | $$ \\$$  $$| $$       | $$  | $$" << endl;
	cout << " \\$$$$$$$    \\$$$$$$   \\$$$$$$$$   \\$$   \\$$       \\$       \\$$$$$$$$   \\$$   \\$$   \\$$$$$$   \\$$$$$$$    \\$$\\ \\$$$$$$$$         \\$$   \\$$" << endl;
	cout << "                                                                                                           \\$$\\ __/   \\" << endl;
	cout << "                                                                                                            \\$$$    $$$" << endl;
	cout << "                                                                                                              \\$$$$$$" << endl;
	cout << endl;
	cout << "        _______     _______     ______    __       __    ________        __     __    ______    _______     ________     ______" << endl;
	cout << "       |       \\   |       \\   |      \\  |  \\     /  \\  |        \\      |  \\   |  \\  |      \\  |       \\   |        \\   /      \\" << endl;
	cout << "       | $$$$$$$\\  | $$$$$$$\\   \\$$$$$$  | $$\\   /  $$  | $$$$$$$$      | $$   | $$   \\$$$$$$  | $$$$$$$\\  | $$$$$$$$  |  $$$$$$\\" << endl;
	cout << "       | $$__/ $$  | $$__| $$    | $$    | $$$\\ /  $$$  | $$__          | $$   | $$    | $$    | $$  | $$  | $$__      | $$  | $$" << endl;
	cout << "       | $$    $$  | $$    $$    | $$    | $$$$\\  $$$$  | $$  \\          \\$$\\ /  $$    | $$    | $$  | $$  | $$  \\     | $$  | $$" << endl;
	cout << "       | $$$$$$$   | $$$$$$$\\    | $$    | $$\\$$ $$ $$  | $$$$$           \\$$\\  $$     | $$    | $$  | $$  | $$$$$     | $$  | $$" << endl;
	cout << "       | $$        | $$  | $$   _| $$_   | $$ \\$$$| $$  | $$_____          \\$$ $$     _| $$_   | $$__/ $$  | $$_____   | $$__/ $$" << endl;
	cout << "       | $$        | $$  | $$  |   $$ \\  | $$  \\$ | $$  | $$     \\          \\$$$     |   $$ \\  | $$    $$  | $$     \\   \\$$    $$" << endl;
	cout << "        \\$$         \\$$   \\$$   \\$$$$$$   \\$$      \\$$   \\$$$$$$$$           \\$       \\$$$$$$   \\$$$$$$$    \\$$$$$$$$    \\$$$$$$" << endl;
	cout << endl;
	cout << "                                                                                         $$$" << endl;
	cout << "                                   _____                                             $$$$$$$$" << endl;
	cout << "			           \\$$$$\\				           $$$$$$$$$$" << endl;
	cout << "			 	    \\$$$$\\                                       $$  /$$/  $$" << endl;
	cout << "                                     \\$$$$$\\                                      /$$$$/  $$" << endl;
	cout << "                                       \\$$$$$$$$$\\                             /$$$$$$/" << endl;
	cout << "                                         \\$$$$$$$$$$$\\___________________/$$$$$$$$$$/" << endl;
	cout << "					       \\$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$/" << endl;
	cout << "                                                         $$$$$$$$$$$$$" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 15);
}

void Plataforma::iniciar_sesion() {
	string opc;
	string usuario, correo, contrasenia, correo_aux, contrasenia_aux;
	bool name_found = false; // si es falso significa que el nombre de usuario no existe
	bool password_match = false; // si es falso significa que las contrasenias no coinciden
	while (true) {
		try {
			bienvenida();
			cout << endl;
			cout << "1. Iniciar sesion" << endl;
			cout << "2. Crear cuenta" << endl;
			cin >> opc;

			if (opc == "1") {
				int strike = 0; // contador de las veces que se ingresó mal un correo
				cin.ignore();
				while (true) {
					cout << endl;
					cout << endl;

					cout << "Ingrese el correo electronico" << endl;

					getline(cin, correo);
					cout << endl;

					cout << "Ingrese la contrasenia" << endl;
					getline(cin, contrasenia);

					ifstream lectura("users.txt");
					string line;
					name_found = false; // si es falso significa que el nombre de usuario no existe
					password_match = false; // si es falso significa que las contrasenias no coinciden

					while (getline(lectura, line)) { // lee cada fila del archivo
						stringstream X(line);
						int cont = 0;

						while (getline(X, line, '*')) { // lee cada columna de la fila actual
							if (cont == 0) {
								correo_aux = line;
							}
							else if (cont == 1) {
								contrasenia_aux = line;
							}
							else if (cont == 2) {
								usuario = line;
							}
							else if (cont > 2) { // solo se van a leer los 3 primeros datos de la fila
								break;
							}
							cont++;
						}
						if (correo == correo_aux && contrasenia == contrasenia_aux) {
							name_found = true;
							password_match = true;
							break;
						}
					}
					if (name_found && password_match) { // es para salir del while más profundo
						break;
					}
					else {
						cout << endl;
						cout << "Los datos ingresados no coinciden o son inexistentes" << endl;
						cout << endl;
						strike++;
					}
					if (strike == 3){ // si se ingresaron mal los datos varias veces entonces regresa al inicio de sesion o registro
						cout << endl;
						throw InvalidOption("the user or password does not match");
						cout << endl;
						system("pause");
						system("cls");
						break;
					}
				}
				// si coincidieron los datos entonces ya se acaban los bucles y te lleva al menu de inicio
				if (name_found && password_match){
					cout << endl;
					system("cls");
					cout << endl;
					bienvenida();
					cout << endl;
					cout << "Bienvenid@ " << usuario << endl;
					cout << endl;
					break;
				}
			}
			else if (opc == "2") {
				while (true) {
					cout << endl;
					cout << endl;
					cout << "Ingrese el nombre de usuario" << endl;
					cin.ignore();
					getline(cin, usuario);
					cout << endl;
					cout << "Ingrese el correo electronico" << endl;
					getline(cin, correo);
					cout << endl;
					cout << "Ingrese la contrasenia" << endl;
					getline(cin, contrasenia);

					// abrir el archivo con usuarios para ver que el nombre de usuario no est� repetido
					ifstream lectura("users.txt");
					string line;
					bool name_found = false; // si es falso significa que el nombre de usuario no est� repetido

					while (getline(lectura, line)) { // lee cada fila del archivo
						stringstream X(line);
						int cont = 0;
						while (getline(X, line, '*')) { // lee cada elemento de la fila actual
							if (cont > 0) { // solamente va a leer el primer elemento de la fila
								break;
							}
							if (correo == line) {
								name_found = true;
							}
						}
					}

					// si el nombre de usuario ya existe entonces no lo agrega y el ciclo no se rompe hasta que se ingrese un nombre v�lido
					if (name_found) {
						cout << endl;
						cout << "El correo ingresado ya se encuentra en uso, introduzca otro por favor" << endl;
					}
					// si el nombre de usuario no existe entonces se agrega al archivo sin problemas
					else {
						ofstream escritura("users.txt", ios::out | ios::app);
						escritura << correo << "*" << contrasenia << "*" << usuario << endl;
						cout << endl;
						cout << "Bienvenid@ " << usuario << endl;
						cout << endl;
						escritura.close();
						break;
					}

					lectura.close();
				}
				break;
			}
			else if (opc != "1" && opc != "2") throw InvalidOption(opc);
		}
		catch (InvalidOption obj) {
			cout << endl;
			cout << obj.what();
			cout << endl;
			system("pause");
			system("cls");
		}
	}
}