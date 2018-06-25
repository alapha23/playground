#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>		// gethostbyxxxx
#include <arpa/inet.h>		// inet_aton, inet_ntoa
#include <netinet/in.h>		// htonl, ntohl

struct hostent *Gethostbyaddr(const char* addr, int len, int type);
struct hostent *Gethostbyname(const char*name);

int main(int argc, char **argv)
{
  char **pp;
  struct in_addr addr;		// struct in_addr specifies an IP address
  struct hostent *hostp;	// struct hostent in netdb.h specifies a host entry in DNS database

  if(argc!=2)
  {
    fprintf(stderr, "usage: %s <domain name or dotted-decimal>\n", argv[0]);
    exit(0);
  }

  if(inet_aton(argv[1], &addr)!=0)
  // translate decimal dot into struct in_addr
    hostp = Gethostbyaddr((const char*)&addr, sizeof(addr), AF_INET);
  else
  // argument is the domain name rather than decimal dot
    hostp = Gethostbyname(argv[1]);

  printf("official hostname: %s\n", hostp->h_name);

  for(pp = hostp->h_aliases; *pp != NULL; pp++)
  {
    printf("alias: %s\n", *pp);
  }

  for(pp = hostp->h_addr_list; *pp != NULL; pp++)
  {
    addr.s_addr = *((unsigned int *)*pp);
    printf("address: %s\n", inet_ntoa(addr));
  }
  exit(0);
}


struct hostent *Gethostbyaddr(const char* addr, int len, int type)
{
  struct hostent* hostp;
  if((hostp = gethostbyaddr(addr, len, type)) != NULL)
  {
    return hostp;
  }
  else
   fprintf(stderr, "Gethostbyaddr error: No address associated with addr\n");
}

struct hostent *Gethostbyname(const char*name)
{
  struct hostent* hostp;
  if((hostp = gethostbyname(name)) != NULL)
  {
    return hostp;
  }
  else
   fprintf(stderr, "Gethostbyname error: No address associated with name\n");
}
