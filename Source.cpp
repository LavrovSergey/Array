#include "Header.h"
#include<iostream>
using namespace std;
int a1()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива" << endl;
	int a;
	cin >> a;
	while (a < 0) {
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> a;
	}
	int* mas = new int[a];
	cout << "Заполним массив непарными числами" << endl;
	int b = 1;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":" << b << endl;
		b = b + 2;
	}


	delete[]mas;


	return 0;
}
int a2()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива" << endl;
	int a;
	cin >> a;
	while (a < 0) {
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> a;
	}
	int* mas = new int[a];
	cout << "Заполним массив степенями числа 2" << endl;
	int b = 2;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":" << b << endl;
		b = b * 2;
	}


	delete[]mas;


	return 0;

}
int a3()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива" << endl;
	int a;
	cin >> a;
	while (a < 0)
	{
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> a;
	}
	int* mas = new int[a];
	cout << "Введите первый член прогрессии " << endl;
	cin >> mas[0];
	cout << "Введите разность прогрессии " << endl;
	int d;
	cin >> d;
	cout << "[" << 1 << "]" << ":" << mas[0] << endl;
	for (int i = 1; i < a; i++)
		cout << "[" << i + 1 << "]" << ":" << (mas[i] = mas[i - 1] + d) << endl;


	delete[]mas;

	return 0;
}
int a18()
{
	setlocale(LC_ALL, "Russian");
	int mas[10];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (mas[i] < mas[9]) { cout << mas[i]; break; } //первый элемент, который меньше последнего
		else(cout << "0"); break; // таких елементов нет

	}
	delete[10]mas;
	return 0;
}
int a19()
{
	setlocale(LC_ALL, "Russian");
	int mas[10];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}

	cout << endl;
	for (int i = 8; i > 0; i--)
	{
		if ((mas[i] > mas[0]) && (mas[i] < mas[9])) { cout << "Порядковый номер последнего из тех его элементов, которые удовлетворяют неравенству= " << i + 1; break; }
		else(cout << "0"); break; // таких елементов нет

	}
	delete[10]mas;
	return 0;
}
int a20()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размерность массива:" << endl;
	int a, b, c;
	int sum = 0;
	cin >> a;
	while (a < 0)
	{
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> a;
	}
	int* mas = new int[a];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}
	cout << "Введите номера, сумму элементов между которыми(включая их) вы хотите найти" << endl;
	cout << "От ";
	cin >> b;
	while (b < 1)
	{
		cout << "Должен быть больше 0" << endl;
		cin >> b;
	}

	cout << "до ";
	cin >> c;
	for (int i = 0; i < a; i++)
	{
		if (i <= c - 1 && i >= b - 1)
		{
			sum += mas[i];
		}
	}

	cout << "Сумма= " << sum;

	delete[]mas;
	return 0;
}
int a51()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Ведите размер массивов" << endl;
	cin >> a;
	int* mas1 = new int[a];
	cout << "Заполните первый массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas1[i];
	}
	int* mas2 = new int[a];
	cout << "Заполните второй массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas2[i];
	}
	cout << "~~~~~~~Меняем их местами~~~~~~~" << endl;
	for (int i = 0; i < a; i++)
	{
		swap(mas1[i], mas2[i]);
	}
	cout << "Первый теперь такой  ";
	for (int i = 0; i < a; i++)
	{
		cout << mas1[i] << ";";
	}
	cout << endl;
	cout << "Второй теперь такой  ";
	for (int i = 0; i < a; i++)
	{
		cout << mas2[i] << ";";
	}
	delete[]mas1;
	delete[]mas2;
	return 0;
}
int a52()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Ведите размер массивов" << endl;
	cin >> a;
	float* mas1 = new float[a];
	cout << "Заполните первый массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas1[i];
	}
	float* mas2 = new float[a];
	cout << "Заполняем второй массив" << endl;
	for (int i = 0; i < a; i++)
	{
		if (mas1[i] < 5) { mas2[i] = 2 * mas1[i]; }
		else(mas2[i] = mas1[i] / 2);
		cout << "[" << i + 1 << "]" << ": " << mas2[i];

	}
	delete[]mas1;
	delete[]mas2;
	return 0;
}
int a53()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Ведите размер массивов" << endl;
	cin >> a;
	int* mas1 = new int[a];
	cout << "Заполните первый массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas1[i];
	}
	int* mas2 = new int[a];
	cout << "Заполните второй массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas2[i];
	}
	int* mas3 = new int[a];
	for (int i = 0; i < a; i++)
	{
		if (mas1[i] > mas2[i]) { mas3[i] = mas1[i]; }
		else (mas3[i] = mas2[i]);
	}
	for (int i = 0; i < a; i++)
	{
		cout << "mas3[" << i + 1 << "]" << ": " << mas3[i] << "  ";

	}
	delete[]mas1;
	delete[]mas2;
	delete[]mas3;
	return 0;
}
int a65()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите размер массива" << endl;
	cin >> a;
	int* mas = new int[a];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}
	cout << endl;
	cout << "	Введите номер элемента, на который увеличить массив ";
	int k;
	cin >> k;
	while (k < 0)
	{
		cout << "Больше 0" << endl;
	}
	int k1 = mas[k - 1];
	for (int i = 0; i < a; i++)
	{
		mas[i] += k1;
		cout << "[" << i + 1 << "]" << ":" << mas[i] << " ;";
	}
	delete[]mas;
	return 0;
}
int a66()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите размер массива" << endl;
	cin >> a;
	int* mas = new int[a];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];

	}
	cout << endl;
	int k;
	for (int i = 0; i < a; i++)
	{
		k = mas[i] % 2;
		if (mas[i] != 0)
		{
			if (k == 0) { k = mas[i]; break; }
		}
		else(k = 0);
	}
	int k1;
	for (int i = 0; i < a; i++)
	{
		k1 = mas[i] % 2;
		if (mas[i] != 0)
		{
			if (k1 == 0) { mas[i] += k; }
		}
		else(mas[i] = 0);
		cout << "[" << i + 1 << "]" << ":" << mas[i] << " ;";
	}
	delete[]mas;
	return 0;
}
int a67()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите размер массива" << endl;
	cin >> a;
	int* mas = new int[a];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];

	}
	cout << endl;
	int k;
	for (int i = a - 1; i >= 0; i--)
	{
		k = mas[i] % 2;
		if (mas[i] != 0)
		{
			if (k != 0) { k = mas[i]; break; }
		}
		else(k = 0);
	}
	int k1;
	for (int i = 0; i < a; i++)
	{
		k1 = mas[i] % 2;
		if (mas[i] != 0)
		{
			if (k1 != 0) { mas[i] += k; }
		}
		else(mas[i] = 0);
		cout << "[" << i + 1 << "]" << ":" << mas[i] << " ;";
	}
	delete[]mas;
	return 0;
}
int a112()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размерность массива от 1 до 6:" << endl;
	int a;
	cin >> a;
	while (a < 1) {
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> a;
	}
	while (a > 6) {
		cout << "Ошибка. Должен быть меньше 6." << endl;
		cin >> a;
	}
	int* mas = new int[a];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				swap(mas[j], mas[j + 1]);
			}
		}
	}
	cout << "Отсортированый массив: ";
	for (int i = 0; i < a; i++)
	{
		cout << mas[i] << ";  ";

	}
	delete[]mas;
	return 0;
}
int a113()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размерность массива от 1 до 6:" << endl;
	int a;
	cin >> a;
	while (a < 1) {
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> a;
	}
	while (a > 6) {
		cout << "Ошибка. Должен быть меньше 6." << endl;
		cin >> a;
	}
	int* mas = new int[a];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}
	for (int i = a - 1; i > 0; i--)
	{
		int max = i;
		cout << endl;
		cout << "Сортируем: " << endl;
		for (int i = 0; i < a; i++)
		{
			cout << mas[i] << "; ";
		}

		for (int j = i - 1; j >= 0; j--)
		{
			if (mas[j] > mas[max])
			{
				max = j;
			}
		}
		swap(mas[i], mas[max]);


	}
	delete[]mas;
	return 0;
}
int a114()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размерность массива от 1 до 6:" << endl;
	int a;
	cin >> a;
	while (a < 1) {
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> a;
	}
	while (a > 6) {
		cout << "Ошибка. Должен быть меньше 6." << endl;
		cin >> a;
	}
	int* mas = new int[a];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}
	int temp, j;
	for (int i = 1; i < a; i++)
	{
		temp = mas[i];
		j = i - 1;
		while (j >= 0 && mas[j] > temp)
		{
			mas[j + 1] = mas[j];
			mas[j] = temp;
			j--;
		}
	}

	cout << "Отсортированый массив: ";
	for (int i = 0; i < a; i++)
	{
		cout << mas[i] << "; ";

	}
	delete[]mas;
	return 0;
}
int a116()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размерность массива:" << endl;
	int n;
	cin >> n;
	while (n < 0) {
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> n;
	}
	int x, l, k, num;
	int* A = new int[n];
	int* B = new int[n];
	int* C = new int[n];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> A[i];
	}
	x = l = k = 0;
	for (int i = l; i < n; i++)
	{
		if (A[i] == A[i+1])
		{
			x++;
		}
		else
		{
			l = x;
			num = A[i];
			l++;
			B[k] = l;
			C[k] = num;
			k++;
			x = 0;
		}
	}
	cout << "Массив из серий:" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
	cout << "Массив из элементов:" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << C[i] << " ";
	}
	cout << endl;
	delete[]A;
	delete[]B;
	delete[]C;

	return 0;
}
int a117()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размерность массива:" << endl;
	int n;
	int s = 1;
	cin >> n;
	while (n < 0) {
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> n;
	}
	int* mas = new int[n];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}

	int temp = mas[0];
	cout << '0' << temp;
	for (int i = 1; i < n; i++) {
		if (mas[i] == temp) {
			cout << mas[i];
		}
		else {
			temp = mas[i];
			cout << '0' << mas[i];
		}
	}
	delete[]mas;
	return 0;
}
int a118()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размерность массива:" << endl;
	int n;
	int s = 1;
	cin >> n;
	while (n < 0) {
		cout << "Ошибка. Должен быть больше 0." << endl;
		cin >> n;
	}
	int* mas = new int[n];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	}
	int temp;
	for (int i = 0; i < n; ++i)
	{
		if (mas[i] == mas[i + 1])
		{
			s++;
		}
		else if (s > 1)
		{
			s = 1;
			for (int j = ++n; j > i + 1; --j)
			{
				temp = mas[j];
				mas[j] = mas[j - 1];
				mas[j - 1] = temp;
			}
			mas[i + 1] = 0;

		}cout << "[" << i + 1 << "]" << ":  " << mas[i];
	}
	delete[]mas;
	return 0;
}
int a131()
{
	setlocale(LC_ALL, "Russian");
	int n, x1, y1;
	double l, x, y;
	cout << "Введите количество точек" << endl;
	cin >> n;
	int* mas1 = new int[n];
	int* mas2 = new int[n];
	cout << "Введтите координаты точек ";
	for (int i = 0; i < n; i++)
	{
		cout << "X=";
		cin >> mas1[i];
		cout << "Y=";
		cin >> mas2[i];

	}
	cout << "Введтите координаты точки В ";
	cout << "X=";
	cin >> x;
	cout << "Y=";
	cin >> y;
	double min = l = sqrt((mas1[0] - x) * (mas1[0] - x) + (mas2[0] - y) * (mas2[0] - y));
	x1 = mas1[0];
	y1 = mas2[0];
	for (int i = 1; i < n; i++)
	{
		l = sqrt((mas1[i] - x) * (mas1[i] - x) + (mas2[i] - y) * (mas2[i] - y));
		if (l < min)
		{
			min = l;
			x1 = i;
			y1 = i;
		}
	}

	cout << "Самая близкая А с координатами: " << "X=" << mas1[x1] << "  Y=" << mas2[y1];
	delete[]mas1;
	delete[]mas2;
	return 0;
}
int a132()
{
	setlocale(LC_ALL, "Russian");
	int n, x = 0, y = 0;
	double l;
	cout << "Введите количество точек" << endl;
	cin >> n;
	int* mas1 = new int[n];
	int* mas2 = new int[n];
	cout << "Введтите координаты точек ";
	for (int i = 0; i < n; i++)
	{
		cout << "X=";
		cin >> mas1[i];
		cout << "Y=";
		cin >> mas2[i];

	}
	double max = 0;

	for (int i = 0; i < n; i++)
	{
		if ((mas1[i] < 0) && (mas2[i] > 0))
		{
			l = sqrt((mas1[i] * mas1[i]) + (mas2[i] * mas2[i]));
			if (l > max)
			{
				max = l;
				x = i;
				y = i;
			}
		}
	}
	if (max > 0) {
		cout << "Самая дальняя А от начала начала координат с координатами: " << "X=" << mas1[x] << "  Y=" << mas2[y];
	}
	else (cout << "Самой дальней во второй четверти нет " << "X=0" << "  Y=0");
	delete[]mas1;
	delete[]mas2;
	return 0;
}
int a133()
{
	setlocale(LC_ALL, "Russian");
	int n, x = 0, y = 0;
	double l;
	cout << "Введите количество точек" << endl;
	cin >> n;
	int* mas1 = new int[n];
	int* mas2 = new int[n];
	cout << "Введтите координаты точек ";
	for (int i = 0; i < n; i++)
	{
		cout << "X=";
		cin >> mas1[i];
		cout << "Y=";
		cin >> mas2[i];

	}
	double min = 10000;

	for (int i = 0; i < n; i++)
	{
		if (((mas1[i] > 0) && (mas2[i] > 0)) || ((mas1[i] < 0) && (mas2[i] < 0)))
		{
			l = sqrt((mas1[i] * mas1[i]) + (mas2[i] * mas2[i]));
			if (l < min)
			{
				min = l;
				x = i;
				y = i;
			}
		}
	}
	if (min != 10000) {
		cout << "Самая близкая А к началу координат с координатами: " << "X=" << mas1[x] << "  Y=" << mas2[y];
	}
	else (cout << "Самой близкой в первой и третьей четверти нет " << "X=0" << "  Y=0");
	delete[]mas1;
	delete[]mas2;
	return 0;
}

