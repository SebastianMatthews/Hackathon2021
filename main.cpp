#include <iostream>
#include "Render.cpp"


int main() {
    std::cout << "\033[34mHello World\033[0m\n" << std::endl;
    Render board(6, 6);
    std::cout << board.render_full_module(1);

}