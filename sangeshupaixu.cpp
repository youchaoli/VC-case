#include<iostream.h>
void main()
{
   int a,b,c;
   cout<<"�������һ����"<<endl;
   cin>>a;
   cout<<"������ڶ�����"<<endl;
   cin>>b;
   cout<<"�������������"<<endl;
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