
#include <iostream>
#include "../include/replacer.h"

int main() {
    std::string text;
    int n;
    char old_value, new_value;

    std::cout << "Строка для модификации: ";
    std::getline(std::cin, text);

    std::cout << "Номер целевой буквы: ";
    std::cin >> n;

    std::cout << "Целевой символ: ";
    std::cin >> old_value;

    std::cout << "Символ, который следует использовать в качестве замены: ";
    std::cin >> new_value;

    std::string answer = replace(text, n, old_value, new_value);

    std::cout << "Итоговая строка:" << std::endl;
    std::cout << answer << std::endl;

    return 1;
}