﻿
#include <iostream>
#include <cmath>

using namespace std;
/*
Данная программа находит y после ввода x в выражение: y=6x^2+3x+7
*/
int main()
{
	int x; // Вводим переменную для получения x в программе
	cout << "x="; // выводим текст, для болльшего понимания того, что мы вводим в программу
	cin >> x; // ввод пользователем числа и присвоение его переменной x
	int result = 6 * pow(x, 2) + 3 * x + 7; // ввод переменной для вычисления резултата 
	cout << "6x^2+3x+7=" << result << endl; // вывод строки с выражением и результатом
}
