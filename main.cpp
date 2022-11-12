#include <iostream>
using namespace std;
int main() {
float a;
	float B,A;
	float C;
	float r;
	float A1;
	float A2,r;
	cout << "ingresar A" << endl;
	cin >> A;
	cout << "ingresar B" << endl;
	cin >> B;
	cout << "ingresar C" << endl;
	cin >> C;
	r = ((sqrt(pow(B),2))-(4*A*C));
	A1 = ((-1*B)+r)/(2*A);
	A2 = ((-1*B)-r)/(2*A);
	cout << "A1 es igual a " << A1 << endl;
	cout << "A2 es igual a " << A2 << endl;
	if (A1==18) {
		cout << "verdadero" << endl;
	} else {
		cout << "falso" << endl;
		if (A2>=23) {
			cout << "positivo" << endl;
		} else {
			cout << "negativo" << endl;
		}
}
