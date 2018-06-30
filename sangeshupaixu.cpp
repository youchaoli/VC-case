#include<iostream.h>
void main()
{
   int a,b,c;
   cout<<"请输入第一个数"<<endl;
   cin>>a;
   cout<<"请输入第二个数"<<endl;
   cin>>b;
   cout<<"请输入第三个数"<<endl;
   cin>>c;
    if(a<b)
        if(a<c)
          if(b<c)
             cout<<a<<"<"<<b<<"<"<<c<<endl;
          else
             cout<<a<<"<"<<c<<"<"<<b<<endl;
        else
           cout<<c<<"<"<<a<<"<"<<b<<endl;
    else
        if(b<c)
            if(a<c)
                cout<<b<<"<"<<a<<"<"<<c<<endl;
            else
                cout<<b<<"<"<<c<<"<"<<a<<endl;
        else
           cout<<c<<"<"<<b<<"<"<<a<<endl;
}