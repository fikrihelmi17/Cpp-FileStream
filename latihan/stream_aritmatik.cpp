#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class aritmatik {
	public :	
		
	float perkalian(float angka1, float angka2) {
		return angka1 * angka2;
	}
	
	float pembagian(float angka1, float angka2) {
		return angka1 / angka2;
	}
	
	float penambahan(float angka1, float angka2){
		return angka1 + angka2;
	}
	
	float pengurangan(float angka1, float angka2){
		return angka1 - angka2;
	}
};

int main() {
	aritmatik am;
	float angka1 = 3.15; 
	float angka2 = 1.12;
	
	cout << "Perkalian : " << setprecision(3) << am.perkalian(angka1, angka2);
	cout << "\nPembagian : " << setprecision(3) << am.pembagian(angka1, angka2);
	cout << "\nPenambahan : " << setprecision(3) << am.penambahan(angka1, angka2);
	cout << "\nPengurangan : " << setprecision(3) << am.pengurangan(angka1, angka2);

	return 0;
}
