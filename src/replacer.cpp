#include "replacer.h"

std::string replace(std::string text, const int n, const char old_value, const char new_value) {
    if (n <= 0) {
        return text;
    }

    int counter {0};

    for (char& i: text) {
        if (i == old_value)
        {
            counter++;
            if (counter % n == 0) {
                i = new_value;
            }
        }
    }

    return text;
}