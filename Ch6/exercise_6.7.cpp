#include <iostream>
#include <stdio.h>

size_t function()
{
    static size_t count = 0;
    return count++;
}