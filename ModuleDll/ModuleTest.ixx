module;

#include "ModuleDll.h"
#include <iostream>

export module ModuleTest;

export class __declspec(dllexport) ModuleClass
{
public:
   ModuleClass() = default;

   void ModuleClassFunc()
   {
      std::cout << "Hello World!\n";
   }
};