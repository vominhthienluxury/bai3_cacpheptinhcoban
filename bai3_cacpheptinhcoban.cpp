#include <iostream>
using namespace std;
double tinhhieu(double a, double b) {
	return a - b;
}
double tinhtong(double a, double b) {
	return a + b;
}
double tinhtich(double a, double b) {
	return a * b;
}
double tinhthuong(double a, double b) {
	return round (a / b);
}
int main() {
	cout << "CHUONG TRINH TINH CAC PHEP TINH CO BAN\n " << endl;
	double so1, so2, tong, hieu, tich, thuong;
	cout << "-------------------------\nnhap so vao\n \t \n \t \t|vi tri 1|" << endl;
	cout << "nhap so1:\t"; cin >> so1;
	cout << "-------------------------\nnhap so vao\n \t \n \t \t|vi tri 2|" << endl;
	cout << "nhap so2:\t"; cin >> so2;
	hieu = so1 - so2;
	tong = so1 + so2;
	tich = so1 * so2;
	thuong = so1 / so2;
	cout << "Hieu hai so thong thuong: " << so1 << "-" << so2 << " = " << hieu << endl << endl;
	cout << "Hieu hai so su dung ham: " << so1 << "-" << so2 << " = " << tinhhieu(so1,so2) << endl << endl;
	cout << "Tong hai so: " << so1 << "+" << so2 << " = " << tong << endl << endl;
	cout << "Tong hai so: " << so1 << "+" << so2 << " = " << tinhtong(so1,so2) << endl << endl;
	cout << "Tich hai so: " << so1 << "*" << so2 << " = " << tinhtich(so1, so2) << endl << endl;
	cout << "Tich hai so: " << so1 << "*" << so2 << " = " << tich << endl << endl;
	cout << "THuong hai so: " << so1 << "/" << so2 << " = " << tinhthuong(so1, so2) << endl << endl;
	cout << "THuong hai so: " << so1 << "/" << so2 << " = " << thuong << endl << endl;
	return 0;
}
























































//onwer: vominhtthienluxury