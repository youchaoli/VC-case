#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
#include<conio.h>
struct Student
{
   char name[10];
   double xh;
	int cj[3];
	int zf;
	int order;
	double pj;
};
class guliyuan
{
public:
};
class student
{
public:
    	student();
	void display(Student a);//��ʾָ��ѧ����
    void show();
	void show(int);
	void show1(int);
	void show1();
	void show2();
	void add();
	int select(int);//�����������β�Ϊ1��ʾ�����ң�Ϊ0��ʾ�޸�ɾ��ʹ�õĲ��ҡ�
	void select2();//��ѧ�Ž��в��ң�
	void select3();//������
	void select4(double);//��ʾ������Ϣ
	void content();
	void update();
	void Delete();
	void findnumber();
	void setorder();
	struct Student st[100];
	int s;//��¼ѧ�������ı���
};
student::student(){s=0;}
void student::add()
{
	int  i,n;
	char c[10];
	double xh;
	int d[4];
	int e,f;
	ofstream fo,fo1;
	fo.open("ѧ����Ϣ�ļ�.txt");
	fo1.open("xuehao.txt");
	fo <<setw(10)<<"����"
	   <<setw(10)<<"ѧ��"
    	<<setw(10)<<"����"
		<<setw(10)<<"Ӣ��"
		<<setw(10)<<"vc++"
		<<setw(10)<<"�ܷ�"
		<<setw(10)<<"����\n";

    cout<<"�����������Ҫ��ӵ�ѧ��������"<<endl;

	cin>>n;
    for(i=s;i<n+s;i++)
	{	int  j;
		cout<<"�������"<<i+1<<"��ѧ����Ϣ"<<endl;
		cout<<"����ѧ��������"<<endl;
		cin>>c;
		cout<<"����ѧ��ѧ�ţ�"<<endl;
        cin>>xh;
        cout<<"��������ѧ�����Ƴɼ�˳��Ϊ������Ӣ�vc++"<<endl;
	     e=0;
    	for(j=0;j<3;j++)
		{
			cin>>d[j];
        	e=e+d[j];
		}
		
		f=e/3;
		strcpy(st[i].name,c);
		st[i].xh=xh;
    	for(j=0;j<3;j++)
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
		<<setw(10)<<st[i].zf
		<<setw(10)<<st[i].order<<"\n";
	    fo1<<" "<<st[i].xh;
	}
	fo.close;
	fo1.close;
	cout<<"����ѧ�������ϡ�"<<endl;
}
void student::Delete()
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
int student::select(int n)
{
    int i,j;
	Student a;
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
void student::select2()
{
	int i,j=-1 ;
	Student b;//,c[100]
	/*char d[100];
    ifstream fi("ѧ����Ϣ�ļ�.txt");
	fi.getline(d,100);
	cout<<c<<endl;
    for(i=0;i<100;i++)
	{
		fi>>c[i].name;
		fi>>c[i].xh;
		for(j=0;j<3;j++)
			fi>>c[i].cj[j];
		fi>>c[i].order;
		cout<<c[i].name;
	}
     fi.close;*/
	cout<<"������Ҫ���ҵ�ѧ��ѧ�ţ�"<<endl;
	cin>>b.xh;

	for(i=0;i<s;i++)
	{
		/*if(c[i].xh==b.xh)
		{
			display(c[i]);
				j=i;
				
		}*/
		if(st[i].xh==b.xh)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(j==-1)
		cout<<"����Ҫ��ѯ��ѧ��ѧ�Ų����ڡ�"<<endl;
        cout<<"����������ء�"<<endl;
		getch();

}
void student::select4(double xh1)
{
	int i,j=-1;
	for(i=0;i<s;i++)
	{
		
		if(st[i].xh==xh1)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(j==-1)
		cout<<"����Ҫ��ѯ��ѧ��ѧ�Ų����ڡ�"<<endl;
        cout<<"����������ء�"<<endl;
		getch();

}
void student::select3()
{
   int i,j=0 ;
	Student b;
    cout<<"������Ҫ���ҵ�ѧ�����Σ�"<<endl;
	cin>>b.order;
	for(i=0;i<s;i++)
	{
		
		if(st[i].order==b.order)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(j==0)
		cout<<"����Ҫ��ѯ��ѧ�����β����ڡ�"<<endl;
        cout<<"����������ء�"<<endl;
		getch();

}
void student::display(Student a)
{   
	cout<<"����:"<<a.name<<endl;
    cout<<"ѧ�� :"<<a.xh<<endl;
    cout<<"������Ӣ�vc++�ɼ�����Ϊ��"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<a.cj[i]<<"  ";
	}
	cout<<"�ܷ�:"<<a.zf<<endl;	
	cout<<"ƽ���ɼ�"<<a.pj<<endl;
	cout<<"����:"<<a.order<<endl;
}
void student::show()
{
	
	int i;
     cout<<setw(8)<<"����"
	    <<setw(10)<<"ѧ��"
    	<<setw(10)<<"����"
		<<setw(10)<<"Ӣ��"
		<<setw(10)<<"vc++"
		<<setw(10)<<"�ܷ�"
		<<setw(10)<<"����"<<"\n";
	if(s!=0)
	{
		for(i=0;i<s;i++)
		{
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
		}
	}
	else
		cout<<"��ϵͳ�в�����ѧ����Ϣ!"<<endl;
		cout<<"����������أ�"<<endl;
		getch();
}
void student::show(int n)//���ǰn��ͬѧ�ɼ�
{
	int i;
     cout<<setw(8)<<"����"
	    <<setw(10)<<"ѧ��"
    	<<setw(10)<<"����"
		<<setw(10)<<"Ӣ��"
		<<setw(10)<<"vc++"
		<<setw(10)<<"�ܷ�"
		<<setw(10)<<"����"<<"\n";
	for(i=0;i<s;i++)
	{
		if(st[i].order<=n)
		{
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
		}
	}
	
}
void student::show1(int n)
{
	int m,i;
	m=s-n;
	cout<<"��n��ͬѧ������"<<endl;
     cout<<setw(8)<<"����"
	    <<setw(10)<<"ѧ��"
    	<<setw(10)<<"����"
		<<setw(10)<<"Ӣ��"
		<<setw(10)<<"vc++"
		<<setw(10)<<"�ܷ�"
		<<setw(10)<<"����"<<"\n";
	for(i=0;i<s;i++)
	{
		if(st[i].order>m)
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
	}
}
void student::show1()
{
	int i;
	cout<<"����ɼ�������"<<endl;
     cout<<setw(8)<<"����"
	    <<setw(10)<<"ѧ��"
    	<<setw(10)<<"����"
		<<setw(10)<<"Ӣ��"
		<<setw(10)<<"vc++"
		<<setw(10)<<"�ܷ�"
		<<setw(10)<<"����"<<"\n";
	for(i=0;i<s;i++)
	{
		if(st[i].zf>=180)
		{
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
		}
	}

}
void student::show2()
{
	int i;
	cout<<"������ɼ�������"<<endl;
     cout<<setw(8)<<"����"
	    <<setw(10)<<"ѧ��"
    	<<setw(10)<<"����"
		<<setw(10)<<"Ӣ��"
		<<setw(10)<<"vc++"
		<<setw(10)<<"�ܷ�"
		<<setw(10)<<"����"<<"\n";
	for(i=0;i<s;i++)
	{
		if(st[i].zf<180)
		{
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
		}
	}

}
class caidan
{
public:
	void xdenglu()
	{  
		
		cout<<"**************************************"<<endl;
		cout<<"*                                    *"<<endl;
		cout<<"*           ����������ѧ�ţ�         *"<<endl;
        cout<<"*                                    *"<<endl;
		cout<<"**************************************"<<endl;
		
		
	}
	void gdenglu()
	{   
		cout<<"**************************************"<<endl;
		cout<<"*                                    *"<<endl;
		cout<<"*           �������������룺         *"<<endl;
        cout<<"*                                    *"<<endl;
		cout<<"**************************************"<<endl;
		
	}
	void xzhucaidan()
	{
	    cout<<"          ��ѡ������Ҫ�ķ���        "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*          1: ��ѯ���˳ɼ�           *"<<endl;
		cout<<"*          2: ��ѯ��������ͬѧ�ɼ�   *"<<endl;
		cout<<"*          3����ѯǰn��ͬѧ�ɼ�      *"<<endl;
		cout<<"*          4: ��������ʾ����ͬѧ�ɼ� *"<<endl;
		cout<<"*          5: �˳�                   *"<<endl;
		cout<<"**************************************"<<endl;
	}
	void gchaxun()
	{
		cout<<"           ��ѡ���ܲ˵�             "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*          1: ��������ѯ             *"<<endl;
		cout<<"*          2: ��ѧ�Ų�ѯ             *"<<endl;
		cout<<"*          3: �����β�ѯ             *"<<endl;
		cout<<"*          4: ��ʾ����               *"<<endl;
		cout<<"*          5: ��ʾ����ͬѧ�ɼ�       *"<<endl;
		cout<<"*          6: ��ʾ������ͬѧ�ɼ�     *"<<endl;
		cout<<"*          7: ��ʾǰn��ͬѧ�ɼ�      *"<<endl;
		cout<<"*          8: ��ʾ��n��ͬѧ�ɼ�      *"<<endl;
        cout<<"*          9:    �˳�                *"<<endl;
		cout<<"**************************************"<<endl;
	}
};
bool xshibie(double b)
{  
	bool m=false;
	double xh[100];
	int i;
    ifstream fin("xuehao.txt");
	for(i=0;i<100;i++)
	{
		fin>>xh[i];
	}
	fin.close();
	for(i=0;i<100;i++)
	{
	
		if (b==xh[i])
		{
			cout<<"��½�ɹ�!"<<endl;
            m=true;
			break;
		}
	}		
	return m;     
}
bool gshibie(double b)
{  
	bool m=false;
	double mima;
	//int i;
	ifstream fin("mima.txt");
	fin>>mima;
    fin.close();
		if (b==mima)
		{
			cout<<"��½�ɹ�!"<<endl;
            m=true;
		
		}	
	
     	return m  ;     
 
}
void main()
{   bool m=false;
	double b;
	int a,n;
	caidan cd1;
	student s;
	Student x,st[100];
    
Denglu:	cout<<"            ��ӭʹ�ñ�ϵͳ��"<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*           ��ѡ���û�����           *"<<endl;
		cout<<"*             1: ѧ��                *"<<endl;
		cout<<"*             2: ����Ա              *"<<endl;
		cout<<"*             3: �˳�                *"<<endl;
        cout<<"**************************************"<<endl;

	cin>>a;
	switch (a)
	{
case 1:                                //ѧ�����в����ڵ�һ��case 1��
	cd1.xdenglu();
	cin>>b;
    m=xshibie(b);//����ѧ����ݵ���֤����

    if(m==true)
	{
Xzhu :	cd1.xzhucaidan();//ѧ���������˵�
		cin>>a;
		switch(a)
		{
		case 1:        //��ѯ���˳ɼ�
			{
               s.select4(b);
			   goto Xzhu;
			   
			}
		case 2:      //��ѯ��������ͬѧ�ɼ�
			{
             	s.show();
				goto Xzhu;
			     
			}
		case 3:         //��ѯǰn��ͬѧ�ɼ�
			{
				cout<<"��������ѡ�����ε����ֵ��"<<endl;
				cin>>n;
				s.show(n);
				goto Xzhu;
			} 
		case 4:{break;}//��������ʾ����ͬѧ�ɼ�
		case 5: break;		//�˳�  
		}
	}
	else cout<<"��½ʧ�ܣ�ѧ������"<<endl;

	goto Denglu;break;
case 2:                                    //����Ա���е�һ�в����ڵ�һ��case 2��
	cd1.gdenglu();
	cin>>b;
	m=gshibie(b);    //���ù���Ա����ʶ���ܺ���
	if(m==true)
	{
		Zhu:	cout<<"          ��ѡ���ܲ˵�              "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*         1: ��ѯ�˵�                *"<<endl;
		cout<<"*         2: �޸�����                *"<<endl;
		cout<<"*         3: ���ѧ����Ϣ            *"<<endl;
		cout<<"*         4: ע��ѧ��                *"<<endl;
		cout<<"*         5: �����޸�                *"<<endl;
		cout<<"*         6:   �˳�                  *"<<endl;
		cout<<"**************************************"<<endl;
		cin>>a;
	switch (a)
	{    
		


	case 1:                        // ����Ա���еĲ�ѯ�������ڵڶ���case 1��
		{
cha:		cd1.gchaxun();
		cin>>a;
        switch (a)
		{
		case 1:                   //��������ѯ�Ĺ���
			{
				s.select(1);
                goto cha;
				
			}              
		case 2:                        //��ѧ�Ų�ѯ�Ĺ���
			{
                s.select2();
				goto cha;
						   
			}
		case 3:                          //�����β�ѯ
			{
                s.select3();
                goto cha;
		
			}                 
		case 4:                 //��ʾ���� 
			{
				s.show();
                goto cha;
			
			}                
		case 5:     //��ʾ����ͬѧ�ɼ�
			{
				s.show1();
				goto cha;
			}              
		case 6://��ʾ������ͬѧ�ɼ�
			{
			    s.show2();
				goto cha;
			}
		case 7:               //��ʾǰn��ͬѧ�ɼ�
			{ 
				cout<<"��������ѡ�����ε����ֵ��"<<endl;
				cin>>n;
				s.show(n);
				goto cha;
			}
		case 8:      //��ʾ��n��ͬѧ�ɼ�
			{
				cout<<"����ѡ�����ͬѧ�ĸ�����"<<endl;
				cin>>n;
				s.show1(n);
				goto cha;
			}
		case 9:{goto Zhu; }//�˳���ǰcase 1���ع���Ա���˵�
		}
		}
	case 2:{break;}               //�޸�ѧ����Ϣ
	case 3:                       //���ѧ����Ϣ
		{
            s.add();
			goto Zhu;//���ع���Ա���˵�
		}
	case 4:
		{
			s.Delete();
            goto Zhu;
		   	
		}            //ɾ��ѧ����Ϣ
    case 5:
		{  
			double mima1,mima2,mima3,mima4;
			ifstream fi2("mima.txt");
			fi2>>mima1;
			fi2.close;
			ofstream fo2("mima.txt");
			cout<<"������ԭ���룺"<<endl;
			cin>>mima2;
			if(mima1==mima2)
			{
				cout<<"�����������룺"<<endl;
				cin>>mima3;
				cout<<"��������һ�Σ�"<<endl;
				cin>>mima4;
				if(mima3==mima4)
				{
					fo2<<mima4;
					cout<<"�����޸ĳɹ���"<<endl;
					goto Zhu;
				}
				else
				{
					cout<<"������������ͬ!�ܾ��޸ģ�"<<endl;
					fo2<<mima1;
					goto Zhu;
				}
			}
			else
			{
				cout<<"�������󣡾ܾ��޸ģ�"<<endl;
				fo2<<mima1;
				goto Zhu;
            }
            fo2.close;
		break;
		}            //�޸Ĺ���Ա����
	case 6:{goto Denglu;}            //�ص�
	}
		
	}
	else
	{ 
		cout<<"��½ʧ�ܣ���������"<<endl;
    	goto Denglu;              // �����û�ѡ��˵�
	}     
case 3:break;//�˳�����
	
	}

}