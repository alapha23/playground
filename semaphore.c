#include <stdio.h>
#include <pthread.h>

void func1(void *p){int i=1000; while(i) ;}
void func2(void *p){int i=1000; while(i) ;}

sem_t sem;
char buf[24];

int main(void)
{
	pthread_t t1;
	pthread_t t2;

	char *msg1 = "Thread 1\n";
	char *msg2 = "Thread 2\n";

	sem_init(&sem, 0, 1);
	pthread_create(&t1, NULL, (void *)&func1, (void *) msg1);


}
