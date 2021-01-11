#include <string>
#include "ClientEditor.h"


int main(int argc, char* argv[]) {
//    if (argc != 3) {
//        return 1;
//    }
//    int port = std::stoi(argv[2]);

    ClientEditor editor("argv[1]", 5555, "54.93.54.224");
    editor.startEdit();

    return 0;
}


//172.31.43.56
