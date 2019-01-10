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
        return 0;
    }
    else                                //It is a message, not a command.
    {
        value = input;
        return 1;
    }
}

void HandleCommand(std::string cmd)
{
    //do something related to command handling
    std::string command;
    std::string param;
    bool isParam = false;       //Parameters exist or not
    int i = 0;
    while(i < (int)cmd.length() && cmd[i]!=' ')
    {
        command.push_back(cmd[i]);
        i++;
    }
    i++;
    if(i < (int)cmd.length())
    {
        isParam = true;
    }
    if(isParam == true)
    {
        while(i < (int)cmd.length())
        {
            param.push_back(cmd[i]);
            i++;
        }
    }
    if(command == "login")
    {
        std::cout<<"command is: "<<command;
        if(isParam == true)
        {
            std::cout<<" and param is: "<<cmd<<std::endl;
        }
    }
}