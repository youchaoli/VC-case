#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
struct Student
{
   char name[10];
   double xh[10];
	int cj[3];
	int zf;
	int order;
	double pj;
};
class student
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
class guliyuan
{
public:
};
class caidan
{
public:
	void denglu()
	{  
		cout<<"            ��ӭʹ�ñ�ϵͳ��"<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*           ��ѡ���û�����           *"<<endl;
		cout<<"*             1: ѧ��                *"<<endl;
		cout<<"*             2: ����Ա              *"<<endl;
		cout<<"*             3: �˳�                *"<<endl;
        cout<<"**************************************"<<endl;
	}
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
	void gcaidan()
	{
		cout<<"          ��ѡ���ܲ˵�              "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*         1: ��ѯ�˵�                *"<<endl;
		cout<<"*         2: �޸Ĳ˵�                *"<<endl;
		cout<<"*         3: ע���³�Ա              *"<<endl;
		cout<<"*         4: ע��ѧ��                *"<<endl;
		cout<<"*         5:   �˳�                  *"<<endl;
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
    cd1.denglu();
	cin>>a;
	switch (a)
	{
case 1:
	cd1.xdenglu();
	cin>>b;
    m=xshibie(b);
    if(m==true)
	{
		cd1.xzhucaidan();
		cin>>a;
		switch(a)
		{
		case 1:{break;}
		case 2:{break;}
		case 3:{break;}
		case 4:{break;}
		case 5: break;		
		}
	}
	else cout<<"��½ʧ�ܣ�ѧ������"<<endl;

	break;
case 2:
	cd1.gdenglu();
	cin>>b;
	m=gshibie(b);
	if(m==true)
	{
		cd1.gcaidan();
		cin>>a;
	switch (a)
	{
	case 1:
		{
		cd1.gchaxun();
		cin>>a;
        switch (a)
		{
		case 1:{break;}
		case 2:{break;}
		case 3:{break;}
		case 4:{break;}
		case 5:{break;}
		case 6:{break;}
		case 7:{break;}
		case 8:{break;}
		case 9:{break;}
		}
		}
	case 2:{break;}
	case 3:{break;}
	case 4:{break;}
	case 5:{break;}
	}
		
	}
	else cout<<"��½ʧ�ܣ���������"<<endl;break;
	break;
case 3:break;
	
	}

}