#include <iostream>
#include "Render.cpp"


int main() {
    std::cout << "\033[34mHello World\033[0m\n" << std::endl;
    Render board(6, 6);
    board.create_board();
    std::cout << board.print_board();

}