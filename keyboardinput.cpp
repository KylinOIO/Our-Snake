#include "keyboardinput.h"

void Keyboard::get_input()
{
    char input;
    input = _getch();
    std::cout << input << std::endl;
}

void Keyboard::print_a()
{
    std::cout << "a" << std::endl;
}

void print_b()
{
    std::cout << "b" << std::endl;
}