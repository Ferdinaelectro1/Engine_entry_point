#include "application.h"

extern Engine* createEngine();

int main()
{
    Engine *engine = createEngine();
    engine->run();  
    delete engine; 
    return 0;
}