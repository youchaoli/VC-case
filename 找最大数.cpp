# include<iostream.h>
void main()
{
	int i;
	int a[5]={3,7,9,8,4};
	int n=5;
	int max=a[0];
		for(i=1;i<=n-1;i++){
			if(a[i]>max){
				max=a[i];
				cout<<i++<<endl;}

         else
			 break;}
		cout<<"最大值是"<<max<<endl;
}

