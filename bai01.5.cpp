#include <iostream>
using namespace std;
float CataLan (int n)
{
    if (n <= 2) {
        return 1;
    } else {
    	int Cn=0;
    	for (int i=1; i<n; i++) {
        	Cn += CataLan(i) * CataLan(n-i);
    	}
    	return Cn;
	}
}

int main() {
    int n;
    cout << "\n Nhap vao n: "; cin >> n;
    cout << "\nSo Catalan thu " << n << " la: " << CataLan(n);
    return 0;
}

