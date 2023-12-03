#include <iostream>
#include <string>
#include <algorithm> // Importando a função std::reverse para inverter strings
#include <cctype> // Importando std::isdigit
#include <fstream> // Para abrir o arquivo .txt
#include <vector> // listas dinâmicas, semelhante ao ArrayList do Java

/*
    Tenho que pegar o primeiro e último número de cada linha de valores
    e somar tudo

    Ex.:    uys7bd5kf2po    -> 72
            dmjkl1p8nnva    -> 18
            Resultado       -> 90
*/

std::vector<std::string> readLines (std::string filename) {
    std::ifstream file(filename);

    if (!file) {
        std::cerr << "Não foi possível abrir o arquivo" << filename;
        exit(1);
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}

int main () {
    std::vector<std::string> input = readLines("input.txt");
    int sum;

    for (std::string calValue : input) {
        std::string numbers = "";

        // Pegando o primeiro número
        for (char c: calValue) {
            if (std::isdigit(c)) {
                numbers += c;
                break;
            }
        }

        // Invertendo a string para pegar o último número
        std::reverse(calValue.begin(), calValue.end());
        for (char c: calValue) {
            if (std::isdigit(c)) {
                numbers += c;
                break;
            }
        }

        sum += std::stoi(numbers); // Transformando o resultado em int e somando
    }

    std::cout << "O resultado é " << sum << std::endl;
    return 0;
}
