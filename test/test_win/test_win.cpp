// test_win.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\..\src\uuid.h"
#include <assert.h>

int main()
{
   using namespace uuids;

   uuid empty;
   assert(empty.is_nil());
   assert(empty.size() == 16);

   return 0;
}

