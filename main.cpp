#include<iostream>
#include"sec.h"

int tick = 0;

void update() {
    tick++;
}

int main(int argc, char** argv) {
    if (argc > 1) {
        std::cout << "Hello World!" << " " << argv[1] << std::endl;
    }

    for (int i = 0; i < 10; i++) {
        update();
    }
    print("bobri v adidasah");
    return 0;
}
