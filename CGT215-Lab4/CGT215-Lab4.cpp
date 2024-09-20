#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	cout << "Factorial:" << endl;
	int f(1);
	int n;
	cout << "Enter a number:" << endl;
	cin >> n;
	do {
		if (n <0) 
		{
			cout << "Nice try enter a positive number:" << endl;
			cin >> n;
		}
	}while(n<0);
	if (n == 0)
		cout << n << "! = " << n <<  endl;
	else {
		cout << n << "!" << " =";
		for (int i = 1; i <= n; i++) 
		{
			f = f * i;
			cout << " " << i;
			if (i < n)
				cout << " *";
		}
		cout << " = " << f << endl;
	}
}
void arithmetic() {
	cout << "Arithmetic:" << endl;
	int a, d, n,t,s(0);
	cout << "Enter the starting number:" << endl;
	cin >> a;
	cout << "Enter the difference:" << endl;
	cin >> d;
	cout << "Enter the number of elements in the series" << endl;
	cin >> n;
	t = a;
	for (int i = 1; i <= n; i++)
	{
		s += t;
		cout << t;
		if (i < n)
			cout << " + ";
		t += d;
	}
	cout << " = " << s << endl;
}
void geometric() {
	cout << "Geometric:" << endl;
	int a, m, n, g(0);
	cout << "Enter the starting number:" << endl;
	cin >> a;
	cout << "Enter the multiplier:" << endl;
	cin >> m;
	cout << "Enter the number of elements in the series" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		g+= a* pow(m,i);
		cout << (a * pow(m, i)) ;
		if (i < (n-1))
			cout << " + ";
	}
	cout << " = " << g << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}