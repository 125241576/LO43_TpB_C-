#include "Server.class.hpp"

#include <iostream>
#include <fstream>

Server::Server()
{
    unAttribut = 0;
    unAutreAttribut = 0;
}

Server::Server(const Server& unAutreObjet)
{
    unAttribut = 0;
    unAutreAttribut = 0;
}

Server::~Server()
{}

Server& Server::operator=(const Server &s)
{
    unAttribut = s.unAttribut;
    unAutreAttribut = s.unAutreAttribut;
}

Server& Server::operator<<(ostream &out, const Server &s);
{
    consoleWrite(s);
    fileWrite(s);

    return out;
}

void Server::consoleWrite(char strToDisplay)
{
    std::cout << strToDisplay;
}

void Server::fileWrite(char strToWrite)
{
    ofstream logfile;
    logfile.open("lo43Project.log");
    logfile << strToWrite;
    logfile.close();
}