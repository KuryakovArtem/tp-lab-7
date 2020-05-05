#include "Ocean.h"
#include <conio.h>

int main()
{
    Ocean ocean;
    ocean.addObjects(ObjType::STONE, 60);
    ocean.addObjects(ObjType::PREY, 110);
    ocean.addObjects(ObjType::PREDATOR, 20);
    std::cout << "\n" << std::endl;

    for (int i = 0; i < 8; i++) {
        ocean.start();
        std::cout << "\n" << std::endl;
        ocean.print();    
    }
    return 0;
}