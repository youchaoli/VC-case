#include<iostream.h>
#include<string.h>
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
void  delate(student st[],int n)
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
}
void main()
{
	student st[4];
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

	          cout<<("��������ѡ�������:")<<endl;
  switch(a)

	 		{
	 			case 0:break;

	 			case 1:
	 				{
						input(st,4);
	 					break;
	 				}

	 			case 2:
					{
	 				    modifly( st, 4)
	 			        break;
					}
	 			case 3 :
	 				{
	 					findnumber(st,4);
	 					break;
	 				}
	 				

	 			case 4:
	 				{
	 					setorder(st,4);
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
		 			    delate( st,4)
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