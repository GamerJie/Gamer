
#if _WIN32
#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")
#endif

#include <Game.h>

int main(int argc, char* argv[]){

    Game game("Engine Game");

    game.run();

    return 0;
}