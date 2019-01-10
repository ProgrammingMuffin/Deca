#include<iostream>
#include "cli.h"

int main( )
{
    std::string INPUT, VALUE, CMD, MESSAGE;
    InitCLI();
    std::cin>>INPUT;
    if(ReadInput(INPUT, VALUE) == 0)
    {
        CMD = VALUE;
        HandleCommand(CMD);
    }
    else
    {
        MESSAGE = VALUE;
    }
    return 0;
}