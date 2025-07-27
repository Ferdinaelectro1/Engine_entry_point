#include "../engine/application.h"
#include <iostream>

class Myapp : public Engine
{
    public:
      Myapp(){};
      void run() override
      {
        for(int i = 0;  i < 15; i++)
        {
            std::cout << "M_A" << std::endl;        
        }
      };
};

class OtherApp : public Engine
{
    public:
      OtherApp(){
        EngineInfo();
      };
      void run() override
      {
        for(int i = 0;  i < 15; i++)
        {
            std::cout << "O_A" << std::endl;        
        }
      };
};

class TheApp : public Engine
{
    public:
      TheApp(){};
      void run() override
      {
        for(int i = 0;  i < 15; i++)
        {
            std::cout << "O_A" << std::endl;        
        }
      };
};

Engine *createEngine()
{
    return new OtherApp();
}