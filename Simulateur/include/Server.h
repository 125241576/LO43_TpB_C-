#ifndef SERVER_H
#define SERVER_H

#include <iostream>

using namespace std;

class Server
{
    public:
        Server();
        Server(Server const&);
        virtual ~Server();
        Server& operator=(Server const&);
        friend ostream& operator<<(ostream&, Server const&);
        // Visualiser les donn�es arrivant dans la console
        void consoleWrite(string);
        // Ecriture des donn�es des capteurs dans les fichiers de logs
        void fileWrite(string, string);

        int val;

    protected:

    private:

};

#endif // SERVER_H
