#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cstring>
using namespace std;
 class Tictac
{
public:
	int no,i,j,b,x1,x2;
	char a[3][3];
	char a1,a2,ch;
	char name[20],name2[20];
	Tictac()
	{
	
    x1=0;
	x2=0;
	b=49;
		for(i=0;i<3;i++)
	  {
		  for(j=0;j<3;j++)
		  {
			  a[i][j]=b++;
		
		  }
	 
	  }
		
	}
	void show3()
	{
		int e=49;
		for(i=0;i<3;i++)
	  {
		  for(j=0;j<3;j++)
		  {
			  a[i][j]=e++;
		
		  }
	 
	  }
	}
	void show(char k,int d,int p)
	{
    int count=0;
	int u=0;
	char m;
	    m=(char)(d+48);
		
		for(i=0;i<3;i++)
	  {
		  for(j=0;j<3;j++)
		  {
		   if(m==a[i][j])
		   {
			   a[i][j]=k;
			   count++;
			 
		   }
		   else
		   {
			   u++;
		   }
	   }
	}
	  if(u>8)
	  {
		  cout<<"\n\tSorry no overwrriting please try again";
		  if(p==1)
			  p1();
		  else if(p==2)
			  p2();
	  }

	}
    void sc()
{
	std::system("clear");
}
	int insert()
	{
		int k,v;
		char ch;
		int b1=49;	
	    x:cout<<"\n\tEnter the choice of "<<name<<" (whether X or O) : ";
		cin>>a1;
		if(a1=='x' || a1=='X')
		{
			cout<<"\n\tChoice of "<<name<<" is X\n\t";
		   cout<<"\n\tChoice of "<<name2<<" is O\n\t";
		   a2='O';
		}
		else if(a1=='o' || a1=='O')
			{
				cout<<"\n\tChoice of "<<name<<" is O\n\t";
				cout<<"\n\tChoice of "<<name2<<" is X\n\t";
				a2='X';
		   }
		else
			{
				cout<<"\n\tError please re-enter";
		        goto x;
		    }
		show3();
		p1();
		show2();
		v=check();
		if(v==1)
		{
			show3();
			return 1;
		}     
		p2();
		show2();
		v=check();
		if(v==1)
		{
			show3();
		 return 1;
		}
		p1();
		show2();
		v=check();
		if(v==1)
		{
			show3();
			return 1;
		}
		p2();
		show2();
		v=check();
		if(v==1)
		{
			show3();
			return 1;
		}
		p1();
		show2();
		v=check();
		if(v==1)
		{
			show3();
			return 1;
		}
		p2();
		show2();
		v=check();
		if(v==1)
		{
			show3();
			return 1;
		}
		p1();
		show2();
		v=check();
		if(v==1)
		{
			show3();
			return 1;
		}
		p2();
		show2();
		v=check();
		if(v==1)
		{
			show3();
			return 1;
		}
		p1();
		show2();
		v=check();
		if(v==1)
		{
			show3();
			return 1;
		}
		cout<<"\n\tIt is a draw";
		cout<<"\n\tDo you want to continue?\n\t1.Yes\n\t2.No\n\t";
	    cin>>k;
		if(k==1)
		{
			cout<<"\n\tGame screen:\n";
			show3();
    	for(i=0;i<3;i++)
	     {
		 for(j=0;j<3;j++)
		  {
		 	a[i][j]=b1++;
			cout<<"\t\t"<<a[i][j];
         }
		cout<<"\n\n";
	 }
			insert();
		}
		else
		{
		        show3();
			return 1;
		}

	}
	void p1()
	{
		int p=1;
		cout<<"\n\t"<<name<<" Your Turn";
		y:cout<<"\n\tEnter the position where you want to insert "<<a1<<": ";
		cin>>no;
	     if(no<0 || no>9)
		{
			cout<<"\n\tError re-enter choice";
		    goto y;
	    }
		 else
			 show(a1,no,p);


	}
	void p2()
	{
		int p=2;
		cout<<"\n\t"<<name2<<" Your Turn:\n";
		x:cout<<"\n\tEnter the position where you want to insert "<<a2<<": ";
		cin>>no;
		
	     if(no<0 || no>9)
		{
			cout<<"\n\tError re-enter choice";
		    goto x;
	    }
		 else
			 show(a2,no,p);
	}
	void show2()
	{
		sc();
		cout<<"\n";
		cout<<"\n\tGame Screen :\n";
	 for(i=0;i<3;i++)
	  {
		  for(j=0;j<3;j++)
		  {
			  cout<<"\t\t"<<a[i][j];
		  }
	  cout<<"\n\n";
	  }
	}
	int check()
	{
		    int f,f1=0;
			f=0;
		
				if(a[0][0]==a[0][1] && a[0][0]==a[0][2])
				{
					if(a[0][0]==a1)
						{
							cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					        x1++;
					   }
					else
					{
						cout<<"\n\tCONGRATS ! "<<name2<<" you are the winner!!\n";
				        x2++;	   
					}
						f++;	
				}
			
				if(a[1][0]==a[1][1] && a[1][0]==a[1][2])
				{
					if(a[1][0]==a1)
							{
					cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					x1++;         
					}
					else
					{
						cout<<"\n\tCONGRATS ! "<<name2<<" you are the winner!!\n";
				        x2++;
					}
						f++;		
				}
			
				if(a[2][0]==a[2][1] && a[2][0]==a[2][2])
				{
					if(a[2][0]==a1)
					{
				    	cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
				    	x1++;   
					}
					else
					{
						cout<<"\n\tCONGRATS ! "<<name2<<" you are the winner!!\n";
						x2++;
					}
						f++;		
				}
			
				if(a[0][0]==a[1][0] && a[0][0]==a[2][0])
				{
					if(a[0][0]==a1)
				   	{
							cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
				            x1++;	         
					 }
					else
					{
						cout<<"\n\tCONGRATS ! "<<name2<<" you are the winner!!\n";
						x2++;
					}
						f++;
				}
		
			
				if(a[0][1]==a[1][1] && a[0][1]==a[2][1])
				{
					if(a[0][1]==a1)
					{
					cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					x1++;
					}
					else
					{
						cout<<"\n\tCONGRATS ! "<<name2<<" you are the winner!!\n";
						x2++;
					}
						f++;
				}
			
				if(a[0][2]==a[1][2] && a[0][2]==a[2][2])
				{
					if(a[0][2]==a1)
							{
							cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
							x1++;
					   }
					else
					{
						cout<<"\n\tCONGRATS ! "<<name2<<" you are the winner!!\n";
						x2++;
					}
						f++;
				}

			if(a[0][0]==a[1][1] && a[0][0]==a[2][2])
			{
				if(a[0][0]==a1)
						{
							cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
							x1++;

					   }
					else
					{
						cout<<"\n\tCONGRATS ! "<<name2<<" you are the winner!!\n";
						x2++;
					}
						f++;		
 			}
			if(a[0][2]==a[1][1] && a[0][2]==a[2][0])
			{
				if(a[0][2]==a1)
						{
							cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
							x1++;
					   }
					else
					{
						cout<<"\n\tCONGRATS ! "<<name2<<" you are the winner!!\n";
						x2++;
					}
						f++;
			}
		
			if(f>0)
			{
				cout<<"\n\tDo you want to play again?\n\t1.Yes\n\t2.No\n\t";
				cin>>f1;
	           if(f1==1)
				  {
					  show3();
					  show2();
				      insert();
			       }
    			   else
				    return 1;
			   
			}
		
	}
	int AI()
	{ 
		int k,b1,v;
		v=0;
		b1=49;
	
		 dota:cout<<"\n\tEnter You choice (whether X or O)\n\t";
		 cin>>a1;
		  if(a1=='X' || a1=='x')
           {
			   cout<<"\n\tYour choice is X\n\t";
               cout<<"\n\tComputer's Choice is O\n\t"; 
			   ch='O';
		  } 

		  else if(a1=='O' || a1=='o')
		  {
 			  cout<<"\n\tYour choice is O\n\t";
			  cout<<"\n\tComputer's Choice is X\n\t";
		      ch='X';
		  }
		  else
		  {
			  cout<<"\n\t Invalid Choice Re-enter choice";
			  goto dota;
		  }
		show3();
		p1();
		v=check3();
		comp();
		v=check3();
	    show2();
		p1();
		v=check3();
		comp();
		v=check3();
		show2();
		p1();
		v=check3();
		if(v==1)
		{
			show3();
		return 1;
		}
		comp();
		v=check3();
		if(v==1)
		{
			show3();
		return 1;
		}
		show2();
		p1();
		v=check3();
		if(v==1)
		{
			show3();
		return 1;
		}
		comp();
		v=check3();
		if(v==1)
		{
			show3();
			return 1;
		}
		show2();
		p1();
		v=check3();
		if(v==1)
		{
			show3();
			return 1;
		}
		cout<<"\n\tIt is a draw";
		cout<<"\n\tDo you want to continue?\n\t1.Yes\n\t2.No\n\t";
	    cin>>k;
		if(k==1)
		{
			cout<<"\n\tGame screen:\n";
			show3();
   	for(i=0;i<3;i++)
	    {
		for(j=0;j<3;j++)
		 {
			a[i][j]=b1++;
			cout<<"\t\t"<<a[i][j];
        }
	 	cout<<"\n\n";
	  }
	  AI();
	}
		else
			return 1;
}
    void comp()
{
	int s,count=0;
	if(a[1][1]!=a1 && a[1][1]!=ch)
	{
		count++;
		a[1][1]=ch;
	}
	else
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			  if(a[i][j]!=a1 && a[i][j]!=ch)
				  {
					  a[i][j]=ch;
			          s=check2();
					  if(s==1)
					  {
						  a[i][j]=ch;
						  count++;
						  break;
					  }
					  else
					  {
						  a[i][j]=((3*i)+j)+49;
						 
					  }
			      }
			}
			if(count>0)
				break;
		}
		if(count==0)
		{
		for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{	
				 if(a[i][j]!=a1 && a[i][j]!=ch)
				  {
				  a[i][j]=a1;
				  s=check2();
				  if(s==1)
				  {
					a[i][j]=ch;
					count++;				  
					break;
				  }
				  else
				  {
					 a[i][j]=((3*i)+j)+49;				    
				  }
				 }
			    }
			if(count>0)
			break;
           }
			
        }
	}
	int count2=0;
	if(count==0)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			  if(a[i][j]!=a1 && a[i][j]!=ch)
			  {
			  a[i][j]=ch;
			  count2++;
			  break;
			  }
			}
			if(count2>0)
				break;

		}

	}

}
	int check3()
	{
		int f,f1=0;
			f=0;
		
				if(a[0][0]==a[0][1] && a[0][0]==a[0][2])
				{
					show2();
					if(a[0][0]==a1)
						{
							cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
							x1++;
					}
					else
					{
						cout<<"\n\tComputer is the winner you lose!!!\n";
	                x2++;
					}
						f++;	
				}
			
				if(a[1][0]==a[1][1] && a[1][0]==a[1][2])
				{
					show2();
					if(a[1][0]==a1)
					{
						cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					    x1;
					}
					else
					{
						cout<<"\n\tComputer is the winner you lose!!!\n";
	                    x2++;
					}
						f++;		
				}
			
				if(a[2][0]==a[2][1] && a[2][0]==a[2][2])
				{
					show2();
					if(a[2][0]==a1)
					{
					   cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					   x1++;
					}
					else
					{
						cout<<"\n\tComputer is the winner you lose!!!\n";
	                    x2++;
					}
						f++;		
				}
			
				if(a[0][0]==a[1][0] && a[0][0]==a[2][0])
				{
					show2();
					if(a[0][0]==a1)
					{
						cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					    x1++;
					}
					else
					{
						cout<<"\n\tComputer is the winner you lose!!!\n";
				        x2++;
					}
						f++;
				}
		
			
				if(a[0][1]==a[1][1] && a[0][1]==a[2][1])
				{
					show2();
					if(a[0][1]==a1)
					{
						cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					    x1++;
					}
					else
					{
						cout<<"\n\tComputer is the winner you lose!!!\n";
				        x2++;
					}
						f++;
				}
			
				if(a[0][2]==a[1][2] && a[0][2]==a[2][2])
				{
					show2();
					if(a[0][2]==a1)
					{
						cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					x1++;
					}
					else
					{
						cout<<"\n\tComputer is the winner you lose!!!\n";
				        x2++;
					}
						f++;
				}

			if(a[0][0]==a[1][1] && a[0][0]==a[2][2])
			{
				show2();
				if(a[0][0]==a1)
					{
						cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
						x1++;
				}
				else
				{
					cout<<"\n\tComputer is the winner you lose!!!\n";
					x2++;
				}
               f++;			
 			}
			if(a[0][2]==a[1][1] && a[0][2]==a[2][0])
			{
				show2();
				if(a[0][2]==a1)
				{
					cout<<"\n\tCONGRATS ! "<<name<<" you are the winner!!\n";
					x1++;
				}
				else
				{
					cout<<"\n\tComputer is the winner you lose!!!\n";
					x2++;
				}
				f++;
			}

			if(f>0)
			{
				
				cout<<"\n\tDo you want to play again!!!!?\n\t1.Yes\n\t2.No\n\t";
				cin>>f1;
	           if(f1==1)
				  {
					  show3();
					  show2();
				      AI();
			       }
			   else
				   return 1;
			}
	}
	int check2()
 {
	 if(a[0][0]==a[0][1] && a[0][0]==a[0][2])
		 return 1;
     if(a[1][0]==a[1][1] && a[1][0]==a[1][2])
         return 1; 
     if(a[2][0]==a[2][1] && a[2][0]==a[2][2])
         return 1;
	 if(a[0][0]==a[1][0] && a[0][0]==a[2][0])
         return 1;
     if(a[0][1]==a[1][1] && a[0][1]==a[2][1])
		 return 1;
     if(a[0][2]==a[1][2] && a[0][2]==a[2][2])
		 return 1;
     if(a[0][0]==a[1][1] && a[0][0]==a[2][2])
		 return 1;
     if(a[0][2]==a[1][1] && a[0][2]==a[2][0])
		 return 1;
	 else
	 return 0;
 }
	void show4()
	{
		char m;
		cout<<"\n\t********** S C O R E B O A R D **********";
		cout<<"\n\t\t Name \t\t Score";
		cout<<"\n\t\t "<<name<<"\t\t "<<x1;
		cout<<"\n\t\t "<<name2<<"\t\t "<<x2;
		cout<<"\n\tPress 1 to continue";
		cin>>m;
	}
	void show5()
	{
		char m;
		cout<<"\n\t**********S C O R E B O A R D ************";
		cout<<"\n\t\t"<<name<<"\t\t "<<x1;
		cout<<"\n\t\tComputer\t "<<x2;
		cout<<"\n\tPress 1 to continue";
		cin>>m;
	}
	void matrix()
	{
				 cout<<"\n\t>>>>>>>>>>>>>WELCOME TO TIC TAC TOE<<<<<<<<<<<<<<<<<<<\n\n";
			 
						for(i=0;i<3;i++)
							{
								for(j=0;j<3;j++)
								 {
									cout<<"\t\t"<<a[i][j];
								  }
									cout<<"\n\n";
							}
	
	}
};

