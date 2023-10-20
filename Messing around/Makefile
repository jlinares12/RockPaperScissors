
output: rockPaperScissors.o win_conditions.o
	clang++ rockPaperScissors.o win_conditions.o -o output

Messing around.cpp: rockPaperScissors.cpp
	clang++ -c rockPaperScissors.cpp

win_conditions.cpp: win_conditions.cpp win_conditions.h
	clang++ -c win_conditions.cpp

clean:
	rm *.o output