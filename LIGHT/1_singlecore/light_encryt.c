#include "light_encryt.h"

int main(int argc, char **argv)
{
	char *Key, *Ptext;
	char *encrypted;
	if(argc < 3)
	{
		printf("Usage: ./encrypt Key Ptext\n");
		return 1;
	}
	Key = malloc(5 * sizeof(char));
	Ptext = malloc(4 * sizeof(char));
	encrypted = malloc(4 * sizeof(char));

	memcpy(Key, argv[1], 5);
	memcpy(Ptext, argv[2], 4);



	cal_all_key(Key);
	encrypted = cal_Ctext(Ptext);

	printf("'%s' is the encrypted string.\n", encrypted);

	free(Key);
	free(Ptext);
	free(encrypted);
	return 0;
}

void cal_all_key(char *Key)
{
	int i;
	char current_key[5];
	char holder_key[4];

	memcpy(current_key, Key, 5);
	for (i=0; i<16; i++)
	{
		// Extract key from current_key
		memcpy(key_arr[i], current_key, 4); 
		// Update current_key
		// translate current_key from char to unsigned long long
		unsigned long long crt_k = 0;
		for(int k=0; k<5; k++)
		{
			crt_k += (unsigned long long)current_key[k] << (8*(4-k));
		}
		//printf("For current key %s, the ascii is %llu\n", current_key, crt_k);
		crt_k << 15;

	}

}

char *cal_Ctext(char *Ptext)
{return NULL;}
