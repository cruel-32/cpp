#include "NeedConstructor.h"

#include <iostream>
using namespace std;

NeedConstructor::NeedConstructor()
    :maxCount(10), ref(twice)
{
    twice = maxCount*2;
}

NeedConstructor::NeedConstructor(int mc, int& r)
    :maxCount(mc), ref(r)
{
    twice = mc*2;
}

