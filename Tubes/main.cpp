#include <chrono>
#include <iostream>
using namespace std;
using namespace chrono;

// Fungsi rekursif untuk menghitung bilangan Fibonacci
int fibonacci(int n) {

    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Masukkan bilangan Fibonacci (menggunakan rekursif) yang ingin dihitung: ";
    cin >> n;

    if (n < 0) {
        cout << "Masukkan bilangan positif." << endl;
        return 1;
    }
    // Untuk menghitung waktu eksekusi dalam mikrodetik
    auto start1 = high_resolution_clock::now();
    int result1 = fibonacci(n);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    // Untuk menghitung waktu eksekusi dalam detik
    auto start2 = high_resolution_clock::now();
    int result2 = fibonacci(n);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<seconds>(stop2 - start2);


    cout << "Bilangan Fibonacci ke- " << n << " adalah: " << fibonacci(n) << endl;
    cout << "Waktu eksekusi: " << duration1.count() << " mirkodetik" << endl;
    cout << "Waktu eksekusi: " << duration2.count() << " detik" << endl;
    return 0;
}
