#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>		// gethostbyxxxx
#include <arpa/inet.h>		// inet_aton, inet_ntoa
#include <netinet/in.h>		// htonl, ntohl

int main(int argc, char **argv)
{
  struct in_addr inaddr;		// struct in_addr specifies an IP address
  unsigned int addr;
  char *addr_dd;

  if(argc!=2)
  {
    fprintf(stderr, "usage: %s <dotted-decimal>\n", argv[0]);
    exit(0);
  }

  if (inet_aton(argv[1], &inaddr) == 0)		// convert dd to network addr struct
  {
    fprintf(stderr, "inet_aton error");
    fflush(stderr);
  }
  addr = ntohl(inaddr.s_addr);		// We don't know if it is a big endian or little endian machine
  printf("0x%x\n", addr);

  exit(0);
}

