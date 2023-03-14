#include <iostream>
#include <string>

char choice;

class EnterWebsite {
public:
	void createAccount() {
		std::cout << "\nCREATE ACCOUNT : \n";
		std::cout << "Enter your username\n";
		std::cin >> username;
		std::cout << "Enter your password\n";
		std::cin >> password;
		std::cout << "Enter your email\n";
		std::cin >> email;
	};

	void Login() {
		std::cout << "\nLOGIN : \n";
		std::cout << "Enter your username\n";
		std::cin >> tempUsername;
		std::cout << "Enter your password\n";
		std::cin >> tempPassword;

		if (tempUsername == username and tempPassword == password) {
			std::cout << "Welcome " << username << "\n";
		}

		else if (tempUsername != username and tempPassword != password) {
			std::cout << "USERNAME OR PASSWORD INCORRECT\n";
			Login();
		}
		else if (tempUsername == username) {
			std::cout << "PASSWORD INCORRECT\nWant to reset your password? (y/n) ";
			std::cin >> choice;
			if (choice == 'y') {
				std::cout << "\nEnter your new password\n";
				std::cin >> password;
			}
			Login();
		}
		else {
			std::cout << "USERNAME INCORRECT\n";
			Login();
		}
	}
	

	void enterWebsite() {
		std::cout << "\nDo you already have an account? (y/n) ";
		std::cin >> choice;
		if (choice == 'y') {
			Login();
		}
		else if (choice == 'n') {
			createAccount();
			Login();
		}
		restart();
	}

	void restart() {
		std::cout << "\nWant to restart? (y/n) ";
		std::cin >> choice;
		if (choice == 'y') {
			enterWebsite();
		}
	}

	std::string username;
	std::string password;
	std::string email;

	std::string tempUsername;
	std::string tempPassword;
	std::string tepEmail;

};

class Dados {
public:
	void Human() {
			std::cout << "NOME : ";
			std::cin >> name;
			std::cout << "\nIDADE : ";
			std::cin >> age;
			std::cout << "\nALTURA : ";
			std::cin >> height;
			std::cout << "\nPESO : ";
			std::cin >> weight;
			ShowID();
	}

	void ShowID() {
		std::cout << "\nName : " << name << "\n";
		std::cout << "Age : " << age << " yrs old\n";
		std::cout << "Height : " << height << " meters tall\n";
		std::cout << "Weight : " << weight << " kg\n";
	}
private:

	std::string name;

	int age;

	float height;
	float weight;
};

int main(int argc, char** argv) {
	
	EnterWebsite gedo;
	gedo.enterWebsite();

	Dados dados;
	dados.Human();

	system("pause");

	return 0;
}
