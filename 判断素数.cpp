# include<iostream.h>
void main()
{
	int n,k;
	cout<<"������n"<<endl;
	cin>>n;
	for(k=2;k<=(n-1);k++){
		if(n%k==0)
			break;}
	if(k==n)
		cout<<"n������"<<endl;
	else
		cout<<"n��������"<<endl;

}