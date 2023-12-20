#include <iostream>

std::string decimalToHexadecimal(int nombre) {
    if (nombre == 0) {
        return "0";
    }
    std::string resultat = "";
    const char hexCaracteres[] = "0123456789ABCDEF";
    while (nombre > 0) {
        int reste = nombre % 16;
        resultat = hexCaracteres[reste] + resultat;
        nombre /= 16;
    }
    return resultat;
}

int main() {
    int nombre;
    std::cin >> nombre;
    if (nombre < 0) {
        std::cerr << std::endl;
        return 1;
    }
    std::string representationHex = decimalToHexadecimal(nombre);
    std::cout << nombre <<"  "<< representationHex << std::endl;

    return 0;
}
