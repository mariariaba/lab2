#include <iostream>

void obem_i_ploshcha_kuli(double r, double* obem, double* ploshcha) {
    
    *obem = (4.0 / 3.0) * 3.14 * r * r * r;

   
    *ploshcha = 4.0 * 3.14 * r * r;
}

int main() {

    using namespace std;
    setlocale(LC_CTYPE, "ukr");

    double radius;
    cout << "Ввеiть радiус кулi: ";
    cin >> radius;

    double volume, surface_area;

    
    obem_i_ploshcha_kuli(radius, &volume, &surface_area);

    cout << "Об'єм кулi: " << volume << endl;
    cout << "Площа поверхнi кулi: " << surface_area << endl;

    return 0;
}