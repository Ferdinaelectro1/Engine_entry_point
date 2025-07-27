#include "application.h"
#include <iostream>

Engine::Engine()
{
    nb = 10;
    std::cout << "Engine is running ......" << std::endl;
}

void Engine::run()
{
    for(int i = 0; i < nb; i++)
    {
        std::cout << "A_A" << std::endl;
    }
}

void Engine::EngineInfo()
{
    std::cout << "This engine is developped by Ferdinand ATI" << std::endl;
    std::cout << "For more information, please consult : www.ferdinaelectro.com"<< std::endl;
}