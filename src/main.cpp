#include "tetris.h"
#include <cstdlib>
#include <ctime>

int main(int, char* argv[])
{
    srand(time(nullptr));
    Tetris game(argv[0]);
    game.run();
    return EXIT_SUCCESS;
}
