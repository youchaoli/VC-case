#include<iostream.h>
#include<stdlib.h>
class student
{
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
		cout<<"*         5: �˳�                    *"<<endl;
		cout<<"**************************************"<<endl;
	}
};
bool xshibie(double b)
{  
	bool m=false;
	double xh[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
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
	double xh[5]={1,2,3,4,5,};
	int i;
	for(i=0;i<5;i++)
	{
		if (b==xh[i])
		{
			cout<<"��½�ɹ�!"<<endl;
            m=true;
			break;
		}

		else
		{
			cout<<"�Բ������������������"<<endl;
			m=false;
		} return m  ;     
	}

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
    if(m=true)
	{
		cd1.xzhucaidan();
		cin>>b;
	}
	else cout<<"��½ʧ�ܣ�ѧ������"<<endl;

	break;
case 2:
	cd1.gdenglu();
	cin>>b;
	m=gshibie(b);
	if(m=true)
	{
		cd1.gcaidan();
	}
	else break;
	break;
case 3:break;
	
	}

}