#include <iostream>     // para cout 
#include <fstream>      // para ifstream & ofstream
#include <string>       // para contenedor de objeto string

/**
* @brief Carga un archivo de entrada en una cadena (archivo no binario)
* @param filepath la ruta del archivo que desea leer 
* @return el contenido del archivo como una cadena
*/
std::string readFile(const std::string& filepath) {
    std::ifstream file(filepath); // Abrir el archivo
    // Devolver una cadena con el contenido del archivo
    return std::string(
        std::istreambuf_iterator<char>(file), // Comenzar a leer desde el principio del archivo
        std::istreambuf_iterator<char>() // Detección automática del final (EOF)
    );
}

int main() {
    std::cout << readFile("./fileexample.txt") << "\n";
    return 0;
}

