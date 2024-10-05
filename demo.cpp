#include <iostream>
#include <thread>  // For std::this_thread::sleep_for
#include <chrono>  // For std::chrono::milliseconds
using namespace std;

void myCout(string message) {
    for (char& ch : message) {
        cout << ch;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(20));
    }
}

int main() {
    myCout("hgfhghgfhgffdjfsdjshkdjhaskjdhjhdkasjhdkasjhdkasjhd");

    return 0;
}
