#include <util_a/greet.h>
#include <util_b/greet.h>

#include <iostream>

int main() {
    std::cout << "Welcome to application main from project parent_b.\n\n";

    greet_world();

    std::cout << "\n";

    greet_world_reversed();

    return 0;
}
