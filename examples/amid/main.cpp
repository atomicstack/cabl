/*
        ##########    Copyright (C) 2015 Vincenzo Pacella
        ##      ##    Distributed under MIT license, see file LICENSE
        ##      ##    or <http://opensource.org/licenses/MIT>
        ##      ##
##########      ############################################################# shaduzlabs.com #####*/

#include <cstdio>
#include <thread>

#include "Amid.h"


using namespace sl;
using namespace sl::cabl;

//--------------------------------------------------------------------------------------------------

int main(int argc, const char* argv[])
{
  Amid amid;

  M_LOG("Type 'q' and hit ENTER to quit.");

  while (std::cin.get() != 'q')
  {
    // std::cout << "yielding..." << std::endl;
    std::this_thread::yield();
  }

  return 0;
}

//--------------------------------------------------------------------------------------------------
