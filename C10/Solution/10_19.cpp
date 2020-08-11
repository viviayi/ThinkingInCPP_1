#include <iostream>

namespace Me {
    class Us {
    friend void you(Us u);
    public:
        Us() : value (123) {}
    private:
        int value;
    };

    void you(Us u) {
        std::cout << "Value from Us: " << u.value << std::endl;
    }
}

int main() {

    Me::Us us;

    you(us);

}