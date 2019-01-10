#include<iostream>
#include "cli.h"


void InitCLI()
{
    std::cout<<"Welcome to the DeCA chat application!"<<std::endl;
}

int ReadInput(std::string input, std::string &value)
{
    int i = 0;
    if(input[i] == '/')                 //Command encountered
    {
        i++;
        while(i < (int)input.length())
        {
            value.push_back(input[i]);
            i++;
        }
    }
}