int main()
{
	int i,j,b,ch1,l,x1,x2,x3;
	b=1;
	char name[20],name2[20];
	int a[3][3],m;
	Tictac t1;
	int record;
	fstream f1;
	do
	{
		
d1:t1.sc();
		cout<<"\n\t ******** TIC TAC TOE ********";
		t1.x1=0;
		t1.x2=0;
		cout<<"\n\t 1.Play \n\t 2.View latest SCOREBOARD \n\t 3.Exit ==>\n\t";
		cout<<"\t";
		cin>>ch1;
		t1.sc();
		 switch(ch1)
		 {
	     	case 1:
			
			t1.sc();
			cout<<"\n\t\t 1. 1 Player \n\t\t 2. 2 Player \n\t\t ==>";
            cin>>l;
			t1.sc();
			if(l==2)
			{
				        t1.matrix();
						//Writing
						cout<<"\n\t Enter player 1's name: ";
                        cin>>name;
		                cout<<"\n\t Enter player 2nd name: ";						
	                    cin>>name2;
						strcpy(t1.name,name);
						strcpy(t1.name2,name2);
						x1=t1.insert();
						f1.open("tic.txt",ios::out);
						f1.write((char*)&t1,sizeof(t1));
						f1.close();
				        //Reading now
						f1.open("tic.txt",ios::in);
						f1.read((char*)&t1,sizeof(t1));
						while(f1)
						{
							t1.show4();
							f1.read((char*)&t1,sizeof(t1));
						}
						f1.close();
						
			}
			  else
			  {
				t1.matrix();
				cout<<"\n\t Enter player 1's name: ";
                cin>>name;
				strcpy(t1.name,name);
				x1=t1.AI();
				f1.open("tic2.txt",ios::out);
						f1.write((char*)&t1,sizeof(t1));
						f1.close();
				        //Reading now
						f1.open("tic2.txt",ios::in);
						f1.read((char*)&t1,sizeof(t1));
						while(f1)
						{
							t1.show5();
							f1.read((char*)&t1,sizeof(t1));
						}
						f1.close();
			  
			  }
			  
		      break;

		 case 2:
			 cout<<"\n\t 1.Player 1 scoreboard \n\t 2.Player 2 scoreboard \n\t\t";
			 cin>>x3;
			 if(x3==2)
			 {
                        f1.open("tic.txt",ios::in);
						f1.read((char*)&t1,sizeof(t1));
						while(f1)
						{
							t1.show4();
							f1.read((char*)&t1,sizeof(t1));
						}
						f1.close();
			 }
			 if(x3==1)
			 {
                        f1.open("tic2.txt",ios::in);
						f1.read((char*)&t1,sizeof(t1));
						while(f1)
						{
							t1.show5();
							f1.read((char*)&t1,sizeof(t1));
						}
						f1.close();
			 }
			 else if(x3!=1 || x3!=2)
			 {
				 cout<<"\n\tError";
				 continue;
			 }
			 break;
		 case 3:
			 cout<<"\n\t Thank You ";
			    break;
			    
		 default:cout<<"\n\t Invalid Choice Please Re-enter Choice";
			     goto d1;
				 break;
		 }
	}while(ch1!=3);
	return 0;
}
