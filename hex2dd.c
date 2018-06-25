#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>		// gethostbyxxxx
#include <arpa/inet.h>		// inet_aton, inet_ntoa
#include <netinet/in.h>		// htonl, ntohl

int main(int argc, char **argv)
{
  struct in_addr inaddr;		// struct in_addr specifies an IP address
  unsigned int addr;

  if(argc!=2)
  {
    fprintf(stderr, "usage: %s <hex number>\n", argv[0]);
    exit(0);
  }

  sscanf(argv[1], "%x", &addr);		// store hex input into addr
  inaddr.s_addr = htonl(addr);		// network addr struct 
  printf("%s\n", inet_ntoa(inaddr));	// network byte order(a struct) turned into a dotted-decimal char pointer
  exit(0);
}

