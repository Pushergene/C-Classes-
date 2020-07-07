#include <iostream>
using namespace std;
class Test {
    public:
    void h(int x);
    int z();
    void dyn();
    void loop(int l);
    private:
    int y;
    int p;
};

void Test::h(int x) {
    y = x;
    int *pointer = &y;
    while(*pointer < 5) {
        pointer++;
    }
}

void Test::dyn() {
    int* g = new int;
    *g = 5;
    if(*g == 5) {
        std::cout << "g ist gleich 5" << endl;
    }
    
}
void Test::loop(int l) {
    p = l;
    for(int s = 0; s < l; s++) {
        std::cout << s << endl;
        std::cout << "C++ class example." << endl;
    }
}
int Test::z() {
    return y;
    return p;
}

int main() {
    Test t;
    t.h(50);
    t.loop(50);
    t.dyn();
    std::cout << t.z() << endl;
}
