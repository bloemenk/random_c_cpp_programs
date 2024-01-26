#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>

int main() {
    struct winsize size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
    int consoleWidth = size.ws_col;

    for (int i = 0; i < consoleWidth; i++) {
        std::cout << "X"; // Replace 'X' with the character you want to use
    }

    return 0;
}