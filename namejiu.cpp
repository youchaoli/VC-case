#include<iostream.h>
struct student
{
   char name[10];
   char xh[10];
	int cj[4];
	int zf;
	int order;
	double pj;
};
void input(student s[],int n)
{
	int i,j,zf;
	for(i=0;i<=n-1;i++)
	{	
		cout<<"����ѧ��������"<<endl;
		cin>>s[i].name;
		cout<<"����ѧ��ѧ�ţ�"<<endl;
        cin>>s[i].xh;
        cout<<"��������ѧ�����Ƴɼ�˳��Ϊ....."<<endl;
	     zf=0;
    	for(j=0;j<4;j++)
		{
			cin>>s[i].cj[j];
        	zf=zf+s[i].cj[j];
		}
		s[i].zf=zf;
		s[i].pj=zf/4;

	}
}
void  delate
{
    
}
void select(student st[],int n,char m[],int h)
{
    int i,j,n;
	for(i=0;i<n;i++)
	{
		if(st[i].name.equals(m)||st[i].xh.equals(m))
		{
           n=i;
		   output(st,n);
		}
	}

}
void modifly(student st,int n)
{
     
}
void output(student st[],int n)
{
	int i;
    cout<<st[n].name<<" "st[n].xh<<endl;
	cout<<"���ųɼ�����Ϊ��"<<endl;
	for(i=0;i<4;i++)
	{
		cout<<st[n].cj[i]<<"  ";

	}
	cout<<"�������ܷ�Ϊ��"<<endl;
	cout<<st[n].zf<<endl;
	cout<<"������ƽ���ɼ�Ϊ��"<<endl;
    cout<<st[n].pj<<endl;
	cout<<"������ƽ������Ϊ��"<<endl;
    cout<<st[n].order<<endl;
}
void setorder(student st,n)
{
    int i,j;
	cout<<"����"<<setw(6)<<"ѧ��"<<setw(6)<<"����"<<setw(6)<<endl;
	for(i=0;i<n;i++)
	{   
		st[i].order=1;
		for(j=0,j<n;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
		cout<<st[i].name<<" "<<st[i].xh<<" "st[i].order<<endl;
	}
}
void findnumber
{

}
void main
{
    while(true)
	    {

	          cout<<("*********************************************")<<endl;

	          cout<<("***** ��ӭʹ�ñ�ϵͳ(��ѡ������Ҫ�Ĺ���) ****")<<endl;

	          cout<<("             0.�˳�ϵͳ.                     ")<<endl; 

	          cout<<("             1.���ѧ����Ϣ.                 ")<<endl; 

	          cout<<("             2.�޸�ѧ����Ϣ.                 ")<<endl; 

	          cout<<("             3.ѧ���ɼ�����.                 ")<<endl; 

	          cout<<("             4.����ѧ������.                 ")<<endl; 

	          cout<<("             5.��ѯѧ����Ϣ .                ")<<endl;
	          
	          cout<<("             6.ɾ��ѧ����Ϣ .                ")<<endl;
	          
	          cout<<("             7.�������ѧ����Ϣ .            ")<<endl;
	          
	          cout<<("*********************************************")<<endl;

	          cout<<("��������ѡ�������:")<<endl;
  switch(a)

	 		{
	 			case 0:break;

	 			case 1:
	 				{
	 					sg.appendsa();
	 					
	 					break;
	 				}

	 			case 2:{
	 				
	 				break;
	 			}
	 			case 3 :
	 				{
	 					
	 					break;
	 				}
	 				

	 			case 4:
	 				{
	 					
	 					break;
	 				}

	 			case 5:
					{ 
						char m[10];
						cout<<"��������Ҫ��ѯ�����������ѧ�ţ�"<<endl;
						cin>>m;
                        select(st,5,m,10);
		 				break;
	 				}

	 			case 6:
	 				{
		 			
		 				break;
	 				}
	 			case 7:	
					{
		 			
		 				break;
					} 
	 		}	
	 		if (a==0)
	 		{
	 			cout<<("лл��ʹ�ñ�ϵͳ!")<<endl;
	 	       break;
	 			
	 		}	

	}