#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int menu_1();
int menu_2();
int menu_3();
int menu_4();
int menu_5();
int menu_6();
int menu_7();
int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0: {int answer_1 = menu_1();
		switch (answer_1) {
		case 0: a1(); break;
		case 1: a2(); break;
		case 2: a3(); break;
		case 3: return 0;
		}
	}; break;
	case 1: {int answer_2 = menu_2();
		switch (answer_2) {
		case 0: a18(); break;
		case 1: a19(); break;
		case 2: a20(); break;
		case 3: return 0;
		}
	}; break;
	case 2: {int answer_3 = menu_3();
		switch (answer_3) {
		case 0: a51(); break;
		case 1: a52(); break;
		case 2: a53(); break;
		case 3: return 0;
		}
		}; break;
	case 3: {int answer_4 = menu_4();
		switch (answer_4) {
		case 0: a65(); break;
		case 1: a66(); break;
		case 2: a67(); break;
		case 3: return 0;
		}
		}; break;
	case 4: {int answer_5 = menu_5();
		switch (answer_5) {
		case 0: a112(); break;
		case 1: a113(); break;
		case 2: a114(); break;
		case 3: return 0;
		}
		}; break;
	case 5: {int answer_6 = menu_6();
		switch (answer_6) {
		case 0: a116(); break;
		case 1: a117(); break;
		case 2: a118(); break;
		case 3: return 0;
		}
		}; break;
	case 6: {int answer_7 = menu_7();
		switch (answer_7) {
		case 0: a131(); break;
		case 1: a132(); break;
		case 2: a133(); break;
		case 3: return 0;
		}
		}; break;
		system("pause");
		return 0;
	}
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 7) % 7;
		if (key == 0) cout << "-> Section1" << endl;
		else  cout << "   Section1" << endl;
		if (key == 1) cout << "-> Section2" << endl;
		else  cout << "   Section2" << endl;
		if (key == 2) cout << "-> Section3" << endl;
		else  cout << "   Section3" << endl;
		if (key == 3) cout << "-> Section4" << endl;
		else  cout << "   Section4" << endl;
		if (key == 4) cout << "-> Section5" << endl;
		else  cout << "   Section5" << endl;
		if (key == 5) cout << "-> Section6" << endl;
		else  cout << "   Section6" << endl;
		if (key == 6) cout << "-> Section7" << endl;
		else  cout << "   Section7" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_1() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> 1" << endl;
		else  cout << "   1" << endl;
		if (key == 1) cout << "-> 2" << endl;
		else  cout << "   2" << endl;
		if (key == 2) cout << "-> 3" << endl;
		else  cout << "   3" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_2() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "->18" << endl;
		else  cout << "   18" << endl;
		if (key == 1) cout << "-> 19" << endl;
		else  cout << "   19" << endl;
		if (key == 2) cout << "-> 20" << endl;
		else  cout << "   20" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_3() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> 51" << endl;
		else  cout << "   51" << endl;
		if (key == 1) cout << "-> 52" << endl;
		else  cout << "   52" << endl;
		if (key == 2) cout << "-> 53" << endl;
		else  cout << "   53" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
int menu_4() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> 65" << endl;
		else  cout << "   65" << endl;
		if (key == 1) cout << "-> 66" << endl;
		else  cout << "   66" << endl;
		if (key == 2) cout << "-> 67" << endl;
		else  cout << "   67" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
int menu_5() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> 112" << endl;
		else  cout << "   112" << endl;
		if (key == 1) cout << "-> 113" << endl;
		else  cout << "   113" << endl;
		if (key == 2) cout << "-> 114" << endl;
		else  cout << "   114" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
int menu_6() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> 116" << endl;
		else  cout << "   116" << endl;
		if (key == 1) cout << "-> 117" << endl;
		else  cout << "   117" << endl;
		if (key == 2) cout << "-> 118" << endl;
		else  cout << "   118" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
int menu_7() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> 131" << endl;
		else  cout << "   131" << endl;
		if (key == 1) cout << "-> 132" << endl;
		else  cout << "   132" << endl;
		if (key == 2) cout << "-> 133" << endl;
		else  cout << "   133" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}