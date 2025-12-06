// Victoria Levačić Tkalec, 1.RM

#include <iostream>
using namespace std;

void zA();
void zB();
void zC();
void zD();

int main()
{
	/*zA();*/
	/*zB();*/
	/*zC();*/
	/*zD();*/
	return 0;
}

void zA()
{
	cout << "   ";

	for (int i = 1; i <= 20; i++)
	{
		if (i < 10) cout << " "; 
		cout << "  " << i;
	}
	cout << endl;

	cout << "   |";
	for (int i = 1; i <= 20; i++) cout << "---|";
	cout << endl;

	for (int i = 1; i <= 20; i++)
	{
		if (i < 10) cout << " ";
		if (i < 100) cout << " ";
		cout << i << "|";
		for (int j = 1; j <= 20; j++)
		{
			if (i * j < 10) cout << " ";
			if (i * j < 100) cout << " ";
			cout << i * j << "|";
		}
		cout << endl << "   |";
		for (int j = 0; j < 20; j++) cout << "---|";
		cout << endl;
	}
}

void zB()
{
	int n;
	cout << "Unesi velicinu dijamanta (neparan broj): "; cin >> n;
	char prazna = char(176); char puna = char (219);
	system("Color 09");

	for (int i = 1; i <= n; i += 2)
	{
		for (int j = 0; j < (n - i) / 2; j++) cout << prazna << prazna;
		for (int j = 0; j < i; j++) cout << puna << puna;
		for (int j = 0; j < (n - i) / 2; j++) cout << prazna << prazna;
		cout << endl;
	}

	for (int i = n - 2; i >= 1; i -= 2)
	{
		for (int j = 0; j < (n - i) / 2; j++) cout << prazna << prazna;
		for (int j = 0; j < i; j++) cout << puna << puna;
		for (int j = 0; j < (n - i) / 2; j++) cout << prazna << prazna;
		cout << endl;
	}
}
void zC()
{
	int n; cin >> n;

	for (int c = 2; c < n; c++)
	{
		for(int a=2; a<c; a++)
		{
			float b = sqrt(c * c - a * a);  
			if (round(b) == b) 
			{ 
				cout << a << " " << b << " " << c << endl; 
				break;
			}
		}
	}
}

void zD()
{
	int n; char s; char s2; cin >> n >> s >> s2;
	char prazna = char(176); char puna = char(219);
	system("Color 09");

	if (s == 'D')
	{
		if(s2== 'L')
		{
			for (int i = 1; i <= n; i++)
			{
				for (int j = 0; j < i; j++) cout << puna << puna;
				for (int j = 0; j < n - i; j++) cout << prazna << prazna;
				cout << endl;
			}
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				for (int j = 0; j < n - i; j++) cout << prazna << prazna;
				for (int j = 0; j < i; j++) cout << puna << puna;
				cout << endl;
			}
		}
	}
	else {
		if (s2 == 'L') {
			for (int i = 1; i <= n; i++) {
				for (int j = 0; j <= n - i; j++) cout << puna << puna;
				for (int j = 1; j < i; j++) cout << prazna << prazna;
				cout << endl;
			}
		}
		else {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j < i; j++) cout << prazna << prazna;
				for (int j = 0; j <= n - i; j++)  cout << puna << puna;
				cout << endl;
			}
		}
	}
}


