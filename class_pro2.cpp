#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "class_pro2.h"

using namespace std;
int a,b,c,d;

void class_pro2::give()
{
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			table[i][j]=0;
		}
	}
	srand(time(NULL));
	i=rand()%4;
	j=rand()%4;
	table[i][j]=2;
	do
	{
		i=rand()%4;
		j=rand()%4;
	}
	while(table[i][j]!=0);		
	table[i][j]=2;
}

void class_pro2::print()
{
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<setw(4)<<table[i][j];
		}
		cout<<endl;
	}
}

void class_pro2::check_left()
{	
	//以向左邊為例
	for(i=0;i<size;i++)
	{
		test=0;
		index=0;
		a=0;
		b=0;
		c=0;
		d=0;
		while(test<size)
		{
			if(table[i][test]!=0)
			{
				if(a==0)
				{
					a=table[i][test];
					test++;
				}
				else if(a!=0&&b==0)
				{
					b=table[i][test];
					test++;
				}
				else if(b!=0&&c==0)
				{
					c=table[i][test];
					test++;
				}
				else if(c!=0&&d==0)
				{
					d=table[i][test];
					test++;
				}
			}
			else
			{
				test++;
			}
		}
		test=0;
		while(test<size)//(a!=0)	//(test<size)
		{
			if((a*b*c*d)!=0&&a!=b&&b!=c&&c!=d)
			{
				index=4;
				break;
			}
			if(a==b) 
			{							
				table[i][index]=a+b;	
				a=c;
				b=d;
				c=0;
				d=0;
				index++;
				test += 2;
			}
			else					
			{
				table[i][index]=a;
				a=b;
				b=c;
				c=d;
				d=0;
				test++;
				index++;
			}
		}	
		while(index<size)  
		{ table[i][index]=0;
			index++; }		//revised~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	}
	count=0;
	while(count<1)
	{
		i=rand()%4;
		j=rand()%4;
		if(table[i][j]==0)
		{
			table[i][j]=2;
			count++;
		}
	}
}

void class_pro2::check_right()
{	
	//以向右邊為例
	for(i=0;i<size;i++)
	{
		test=0;
		index=0;
		a=0;
		b=0;
		c=0;
		d=0;
		while(test<size)
		{
			if(table[i][3-test]!=0)
			{
				if(a==0)
				{
					a=table[i][3-test];
					test++;
				}
				else if(a!=0&&b==0)
				{
					b=table[i][3-test];
					test++;
				}
				else if(b!=0&&c==0)
				{
					c=table[i][3-test];
					test++;
				}
				else if(c!=0&&d==0)
				{
					d=table[i][3-test];
					test++;
				}
			}
			else
			{
				test++;
			}
		}
		test=0;
		while(test<size)//(a!=0)	//(test<size)
		{
			if((a*b*c*d)!=0&&a!=b&&b!=c&&c!=d)	
			{
				index=4;
				break;
			}
			if(a==b) 
			{							
				table[i][3-index]=a+b;	
				a=c;
				b=d;
				c=0;
				d=0;
				index++;
				test += 2;
			}
			else					
			{
				table[i][3-index]=a;
				a=b;
				b=c;
				c=d;
				d=0;
				test++;
				index++;
			}
		}	
		while(index<size)  
		{ table[i][3-index]=0;
			index++; }		//revised~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	}
	count=0;
	while(count<1)
	{
		i=rand()%4;
		j=rand()%4;
		if(table[i][j]==0)
		{
			table[i][j]=2;
			count++;
		}
	}
}

void class_pro2::check_up()
{	
	//以向左邊為例
	for(i=0;i<size;i++)
	{
		test=0;
		index=0;
		a=0;
		b=0;
		c=0;
		d=0;
		while(test<size)
		{
			if(table[test][i]!=0)
			{
				if(a==0)
				{
					a=table[test][i];
					test++;
				}
				else if(a!=0&&b==0)
				{
					b=table[test][i];
					test++;
				}
				else if(b!=0&&c==0)
				{
					c=table[test][i];
					test++;
				}
				else if(c!=0&&d==0)
				{
					d=table[test][i];
					test++;
				}
			}
			else
			{
				test++;
			}
		}
		test=0;
		while(test<size)//(a!=0)	//(test<size)
		{
			if((a*b*c*d)!=0&&a!=b&&b!=c&&c!=d)
			{
				index=4;
				break;
			}
			if(a==b) 
			{							
				table[index][i]=a+b;	
				a=c;
				b=d;
				c=0;
				d=0;
				index++;
				test += 2;
			}
			else					
			{
				table[index][i]=a;
				a=b;
				b=c;
				c=d;
				d=0;
				test++;
				index++;
			}
		}	
		while(index<size)  
		{ table[index][i]=0;
			index++; }		//revised~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	}
	count=0;
	while(count<1)
	{
		i=rand()%4;
		j=rand()%4;
		if(table[i][j]==0)
		{
			table[i][j]=2;
			count++;
		}
	}
}

void class_pro2::check_down()
{	
	//以向左邊為例
	for(i=0;i<size;i++)
	{
		test=0;
		index=0;
		a=0;
		b=0;
		c=0;
		d=0;
		while(test<size)
		{
			if(table[3-test][i]!=0)
			{
				if(a==0)
				{
					a=table[3-test][i];
					test++;
				}
				else if(a!=0&&b==0)
				{
					b=table[3-test][i];
					test++;
				}
				else if(b!=0&&c==0)
				{
					c=table[3-test][i];
					test++;
				}
				else if(c!=0&&d==0)
				{
					d=table[3-test][i];
					test++;
				}
			}
			else
			{
				test++;
			}
		}
		test=0;
		while(test<size)//(a!=0)	//(test<size)
		{
			if((a*b*c*d)!=0&&a!=b&&b!=c&&c!=d)
			{
				index=4;
				break;
			}
			if(a==b) 
			{							
				table[3-index][i]=a+b;	
				a=c;
				b=d;
				c=0;
				d=0;
				index++;
				test += 2;
			}
			else					
			{
				table[3-index][i]=a;
				a=b;
				b=c;
				c=d;
				d=0;
				test++;
				index++;
			}
		}	
		while(index<size)  
		{ table[3-index][i]=0;
			index++; }		//revised~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	}
	count=0;
	while(count<1)
	{
		i=rand()%4;
		j=rand()%4;
		if(table[i][j]==0)
		{
			table[i][j]=2;
			count++;
		}
	}
}

bool class_pro2::judge_lose()
{
	int temp=0;
	count=0;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(table[i][j]!=table[i][j+1])	//每一列中，跟右邊的數不同就++
				temp++;
			if(table[j][i]!=table[j+1][i])	//每一行中，跟下面的數不同就++
				temp++;
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(table[i][j]==0)
				count++;
		}
	}
	if(temp==24&&count==0)
		return false;
	else
		return true;
}

bool class_pro2::judge_win()
{
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(table[i][j]==2048)
				count++;
		}
	}
	if(count!=0)
		return true;
	else
		return false;
}
