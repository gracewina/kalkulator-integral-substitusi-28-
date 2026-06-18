#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, n;
    
    cout << "===========================================" << endl;
    cout << "Kalkulator Integral Substitusi - Gracewinna" << endl;
    cout << "Bentuk: \int a * x * (x^2 + b)^n dx" << endl;
    cout << "===========================================" << endl;
    
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan pangkat n: ";
    cin >> n;
    
    double koefisienLuar = a / 2.0;
    double pangkatBaru = n + 1.0;
    double koefisienAkhir = koefisienLuar / pangkatBaru;
    
    cout << "\n--- Langkah Penyelesaian ---" << endl;
    cout << "1. Misal u = x^2 + " << b << " -> du = 2x dx -> x dx = du/2" << endl;
    cout << "2. Substitusi: \int " << a << " * u^" << n << " * (du/2)" << endl;
    cout << "3. Menjadi: " << koefisienLuar << " * \int u^" << n << " du" << endl;
    cout << "4. Hasil Integrasi: (" << koefisienLuar << " / " << pangkatBaru << ") * u^" << pangkatBaru << " + C" << endl;
    
    cout << "\n--- Hasil Akhir ---" << endl;
    cout << fixed << setprecision(3);
    cout << "F(x) = " << koefisienAkhir << " * (x^2 + " << b << ")^" << pangkatBaru << " + C" << endl;
    cout << "===========================================" << endl;
    
    return 0;
}
