all: catalan decryption

catalan: catalan.c
	gcc -o catalan catalan.c

decryption: decryption.c
	gcc -o decryption decryption.c


test: all
ifeq ("$(shell pwd)", "$(HOME)/hw02")
	@echo -n "catalan    test 1  "; ansdiff "5" "42" "`echo 5 | ./catalan | xargs`" --inline
	@echo -n "catalan    test 2  "; ansdiff "6" "132" "`echo 6 | ./catalan | xargs`" --inline
	@echo -n "catalan    test 3  "; ansdiff "9" "4862" "`echo 9 | ./catalan | xargs`" --inline
	@echo -n "decryption    test 1  "; ansdiff "6 FGJJQ" "HELLO" "`echo "5 FGJJQ" | ./decryption | xargs`" --inline
	@echo -n "decryption    test 2  "; ansdiff "7 DPKGLBU" "FRIENDS" "`echo "7 DPKGLBU" | ./decryption | xargs`" --inline
	@echo -n "decryption    test 3  "; ansdiff "4 YQPM" "WORK" "`echo "4 YQPM" | ./decryption | xargs`" --inline
else
	@echo "[FAILED] do your homework at the $(HOME)/hw01 directory"
endif
