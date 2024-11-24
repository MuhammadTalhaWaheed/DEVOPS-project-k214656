#include <iostream>
#include <string>

// Function to greet the user
void greetUser(const std::string& name) {
    std::cout << "Hello, " << name << "! Welcome to AWS CodeBuild!" << std::endl;
}

// Entry point of the program
int main(int argc, char* argv[]) {
    // Check if the user provided a name as an argument
    if (argc > 1) {
        std::string name = argv[1];
        greetUser(name);
    } else {
        std::cout << "Hello, AWS CodeBuild!" << std::endl;
    }

    return 0;
}

