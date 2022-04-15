#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "windows.h"
using namespace std;

string subfile(string path, int pos) {
	ifstream in;
	in.open(path);
	if (in.is_open()) {
		string res;
		in.seekg(pos, ios::beg);
		char sym;
		while (in.get(sym))
			res += sym;
		in.close();
		return res;
	}
	in.close();
	return "";

}

int timer = 0;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	system("pause");

	char sym;
	while (true) {
		if(_kbhit()){
			sym = _getch();
			switch (sym) {
			case 'a': case 'A': system("cls"); cout << "Нажато: " << sym << endl;
			}
			system("cls");
			cout << "Нажато: " << sym << endl;
		}
		if(timer >= 1000){
			cout << ".\n";
			timer = 0;
		}
		cout << ".\n";
		Sleep(100);
		timer += 100;
	}















	string path = "file.txt";

	//Задача 1
	/*cout << "Задача 1.\nВведите число: ";
	cin >> n;
	cout << "Содержимое файла с позиции " << n << ":\n";
	cout << subfile(path, n);*/

	//Задача 2
	/*cout << "Задача 2.\n";
	int day, month, year;

	ifstream in;
	in.open("date.txt");
	if (in.is_open()) {
		cout << "Файл октрыт для считывания\n";
		string date;
		in >> date;
		cout << date << endl;
		year = stoi(date.substr(date.rfind('.') + 1));
		day = stoi(date);
		month = stoi(date.substr(date.find('.') + 1));
		cout << "Day = " << day << endl;
		cout << "Mounth = " << month << endl;
		cout << "Year = " << year << endl;
	}
	else
		cout << "Ошибка открытия файла\n";*/

	/*string path = "file.txt";
	fstream fs;

	// Проверка на наличие файла
	fs.open(path, ios::app);
	fs.close();

	fs.open(path, ios::in | ios::app);

	// Добавление записи в конец файла и считывание его содержимого
	if (fs.is_open()) {
		cout << "Файл открыт\n";
		string str;
		cout << "Введите строку:\n";
		getline(cin, str);
		fs << str << "\n";
		fs.seekg(0, ios::beg);
		cout << "Содержимое файла:\n";
		while (!fs.eof()) {
			getline(fs, str);
			cout << str << endl;
		}
	}
	else
		cout << "Ошибка открытия файла\n";

	fs.close();

	// открываем файл для копирования данных из него
	fs.open(path, ios::in);
	string fileTxt; // строка, которая будет хранить в себе содержимое файлов
	if (fs.is_open()) {
		cout << "Файл открыт для чтения\n";
		string str;
		while (!fs.eof()) {
			getline(fs, str);
			fileTxt += str + "\n";
		}
		cout << fileTxt;
	}
	else
		cout << "Ошибка открытия файла\n";
	fs.close();

	// добавляем новую строку в середину строки с содержимым файла
	fileTxt.insert(10, "\nNEW LINE\n");

	// октрываем файл чтобы очистить его и загрузить в него
	// содержимое строки fileTxt
	fs.open(path, ios::out);
	if (fs.is_open()) {
		cout << "Файл открыт для записи\n";
		fs << fileTxt;
		cout << "Файл обновлён\n";
	}
	else
		cout << "Ошибка открытия файла\n";
	fs.close();*/

	return 0;
}