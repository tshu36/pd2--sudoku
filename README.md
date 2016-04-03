# project1
寫得很成功，在自己的電腦都能編譯
編譯:vi makefile
main:Sudoku.o giveQuestion.cpp solve.cpp transform.cpp Sudoku.cpp
        g++ -c Sudoku.cpp -o Sudoku.o
        g++ -o giveQuestion giveQuestion.cpp Sudoku.o
        g++ -o solve solve.cpp Sudoku.o
        g++ -o transform transform.cpp Sudoku.o
make
