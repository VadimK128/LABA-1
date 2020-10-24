#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
using namespace std;
int main()
{
		int a, b, c;
		a = 1;
		b = 13;
		c = 49;
		cout << a << " " << b << " " << c << "\n"; //1

		char s;
		cout << "Enter your char:";
		cin >> s;
		cout << a << s << b << s << c << s << "\n"; //2

		int a1, b1, c1;
		cout << "Enter 3 numbers:";
		cin >> a1 >> b1 >> c1;
		cout << a1 << "  " << b1 << "  " << c1 << "\n"; //3

		double x, y, a2;
		cout << "Enter your a:";
		cin >> a2;
		x = 12 * a2 * a2 + 7. * a - 12;
		y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
		cout << "x=" << x << "\n" << "y=" << y << "\n"; //4

		double V, m, ro;
		cout << "Enter body volume:";
		cin >> V;
		cout << "OK, now enter body mass:";
		cin >> m;
		ro = m / V;
		cout << "Density is:" << ro << "\n"; //(1)

		double x2, a3, b2;
		cout << "Enter a!=0, b:";
		cin >> a3 >> b2;
		while (a3 == 0) {
			cout << "'A' should not be equal to 0, Enter a!=0:";
			cin >> a3;
		}
		x2 = -b2 / a3;
		cout << "x =" << x2 << "\n"; //(2)

		double x3, y3, x4, y4, S;
		cout << "Enter x1, y1:";
		cin >> x3 >> y3;
		cout << "Enter x2, y2:";
		cin >> x4 >> y4;
		S = sqrt((x4 - x3)*(x4 - x3) + (y4 - y3)*(y4 - y3));
		cout << "S=" << S << "\n"; //(3)

		double l1, l2, h, l3, P; // l1, l2 - osnovaniya, l3 - bok. storona
		cout << "Enter l1, l2, h:";
		cin >> l1 >> l2 >> h;
		if (l2 >= l1)    l3 = sqrt(h * h + pow((l2 - l1) / 2, 2));
		else l3 = sqrt(h * h + pow((l1 - l2) / 2, 2));
		P = l1 + l2 + 2 * l3;
		cout << "P=" << P << "\n"; //(4)

		double r1, r2, Sk;
		cout << "Enter r1, r2:";
		cin >> r1 >> r2;
		if (r2 >= r1) Sk = M_PI * r2 * r2 - M_PI * r1 * r1;
		else Sk = M_PI * r1 * r1 - M_PI * r2 * r2;
		cout << "Sk=" << Sk << "\n"; //(5)

		double a6, Sbok, Vk;
		cout << "Enter a:";
		cin >> a6;
		Sbok = pow(a6, 2);
		Vk = pow(a6, 3);
		cout << "Vk=" << Vk << endl << "Sbok=" << S << endl; //(6)

		int a7, P7;
		cout << "Enter a:";
		cin >> a7;
		P7 = 4 * a7;
		cout << "P7=" << P7 << endl; //(7)

		int radius, diametr;
		cout << "Enter radius:";
		cin >> radius;
		diametr = 2 * radius;
		cout << "Diametr=" << diametr << endl; //(8)

		string name;
		cout << "Enter your name:";
		cin >> name;
		string prefix = "Hello, ";
		string message = prefix + name + "!";
		cout << message << endl; //(9)

		string word; bool proverka;
		while (word.length() != 7) {
			cout << "Enter word:";
			cin >> word;
		}
		for (int i = 0; i < 4; i++) {
			if (word[i] == word[6 - i]) proverka = true;
			else proverka = false;
		}
		if (proverka == true) cout << "This is polindrom!" << endl;
		else cout << "Sorry, this is not polindrom!" << endl; //(10)

		system("pause");
		return 0;
	}

