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
	void add();
	int select(int);//�����������β�Ϊ1��ʾ�����ң�Ϊ0��ʾ�޸�ɾ��ʹ�õĲ��ҡ�
	void select2();//��ѧ�Ž��в��ң�
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
		<<setw(10)<<st[i].cj[3]
		<<setw(10)<<st[i].zf
		<<setw(10)<<st[i].order<<"\n";
	    fo1<<" "<<st[i].xh;
	}
	fo.close;
	fo1.close;
	cout<<"����ѧ�������ϡ�"<<endl;
}
void student::select2()
{
	int i,j=0 ;
	Student b,c[100];
    /*ifstream fi("ѧ����Ϣ�ļ�.txt");
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
	if(j==0)
		cout<<"����Ҫ��ѯ��ѧ��ѧ�Ų����ڡ�"<<endl;
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
		cout<<"*          7: ��ʾǰn��ͬѧ�ɼ�      *"<<endl;
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
	int i;
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
	int a;
	caidan cd1;
	student s;
    
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
case 1:
	cd1.xdenglu();
	cin>>b;
    m=xshibie(b);//ѧ����ݵ���֤
    if(m==true)
	{
Xzhu :	cd1.xzhucaidan();//ѧ���������˵�
		cin>>a;
		switch(a)
		{
		case 1:{goto Xzhu;break;}
		case 2:{break;}
		case 3:{break;}
		case 4:{break;}
		case 5: break;		
		}
	}
	else cout<<"��½ʧ�ܣ�ѧ������"<<endl;

	goto Denglu;break;
case 2:                                    //����Ա���е�һ�в����ڵ�һ��case 2��
	cd1.gdenglu();
	cin>>b;
	m=gshibie(b);    //����Ա����ʶ���ܺ���
	if(m==true)
	{
		Zhu:	cout<<"          ��ѡ���ܲ˵�              "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*         1: ��ѯ�˵�                *"<<endl;
		cout<<"*         2: �޸Ĳ˵�                *"<<endl;
		cout<<"*         3: ���ѧ����Ϣ            *"<<endl;
		cout<<"*         4: ע��ѧ��                *"<<endl;
		cout<<"*         5:   �˳�                  *"<<endl;
		cout<<"**************************************"<<endl;
		cin>>a;
	switch (a)
	{    
		


	case 1:                        // ����Ա���еĲ�ѯ�������ڵڶ���case 1��
		{
		cd1.gchaxun();
		cin>>a;
        switch (a)
		{
		case 1:{break;}              //��������ѯ�Ĺ���
		case 2:                        //��ѧ�Ų�ѯ�Ĺ���
			{
                s.select2();
				goto Zhu;
			break;			   
			}
		case 3:{break;}                 //�����β�ѯ
		case 4:{break;}                  //��ʾ���� 
		case 5:{break;}                   //��ʾ����ͬѧ�ɼ�
		case 6:{break;}//��ʾ����ͬѧ�ɼ�
		case 7:{break;}//��ʾǰn��ͬѧ�ɼ�
		case 8:{break;}//��ʾ��n��ͬѧ�ɼ�
		case 9:{goto Zhu; break;}//�˳���ǰcase 1���ع���Ա���˵�
		}
		}
	case 2:{break;}               //�޸�ѧ����Ϣ
	case 3:                       //���ѧ����Ϣ
		{
            s.add();

			goto Zhu;break;//���ع���Ա���˵�
		}
	case 4:{break;}            //ɾ��ѧ����Ϣ
	case 5:{break;}            //�˳�����
	}
		
	}
	else cout<<"��½ʧ�ܣ���������"<<endl;break;
	goto Denglu;break;     // �����û�ѡ��˵� 
case 3:break;//�˳�����
	
	}

}