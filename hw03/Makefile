.PHONY: all clean

all: angle pp_deck classification

angle: angle.c
	gcc angle.c -o angle -lm

pp_deck: pp_deck.c
	gcc pp_deck.c -o pp_deck

classification: classification.c classify.o
	gcc classification.c classify.o -o classification

copy:
	cp /home/share/classify.o .

clean:
	rm -rf angle pp_deck classification

test: all
#ifeq ("$(shell pwd)", "$(HOME)/hw03")
	  @echo -n "angle    test 1  "; ansdiff "1 1 1" "angle: 0.000000" "`echo "1 1 1" | ./angle | xargs`" --inline; echo -n ""
	  @echo -n "angle    test 2  "; ansdiff "2 1.0 0.0 0.0 1.0" "angle: 90.000000" "`echo "2 1 0 0 1" | ./angle | xargs`" --inline; echo -n ""
	  @echo -n "angle    test 3  "; ansdiff "3 1 0 0 0 0 1" "angle: 90.000000" "`echo "3 1 0 0 0 0 1" | ./angle | xargs`" --inline; echo -n ""
	  @echo -n "pp_deck    test 1  "; ansdiff "3 S2 S1 S3" "S1 S2 S3" "`echo "3 S2 S1 S3" | ./pp_deck | xargs`" --inline; echo -n ""
	  @echo -n "pp_deck    test 2  "; ansdiff "3 S2 S1 S3" "S1 S2 S3" "`echo "3 S2 S1 S3" | ./pp_deck | xargs`" --inline; echo -n ""
	  @echo -n "classification    test 1  "; ansdiff "2 1 2" "00:00 01:00 02:00 03:00 04:00 05:00 06:00 07:00 08:00 09:00 10:00 11:00 12:01 13:00 14:00 15:01 16:00 17:00 18:00 19:00 20:00 21:00 22:00 23:00 24:00 25:00 26:00 27:00 28:00 29:00 30:00 31:00" "`echo "2 1 2" | ./classification | xargs`" --inline; echo -n ""
	  @echo -n "classification    test 2  "; ansdiff "4 10 11 -3 5" "00:00 01:00 02:00 03:00 04:01 05:01 06:00 07:00 08:00 09:00 10:00 11:01 12:00 13:00 14:00 15:00 16:00 17:00 18:00 19:01 20:00 21:00 22:00 23:00 24:00 25:00 26:00 27:00 28:00 29:00 30:00 31:00 " "`echo "4 10 11 -3 5" | ./classification | xargs`" --inline; echo -n ""
#else
#@echo "[FAILED] do your homework at the $(HOME)/hw01 directory"
#endif
	  
