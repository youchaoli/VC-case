#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
#include<iomanip.h>
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
public:
	studen();
	void display(student a);//��ʾָ��ѧ����
    void show();
	void add();
	int select(int);//�����������β�Ϊ1��ʾ�����ң�Ϊ0��ʾ�޸�ɾ��ʹ�õĲ��ҡ�
	void select2();//��ѧ�Ž��в��ң�
	void content();
	void update();
	void Delete();
	void findnumber();
	void setorder();
	struct student st[500];
	int s;//��¼ѧ�������ı���
};
studen::studen(){s=0;}
void studen::display(student a)
{   
	cout<<"����:"<<a.name<<endl;
    cout<<"ѧ�� :"<<a.xh<<endl;
    cout<<"���ųɼ�����Ϊ��"<<endl;
	for(int i=0;i<4;i++)
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
	ofstream fo;
	fo.open("ѧ����Ϣ�ļ�.txt");
	fo <<setw(10)<<"����"
	   <<setw(10)<<"ѧ��"
    	<<setw(10)<<"�ɼ�1"
		<<setw(10)<<"�ɼ�2"
		<<setw(10)<<"�ɼ�3"
		<<setw(10)<<"�ɼ�4"
		<<setw(10)<<"�ܷ�"
		<<setw(10)<<"����\n";

    cout<<"�����������Ҫ��ӵ�ѧ��������"<<endl;

	cin>>n;
    for(i=s;i<n+s;i++)
	{	int  j;
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
    	for(j=0;j<4;j++)
		{
			st[i].cj[j]=d[j];
        
		}
		
	 //   st[i].cj=d;
		st[i].zf=e;
		st[i].pj=f;
	}
	s=s+n; 
	
	for(i=0;i<s;i++)
	{   
		st[i].order=1;
		for(int j=0;j<s;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
		fo <<setw(8)<<st[i].name
	   <<setw(10)<<st[i].xh
    	<<setw(10)<<st[i].cj[0]
		<<setw(10)<<st[i].cj[1]
		<<setw(10)<<st[i].cj[2]
		<<setw(10)<<st[i].cj[3]
		<<setw(10)<<st[i].zf
		<<setw(10)<<st[i].order<<"\n";
	
	}
	fo.close;
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
		if(strcmp(st[i].name,a.name)==0)
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
	student b;
	cout<<"������Ҫ���ҵ�ѧ��ѧ�ţ�"<<endl;
	cin>>b.xh;
	for(i=0;i<s;i++)
	{
		if(strcmp(st[i].xh,b.xh)==0)
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
				cin>>b;
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
                	for(i=0;i<4;i++)
					{
		            	st[j].cj[i]=c[i];
                     	
					}
					st[j].pj=f;
					st[j].zf=e;
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
void studen::show()
{
	int i;
	if(s!=0)
	{
		for(i=0;i<s;i++)
		{
			display(st[i]);
		}
	}
	else
		cout<<"��ϵͳ�в�����ѧ����Ϣ!"<<endl;
		cout<<"����������أ�"<<endl;
		getch();
}


void studen::setorder()
{
   int i,j;
	for(i=0;i<s;i++)
	{   
		st[i].order=1;
		for(j=0;j<s;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
		
		cout<<"����:"<<st[i].name<<"  ѧ�� "<<st[i].xh<<"  ���� "<<st[i].order<<endl;
	}
}
void studen::findnumber()
{
    int i;
	int a=0,b=0,c=0,d=0,e=0;
for(i=0;i<4;i++)
	{
	if(st[i].pj<60){
		a++;}
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
	cout<<"60�����£� "<<a<<endl;
	cout<<"60��70�֣� "<<b<<endl;
	cout<<"70��80�֣� "<<c<<endl;
	cout<<"80��90�֣� "<<d<<endl;
	cout<<"90��100�֣�"<<e<<endl;
}
void main()
{
	studen a;
	int b;
   while(true)
	    {

	          cout<<"*********************************************"<<endl;

	          cout<<"***** ��ӭʹ�ñ�ϵͳ(��ѡ������Ҫ�Ĺ���) ****"<<endl;

	          cout<<"             0.�˳�ϵͳ.                     "<<endl; 

	          cout<<"             1.���ѧ����Ϣ.                 "<<endl; 

	          cout<<"             2.�޸�ѧ����Ϣ.                 "<<endl; 

	          cout<<"             3.���ֶ�����.                 "<<endl; 

	          cout<<"             4.����ѧ������.                 "<<endl; 

	          cout<<"             5.��������ѯѧ����Ϣ .                "<<endl;
	          
	          cout<<"             6.��ѧ�Ų�ѯѧ����Ϣ .                "<<endl;
	          
	          cout<<"             7.ɾ��ѧ����Ϣ .                "<<endl;
	          
	          cout<<"             8.�������ѧ����Ϣ .            "<<endl;
	          
	          cout<<"*********************************************"<<endl;

	          cout<<"��������ѡ�������:"<<endl;
			  cin>>b;
  switch(b)

	 		{
	 			case 0:break;

	 			case 1:
	 				{
                        a. add();  
					//	input(st,4);
	 					break;
	 				}

	 			case 2:
					{
						a.update();
	 				   // modifly( st, 4)
	 			        break;
					}
	 			case 3 :
	 				{
	 					a.findnumber();
	 					break;
	 				}
	 				

	 			case 4:
	 				{
	 			    	a.setorder();
	 					break;
	 				}

	 			case 5:
					{ 
                         a.select(1);

					///	char m[10];
					//	cout<<"��������Ҫ��ѯ�����������ѧ�ţ�"<<endl;
					//	cin>>m;
                      //  select(st,5,m,10);
		 				break;
	 				}
	 			case 6:
					{ 
                         a.select2();		
		 				break;
	 				}
	 			case 7:
	 				{
		 			    a.Delete();
		 				break;
	 				}
	 			case 8:	
					{
		 			    a.show();
		 				break;
					} 
	 		}	
	 		if (b==0)
	 		{
	 			cout<<("лл��ʹ�ñ�ϵͳ!")<<endl;
	 	       break;
	 			
	 		}	

	}
}