#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
   char name[10];
   char xh[10];
	int cj[4];
	int zf;
	int order;
	double pj;
};
class studen
{
	public;
	studen;
	void display(student a);//��ʾָ��ѧ����
    void show();
	void add();
	int select(int);//�����������β�Ϊ1��ʾ�����ң�Ϊ0��ʾ�޸�ɾ��ʹ�õĲ��ҡ�
	void select2();//��ѧ�Ž��в��ң�
	void content();
	void update();
	void Delete();
	struct student st[4];
	int s;//��¼ѧ�������ı���
}
studen::studen(){s=0;}
void studen::display(student a)
{
	cout<<"����:"<<a.name<<endl;
    cout<<"ѧ�� :"<<a.xh<<endl;
    cout<<"���ųɼ�����Ϊ��"<<endl;
	for(i=0;i<4;i++)
	{
		cout<<a.cj[i]<<"  ";
	}
	cout<<"�ܷ�:"<<a.zf<<endl;	
	cout<<"ƽ���ɼ�"<<a.pj<<endl;
	cout<<"����:"<<a.order<<endl;
}
void studen::add()
{
	int i,n;
	char c[10];
	char b[10];
	int d[4];
	int e,f;
    cout<<"�����������Ҫ��ӵ�ѧ��������"<<endl;
	cin>>n;
    for(i=s;i<n+s;i++)
	{	
		cout<<"�������"<<i+1<<"��ѧ����Ϣ"<<endl;

		cout<<"����ѧ��������"<<endl;
		cin>>b;
		cout<<"����ѧ��ѧ�ţ�"<<endl;
        cin>>c;
        cout<<"��������ѧ�����Ƴɼ�˳��Ϊ....."<<endl;
	     e=0;
    	for(j=0;j<4;j++)
		{
			cin>>d[j];
        	e=e+d[j];
		}
		
		f=e/4;
		strcpy(st[i].name,b);
		strcpy(st[i].xh,c);
	    st[i].cj=d;
		st[i].zf=e;
		st[i].pj=f;
	}
	s=s+n;
	cout<<"����ѧ�������ϡ�"<<endl;
}
//ͨ���������в���
int studen::select(int n)
{
    int i,j;
	student a;
	cout<<"������Ҫ���ҵ�ѧ��������"<<endl;
	cin>>a.name;
	for(i=0;i<s;i++)
	{
		if(stramp(st[i].name,a.name)==0)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(i==s)
	{
		cout<<"����Ҫ��ѯ��ѧ�������ڡ�"<<endl;
			j=-1;
	}
	if(n==1)
	{
		cout<<"����������ء�"<<endl;
	    getch();
	}
	return j;
}
//��ѧ�Ž��в��ҡ�
void studen::select2()
{
	int i,j=0 ;
	studnt b;
	cout<<"������Ҫ���ҵ�ѧ��ѧ�ţ�"<<endl;
	cin>>b.xh;
	for(i=0;i<s;i++)
	{
		if(stramp(st[i].xh,b.xh)==0)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(j==0)
		cout<<"����Ҫ��ѯ��ѧ��ѧ�Ų����ڡ�"<<endl;
        cout<<"����������ء�"<<endl;
		getch();

}
//�޸�ѧ����Ϣ�Ĳ˵���
void studen::content()
{
	cout<<"1�޸�����"<<endl;
	cout<<"2�޸�ѧ��"<<endl;
	cout<<"3�޸ĳɼ�"<<endl;
    cout<<"4�˳��޸�"<<endl;
}
//�޸�ѧ������Ϣ��
void studen::update()
{
	int n;
	bool p=true;
	int j=select(0);
	if(j==-1)
		p=false;
	while(p)
	{
		content();
		cout<<"�����빦��ѡ�"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				char a[10];
				cout<<"�������µ�������"<<endl;
				cin>>a;
				strcpy(st[j].name,a);
				display(st[j]);
				break;
            case 2:
				char b[10];
				cout<<"�������µ�ѧ�ţ�"<<endl;
				cin>>a;
				strcpy(st[j].name,b);
				display(st[j]);
				break;
			case 3:
				int c[4];
				int i,f=0,e=0;
				cout<<"�������������ųɼ���˳��Ϊ������"<<endl;
                	for(i=0;i<4;i++)
					{
		            	cin>>c[i];
                     	e=e+c[i];
					}		
	            	f=e/4;
					st[j].cj=c;
					st[j].zf=f;
                display(st[j]);
				break;
		}
		cout<<"������䷵��"<<endl;
		getch();
	}
}
//ɾ��ѧ����Ϣ��
void studen::Delete()
{
	int i,j=select(0);
	if(j!=-1)
	{
        for(i=j;i<s;i++)
		{
			st[i]=st[i+1];
		}
		cout<<" ɾ���ɹ���"<<endl;
	
		
	}
	cout<<"����һ�����ء�"<<endl;
	getch();
}
/*void input(student s[],int n)
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
}*/
/*void  delate(student st[],int n)
{
	int i,j;
	cout<<"������Ҫɾ��ѧ��������Ϣ(ѧ�Ż�����)��"<<endl;
     char m[10];
  i=select(st,4,m,10);
    for( j=i;j<n-1;j++)
	{
		st[j]=st[j+1];
    	n --;
		cout<<"ɾ���ɹ���"<<endl;
	}
}
int select(student st[],int n,char m[],int h)
{
    int i,j;

	for(i=0;i<n;i++)
	{
		if(strcmp(st[i].name,m)||strcmp(st[i].xh,m))
		{
          j=i;
		   output(st,n,j);
		}
		else 
			cout<<"������ˣ�"<<endl;
	}
	return i;
}
void modifly(student st[],int n)
{
   	int i,j;
	int zf=0;
	cout<<"������Ҫ�޸�ѧ��������Ϣ(ѧ�Ż�����)��"<<endl;
  i=select(st,n,m,h);
	cout<<"1���޸�����"<<endl;
   cout<<"2: �޸�ѧ��"<<endl;
	cout<<"3: �޸ĳɼ�"<<endl;
	cin>>j;
if(j==1)
	{
	cout<<"��������������"<<endl;
    cin>>st[i].name;
}
	if(j==2)
	{
		cout<<"��������ѧ��"<<endl;
		cin>>st[i].xh;
	}
	if(j==3)
	{
	cout<<"������������Ƴɼ�˳��Ϊ����������"<<endl;
	
     for(j=0;j<4;j++)
		{
			cin>>st[i].cj[j];
       	zf=zf+st[i].cj[j];
		}
	st[i].zf=zf;
		st[i].pj=zf/4;
}
}	
void output(student st[],int n,int j)
{
    int i;
    cout<<st[j].name<<" "st[j].xh<<endl;
	cout<<"���ųɼ�����Ϊ��"<<endl;
	for(i=0;i<4;i++)
	{
		cout<<st[j].cj[i]<<"  ";
	}
	cout<<"�������ܷ�Ϊ��"<<endl;
	cout<<st[j].zf<<endl;
	cout<<"������ƽ���ɼ�Ϊ��"<<endl;
    cout<<st[j].pj<<endl;
	cout<<"����������Ϊ��"<<endl;
    cout<<st[j].order<<endl;
}
void setorder(student st[],int n)
{
   int i,j;

	for(i=0;i<n;i++)
	{   
		st[i].order=1;
		for(j=0;j<n;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
		cout<<st[i].name<<" "<<st[i].xh<<" "st[i].order<<endl;
	}
}
void findnumber(student st[],int n)
{
    int i,j;
	int a=0,b=0,c=0,d=0,e=0;
for(i=0;i<4;i++)
	{
      if(st[i].pj<60)
		   a++;
   else
	       if(st[i].pj<70)
		        b++;
       else 
			 if(st[i].pj<80)
	          c++;
			 else
	           if(st[i].pj<90)
	           d++;
			   else
	               if(st[i].pj<=100)
		                   e++;
}
cout<<"������������Ϊ��"<<endl;
	cout<<"60�����£�  "<<a<<endl;
	cout<<"60��70�֣� "<<b<<endl;
	cout<<"70��80�֣� "<<c<<endl;
	cout<<"80��90�֣� "<<d<<endl;
	cout<<"90��100�֣� "<<e<<endl;
}*/
//ѧ��ϵͳ����˵���
void contents()
{

}
void main()
{
	student a;
	int b;
   while(true)
	    {

	          cout<<"*********************************************"<<endl;

	          cout<<"***** ��ӭʹ�ñ�ϵͳ(��ѡ������Ҫ�Ĺ���) ****"<<endl;

	          cout<<"             0.�˳�ϵͳ.                     "<<endl; 

	          cout<<"             1.���ѧ����Ϣ.                 "<<endl; 

	          cout<<"             2.�޸�ѧ����Ϣ.                 "<<endl; 

	          cout<<"             3.���ֶ�����.                 "<<endl; 

	          cout<<"             4.����ѧ������.                 ")<<endl; 

	          cout<<"             5.��ѯѧ����Ϣ .                "<<endl;
	          
	          cout<<"             6.ɾ��ѧ����Ϣ .                "<<endl;
	          
	          cout<<"             7.�������ѧ����Ϣ .            "<<endl;
	          
	          cout<<"*********************************************"<<endl;

	          cout<<"��������ѡ�������:"<<endl;
			  cin>>b;
  switch(a)

	 		{
	 			case 0:break;

	 			case 1:
	 				{
                        
					//	input(st,4);
	 					break;
	 				}

	 			case 2:
					{
	 				   // modifly( st, 4)
	 			        break;
					}
	 			case 3 :
	 				{
	 				//	findnumber(st,4);
	 					break;
	 				}
	 				

	 			case 4:
	 				{
	 				//	setorder(st,4);
	 					break;
	 				}

	 			case 5:
					{ 
					///	char m[10];
					//	cout<<"��������Ҫ��ѯ�����������ѧ�ţ�"<<endl;
					//	cin>>m;
                      //  select(st,5,m,10);
		 				break;
	 				}

	 			case 6:
	 				{
		 			   // delate( st,4)
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