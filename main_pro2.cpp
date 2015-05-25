#include <iostream>
#include <cstdlib>
#include "class_pro2.h"
using namespace std;

int main()
{	
	int a,many=0;	//接收數字當作移動方向
	bool win=false,lose=true;
	class_pro2 m_class;
	m_class.give();
	m_class.print();
	while(lose==true&&win==false)
	{
		cin>>a;
		switch(a)
		{
			case 2:
				m_class.check_down();
				m_class.judge_lose();
				m_class.judge_win();
				m_class.print();
				many++;
				cout<<many<<"steps~"<<endl;
				if(win==true)
					cout<<"Victory!!!"<<endl;
				if(lose==false)
					cout<<"Sorry~ You lose~"<<endl<<"Your score:"<<many<<endl;
				break;
			case 4:	
				m_class.check_left();
				m_class.judge_lose();
				m_class.judge_win();
				m_class.print();
				many++;
				cout<<many<<"steps~"<<endl;
				if(win==true)
					cout<<"Victory!!!"<<endl;
				if(lose==false)
					cout<<"Sorry~ You lose~"<<endl<<"Your score:"<<many<<endl;
				break;
			case 6:	
				m_class.check_right();
				m_class.judge_lose();
				m_class.judge_win();
				m_class.print();
				many++;
				cout<<many<<"steps~"<<endl;
				if(win==true)
					cout<<"Victory!!!"<<endl;
				if(lose==false)
					cout<<"Sorry~ You lose~"<<endl<<"Your score:"<<many<<endl;
				break;
			case 8:	
				m_class.check_up();
				m_class.judge_lose();
				m_class.judge_win();
				m_class.print();
				many++;
				cout<<many<<"steps~"<<endl;
				if(win==true)
					cout<<"Victory!!!"<<endl;
				if(lose==false)
					cout<<"Sorry~ You lose~"<<endl<<"Your score:"<<many<<endl;
				break;
		}
	}
	return 0;
}
