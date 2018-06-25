#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void* worker(void *vargp)
{
	sleep(1);
	printf("Wroker\n");
	return NULL;
}

int main(void)
{
  pthread_t tid;
  pthread_create(&tid, NULL, worker, NULL);
  sleep(5);
  exit(5);
}
