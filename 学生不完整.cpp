struct st
{
	char name[5];
	int c[4];
	int zf;
};
viod input(st s[],int n)
{
	int i,zf;
	cout<<"输入学生各科成绩顺序为。。。"<<endl;
	for(i=0;i<=n-1;i++)
	{
		cin>>s[i].name;
        zf=0;
    	for(j=0;j<4;j++)
		{	cin>>s[i].c[j];
        	zf=zf+s[i].c[j];
		}
	}
}
void kc (st s[],int n,int k[],int m)
{
	int i,j,a;
	for(i=0;i<m;++i)
	{
        k[i]=0;
		for(j=0;j<n;++j)
		{
			k[i]=k[i]+s[j].c[i];
		}
		k[i]=k[i]/n;
	}
	
}
int max(st s[],int n)
{
   int m,n ,i,j;
   m=s[0].zf;
   j=0;
   for(i=1;i<n;++i)
   {
	   if(m<s[i].zf)
	   {  m=s[i].zf;
	      j=i;
	   }
   }return j;
}
void main()
{
	st ss[5];
	int v[4];
	int p;
	input(ss,5);
	kc(ss,5,v,4);
    p=max(ss,5);
	for(i=0;i<4;i++)
	{
		cout<<i<<"kkkkkk";
		cout<<v[i];

	}
	cout<<"   hjgfuasd";
	cout<<ss[p].zc<<"  "ss[].xm;
}