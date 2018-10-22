#include <iostream>
#include<cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float z1, z2, a;
	cout << "¬ведите значение угла" << endl;
	cin >> a;
	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));
	z2 = tan(3 * a);
	if (cos(a) != 0)
	{
		cout << z1 << endl;
		cout << z2 << endl;
	}
	else {
		cout << "«наменатель не равен 0" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}