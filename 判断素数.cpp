# include<iostream.h>
void main()
{
	int n,k;
	cout<<"请输入n"<<endl;
	cin>>n;
	for(k=2;k<=(n-1);k++){
		if(n%k==0)
			break;}
	if(k==n)
		cout<<"n是素数"<<endl;
	else
		cout<<"n不是素数"<<endl;

}