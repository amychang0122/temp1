#include <iostream>
#include <cstdlib>
#define size 4

class class_pro2
{
	public:
		void give();	//給初始數字(兩個)
		void print();	//輸出現存的數值
		void check_up();	//加法計算，再多給一個值到表個中
		void check_down();    //加法計算，再多給一個值到表個中
		void check_left();    //加法計算，再多給一個值到表個中
		void check_right();    //加法計算，再多給一個值到表個中
		bool judge_lose();	//若最後格子已滿又動不了則lose
		bool judge_win();	//若有格子內容為2048則win
	private:
		int table[size][size];
		int i,j,count,test,index;
};
