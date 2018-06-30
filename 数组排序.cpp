# include<iostream.h>

void main()
{
	int i,j;
	int a[10];
	cout<<"请输入一个十位数组"<<endl;
  for(i=0;i<=9;i++)
	  cin>>a[i];
  cout<<"您输入的数组是:"<<endl;
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
  cout<<"排序后的结果是："<<endl;
   for(i=0;i<=9;i++)
	   cout<<a[i]<<"  ";
}