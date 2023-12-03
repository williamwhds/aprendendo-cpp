#include <iostream>
#include <string>

int main () {
    double num1, num2;
    int escolha;

    std::cout << ">> Calculadora <<" << std::endl;
    while (escolha != 5) {
        std::cout << ">> Insira uma operação <<" << std::endl;
        std::cout << "1 - Soma" << std::endl;
        std::cout << "2 - Subtração" << std::endl;
        std::cout << "3 - Divisão" << std::endl;
        std::cout << "4 - Multiplicação" << std::endl;
        std::cout << "5 - Sair" << std::endl;
        std::cout << "-> ";
        std::cin >> escolha;

        if (escolha == 5) {
            std::cout << "Saindo..." << std::endl;
            break;
        }

        std::cout << ">> Insira dois números <<" << std::endl;

        std::cout << "Primeiro número: ";
        std::cin >> num1;

        std::cout << "Segundo número: ";
        std::cin >> num2;

        if (escolha == 1) {
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        } else if (escolha == 2) {
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        } else if (escolha == 3) {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        } else if (escolha == 4) {
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        } else {
            std::cout << "Opção inválida!" << std::endl;
        }
    }
    return 0;
}
