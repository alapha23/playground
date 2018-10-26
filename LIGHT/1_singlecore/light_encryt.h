#ifndef EN__
#define EN__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char key_arr[16][4];	// 16 keys each length 40 bits

void cal_all_key(char *Key);
char *cal_Ctext(char *Ptext);

#endif
