# include<iostream.h>

void main()
{
	int i,j;
	int a[10];
	cout<<"������һ��ʮλ����"<<endl;
  for(i=0;i<=9;i++)
	  cin>>a[i];
  cout<<"�������������:"<<endl;
  for(i=0;i<=9;i++)
	  cout<<a[i]<<"  ";
  for(i=0;i<=9;i++)
  {
	  int min=i;
		  for(j=i;j<=9;j++)
			  if(a[j]<a[min])
				  min=j;
			  if(i!=min)
			  {
				  int temp=a[i];
				  a[i]=a[min];
				  a[min]=temp;
			  }
  }
  cout<<endl;
  cout<<"�����Ľ���ǣ�"<<endl;
   for(i=0;i<=9;i++)
	   cout<<a[i]<<"  ";
}