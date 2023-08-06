#include <iostream>

void pillChoice() {
    std::cout << R"(Red pill or blue pill? Enter "red" or "blue")" << std::endl;
    std::string choice;
    std::cin >> choice;
    if (choice == "red") {
        std::cout << "You wake up in a weird capsule. You are slimy." << std::endl;
    } else if (choice == "blue") {
        std::cout << "You wake up at work. Your coffee's gone cold." << std::endl;
    } else {
        pillChoice();
    }
}

void matrixGame() {
    std::cout << "" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿      THE MATRIX      ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿       the game       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠉⠉⠉⠀⠀⠉⠙⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠛⠉⠉⠉⠉⠙⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠰⣏⣤⣤⣆⣠⣀⣀⣀⣀⡉⠛⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⠋⠀⢲⢢⢤⣀⡀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠘⣿⣾⡝⠻⢷⠿⠟⡿⠋⠀⠘⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⠟⠋⠀⠠⣔⣮⣭⠉⠙⠉⢁⡥⠞⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⡇⠂⠀⠀⠒⢄⠈⠉⠿⣧⡄⠲⠟⣿⣶⣤⡄⠈⠻⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣋⣥⣤⣲⣼⣽⣿⣿⠗⣦⣄⡴⠋⠔⠁⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⡤⠀⠀⠀⠀⠉⠈⢀⠹⠿⡟⠒⠛⢿⣿⣾⣤⠄⠙⢿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠉⠀⠀⠀⡰⠀⢩⠂⠀⣆⠀⠀⣸⣿⣿⣿⣿⣿⣷⡤⠀⠒⠢⡄⢄⠀⠡⣄⠑⣤⡄⠀⠙⢻⣿⣿⣿⣾⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣃⡀⠈⣷⡆⢠⣅⣶⠀⢤⣿⠁⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠹⣀⠈⠻⣿⣽⡛⢿⣧⠀⠀⠻⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⣽⡟⢠⣿⡿⠀⠀⡼⠤⢄⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠙⣆⠁⠨⠿⣋⠀⠙⢦⠀⠀⢹⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⠠⡀⠀⣿⠃⠾⡿⠃⠀⢠⠃⠀⢨⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣆⢀⣹⡄⠀⠀⠹⡄⠀⠈⢆⠀⢨⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣧⣄⣤⠃⠀⢸⠁⠀⠀⣾⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣤⣴⣧⣤⣤⣾⣷⣾⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣦⣼⣷⣦⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    pillChoice();
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿    THE END    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
}

consteval int tripleX(double x) {
    return x * 3.0;
}

int main() {
    int someArr[tripleX(4)] = {3,4};
    std::cout << someArr;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "4 tripled is " << 1.2;
    matrixGame();
    return 0;
}

