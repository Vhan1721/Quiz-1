// Live coding 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double menghitungkinetik;
void hitungEK(double massa, double kecepatan) {
	menghitungkinetik = 0.5 * massa * kecepatan * kecepatan;
}

int main() {
	double massa, kecepatan, energiKinetik;
	cout << "Masukkan massa total (kg) : ";
	cin >> massa;
	cout << "Masukkan kecepatan (m/s) : ";
	cin >> kecepatan;

	hitungEK(massa, kecepatan);
	cout << "Energi kinetik : " << menghitungkinetik << endl;

	return 0;
}

