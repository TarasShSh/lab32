// lab31.cpp
		// �������� �����
		// ����������� ������ No 3.1
		// ������������, ������ ��������: ������� ������ �����.
		// ������ 23
#include<iostream>
#include<cmath>

using namespace std;
int main() {
	double x;  // ������� ��������
	double a;  // ������� ��������
	double b;  // ������� ��������
	double c;  // ������� ��������
	double F;  // ��������� ���������� ������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ���������� ����
	if (a < 0 && c != 0)
		F = a * pow(x, 2) + b * x + c;
	if (a > 0 && c == 0)
		F = -a / (x - c);
	if (!(a < 0 && c != 0) && !(a > 0 && c == 0))
		F = a* (x + c);

	cout << endl; 
	cout << "1) F = " << F << endl;
	
	// ����� 2: ������������ � ������ ����
	if (a < 0 && c != 0)
		F = a * pow(x, 2) + b * x + c;
	else if (a > 0 && c == 0)
		F = -a / (x - c);
	else
		F = a * (x + c);
	cout << "2) F = " << F << endl; 
	cin.get(); 
	return 0;
}