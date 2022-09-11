#include <iostream>
using namespace std;

//	Kalkulator with C++
//	Made by XI-RPL

int tambah(float a, float b){
	return a + b;
}

int kurang(float a, float b){
	return a - b;
}

int kali(float a, float b){
	return a * b;
}

int bagi(float a, float b){
	return a / b;
}

int modulo(int a, int b){
	return a % b;
}

int main(){
	system("cls");
	system("clear");
	int pilihan;
	float a, b;
	string banner = "===========================\n";
	std::cout << banner << "      KALKULATOR C++\n" << banner << std::endl;
	std::cout << "Masukan Bilangan pertama> ";
	std::cin >> a;
	std::cout << "Masukan Bilangan kedua> ";
	std::cin >> b;
	std::cout << "Masukan Pilihan:" << std::endl;
	std::cout << "1.)Tambah\n2.)Kurang\n3.)Kali\n4.)Bagi\n5.)Modulus\n6.)Keluar" << std::endl;
	std::cout << "> ";
	std::cin >> pilihan;
	if(pilihan == 1){
		std::cout << banner << "Hasil " << a << " + " << b << " = " << tambah(a, b) << "\n" << banner << std::endl;
	}
	else if(pilihan == 2){
		std::cout << banner << "Hasil " << a << " - " << b << " = " << kurang(a, b) << "\n" << banner << std::endl;
	}
	else if(pilihan == 3){
		std::cout << banner << "Hasil " << a << " x " << b << " = " << kali(a, b) << "\n" << banner << std::endl;
	}
	else if(pilihan == 4){
		std::cout << banner << "Hasil " << a << " / " << b << " = " << bagi(a, b) << "\n" << banner << std::endl;
	}
	else if(pilihan == 5){
		std::cout << banner << "Hasil " << a << " % " << b << " = " << modulo(a, b) << "\n" << banner << std::endl;
	}
	else if(pilihan == 6){
		std::cout << banner << "       TERIMAKASIH\n" << banner << std::endl;
	}
	else{
		std::cout << "Maaf, pilihan yang anda masukan tidak ada dalam list!" << std::endl;
	}
}
