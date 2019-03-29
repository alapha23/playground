all: char short int long uchar ushort uint ulong

char: char.c
	gcc -o char char.c
short: short.c
	gcc -o short short.c
int: int.c
	gcc -o int int.c
long: long.c
	gcc -o long long.c
uchar: uchar.c
	gcc -o uchar uchar.c
ushort: ushort.c
	gcc -o ushort ushort.c
uint: uint.c
	gcc -o uint uint.c
ulong: ulong.c
	gcc -o ulong ulong.c

clean:
	rm -f char short int long uchar ushort uint ulong

test: all
ifeq ("$(shell pwd)", "$(HOME)/hw01")
	@echo -n "char    test 1  "; ansdiff "21" "00010101 00010101" "`echo 21 | ./char | xargs`" --inline
	@echo -n "char    test 2  "; ansdiff "-4" "11111100 11111100" "`echo -4 | ./char | xargs`" --inline
	@echo -n "char    test 3  "; ansdiff "0" "00000000 00000000" "`echo 0 | ./char | xargs`" --inline
	@echo -n "short   test 1  "; ansdiff "21" "0000000000010101 0000000000010101" "`echo 21 | ./short | xargs`" --inline
	@echo -n "short   test 2  "; ansdiff "-4" "1111111111111100 1111111111111100" "`echo -4 | ./short | xargs`" --inline
	@echo -n "short   test 3  "; ansdiff "0" "0000000000000000 0000000000000000" "`echo 0 | ./short | xargs`" --inline
	@echo -n "int     test 1  "; ansdiff "21" "00000000000000000000000000010101 00000000000000000000000000010101" "`echo 21 | ./int | xargs`" --inline
	@echo -n "int     test 2  "; ansdiff "-4" "11111111111111111111111111111100 11111111111111111111111111111100" "`echo -4 | ./int | xargs`" --inline
	@echo -n "int     test 3  "; ansdiff "0" "00000000000000000000000000000000 00000000000000000000000000000000" "`echo 0 | ./int | xargs`" --inline
	@echo -n "long    test 1  "; ansdiff "21" "0000000000000000000000000000000000000000000000000000000000010101 0000000000000000000000000000000000000000000000000000000000010101" "`echo 21 | ./long | xargs`" --inline
	@echo -n "long    test 2  "; ansdiff "-4" "1111111111111111111111111111111111111111111111111111111111111100 1111111111111111111111111111111111111111111111111111111111111100" "`echo -4 | ./long | xargs`" --inline
	@echo -n "long    test 3  "; ansdiff "0" "0000000000000000000000000000000000000000000000000000000000000000 0000000000000000000000000000000000000000000000000000000000000000" "`echo 0 | ./long | xargs`" --inline
	@echo -n "uchar   test 1  "; ansdiff "21" "00010101 00010101" "`echo 21 | ./uchar | xargs`" --inline
	@echo -n "uchar   test 2  "; ansdiff "8" "00001000 00001000" "`echo 8 | ./uchar | xargs`" --inline
	@echo -n "uchar   test 3  "; ansdiff "0" "00000000 00000000" "`echo 0 | ./uchar | xargs`" --inline
	@echo -n "ushort  test 1  "; ansdiff "21" "0000000000010101 0000000000010101" "`echo 21 | ./ushort | xargs`" --inline
	@echo -n "ushort  test 2  "; ansdiff "8" "0000000000001000 0000000000001000" "`echo 8 | ./ushort | xargs`" --inline
	@echo -n "ushort  test 3  "; ansdiff "0" "0000000000000000 0000000000000000" "`echo 0 | ./ushort | xargs`" --inline
	@echo -n "uint    test 1  "; ansdiff "21" "00000000000000000000000000010101 00000000000000000000000000010101" "`echo 21 | ./uint | xargs`" --inline
	@echo -n "uint    test 2  "; ansdiff "8" "00000000000000000000000000001000 00000000000000000000000000001000" "`echo 8 | ./uint | xargs`" --inline
	@echo -n "uint    test 3  "; ansdiff "0" "00000000000000000000000000000000 00000000000000000000000000000000" "`echo 0 | ./uint | xargs`" --inline
	@echo -n "ulong   test 1  "; ansdiff "21" "0000000000000000000000000000000000000000000000000000000000010101 0000000000000000000000000000000000000000000000000000000000010101" "`echo 21 | ./ulong | xargs`" --inline
	@echo -n "ulong   test 2  "; ansdiff "8" "0000000000000000000000000000000000000000000000000000000000001000 0000000000000000000000000000000000000000000000000000000000001000" "`echo 8 | ./ulong | xargs`" --inline
	@echo -n "ulong   test 3  "; ansdiff "0" "0000000000000000000000000000000000000000000000000000000000000000 0000000000000000000000000000000000000000000000000000000000000000" "`echo 0 | ./ulong | xargs`" --inline
else
	@echo "[FAILED] do your homework at the $(HOME)/hw01 directory"
endif
