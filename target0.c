#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <assert.h>

#define EMAX 1024 
#define running 1

int 
main(int argc, char* argv[]) {
    assert(argc == 2);
    int port = atoi(argv[1]);
    int listenfd = open_listenfd(port);

    struct sockaddr_in client;
    static socklen_t csize;

    memset(&client, 0x00, sizeof(client));
    memset(&csize, 0x00, sizeof(csize));

    return 0;
}

