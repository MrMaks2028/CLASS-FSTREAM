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
			case 'a': case 'A': system("cls"); cout << "������: " << sym << endl;
			}
			system("cls");
			cout << "������: " << sym << endl;
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

	//������ 1
	/*cout << "������ 1.\n������� �����: ";
	cin >> n;
	cout << "���������� ����� � ������� " << n << ":\n";
	cout << subfile(path, n);*/

	//������ 2
	/*cout << "������ 2.\n";
	int day, month, year;

	ifstream in;
	in.open("date.txt");
	if (in.is_open()) {
		cout << "���� ������ ��� ����������\n";
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
		cout << "������ �������� �����\n";*/

	/*string path = "file.txt";
	fstream fs;

	// �������� �� ������� �����
	fs.open(path, ios::app);
	fs.close();

	fs.open(path, ios::in | ios::app);

	// ���������� ������ � ����� ����� � ���������� ��� �����������
	if (fs.is_open()) {
		cout << "���� ������\n";
		string str;
		cout << "������� ������:\n";
		getline(cin, str);
		fs << str << "\n";
		fs.seekg(0, ios::beg);
		cout << "���������� �����:\n";
		while (!fs.eof()) {
			getline(fs, str);
			cout << str << endl;
		}
	}
	else
		cout << "������ �������� �����\n";

	fs.close();

	// ��������� ���� ��� ����������� ������ �� ����
	fs.open(path, ios::in);
	string fileTxt; // ������, ������� ����� ������� � ���� ���������� ������
	if (fs.is_open()) {
		cout << "���� ������ ��� ������\n";
		string str;
		while (!fs.eof()) {
			getline(fs, str);
			fileTxt += str + "\n";
		}
		cout << fileTxt;
	}
	else
		cout << "������ �������� �����\n";
	fs.close();

	// ��������� ����� ������ � �������� ������ � ���������� �����
	fileTxt.insert(10, "\nNEW LINE\n");

	// ��������� ���� ����� �������� ��� � ��������� � ����
	// ���������� ������ fileTxt
	fs.open(path, ios::out);
	if (fs.is_open()) {
		cout << "���� ������ ��� ������\n";
		fs << fileTxt;
		cout << "���� �������\n";
	}
	else
		cout << "������ �������� �����\n";
	fs.close();*/

	return 0;
}