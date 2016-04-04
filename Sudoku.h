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
	void solve1();
	void solve2();
	
	private:
	int thesudoku[9][9];
	int thesudokusol[9][9];
	int thesudokusol2[9][9];
	
};
