#include<iostream>
class Sudoku{
	public:
	void giveQuestion();
	void readIn();
	void solve();
	void changeNum(int a,int b);
	void changeRow(int a,int b);
	void changeCol(int a,int b);
	void rotate(int n);
	void flip(int n);
	void transform();
	void change();
	void judge();
	void thebreak(int a);
	void findanswer(int a,int x,int y,int fitin);
	
	private:
	int thesudokusol[9][9];
	int thesudoku[9][9];
	int nop;
	int answer[9][9][9];
	int solveway;
	int whichone;
	int I;
	int J;
	int thetrueanswer[9][9];
	int thesudokuless[9][9][9][9];
	int thesudokurest[9][9][9];
	
};
