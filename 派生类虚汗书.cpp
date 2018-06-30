#include<iostream.h>
const double PI=3.14159;
class shape
{
public:
		void setvalue(double x,double y=0,double u=0,double v=0,double h=0)
	{
		side1=x;
		side2=y;
		side3=u;
		side4=v;
		high=h;
	}
		virtual void calculateArea()=0;
	    virtual void calculatePerim()=0;
protected :
			double side1,side2,side3,side4,high;
};
class Square:public shape
{
public:
	   virtual void calculateArea()
   {   
	   cout<<"�����ε�����ǣ�"<<side1*side1<<endl;
   } 
       virtual void calculatePerim()
	   {
		   cout<<"�����ε��ܳ�Ϊ��"<<4*side1<<endl;
	   }
};
class Recentangle:public shape
{
public:
      virtual void calculateArea()
{                         
	   cout<<"�����ε�����ǣ�"<<side1*side2<<endl;
   } 
       virtual void calculatePerim()
	   {
		   cout<<"�����ε��ܳ�Ϊ��"<<2*(side1+side2)<<endl;
	   }
};
class Circle:public shape
{
public:
	   virtual void calculateArea()
   {   
	   cout<<"Բ�ε�����ǣ�"<<PI*side1*side1<<endl;
   } 
       virtual void calculatePerim()
	   {
		   cout<<"Բ�ε��ܳ�Ϊ��"<<2*PI*side1<<endl;
	   }
};
class LadderShape:public shape
{
public:
	   virtual void calculateArea()
   {   
	   cout<<"���ε�����ǣ�"<<(side1+side2)*high/2<<endl;
   } 
       virtual void calculatePerim()
	   {
		   cout<<"���ε��ܳ�Ϊ��"<<side1+side2+side3+side4<<endl;
	   }	
};
void main()
{
   Square s1;
   Recentangle r1;
   Circle c1;
   LadderShape l1;
   double a,b,c,d,e;
   int f;
   cout<<"��ѡ������ͼ�Σ�"<<endl;
      cout<<"     1. �����Σ�"<<endl;
      cout<<"     2. �����Σ�"<<endl;
      cout<<"     3. Բ�Σ�"<<endl;
      cout<<"     4. ���Σ�"<<endl;
      cout<<"     5.ȡ��"<<endl;
	  cin>>f;
	  switch(f)
	  {
	  case 1 : 
		  {
				cout<<"�����������εı߳���"<<endl;
				cin>>a;
				s1.setvalue(a);
		    	s1.calculateArea();
				s1.calculatePerim();
				break;
		  }
	  case 2:{ 
		  cout<<"�����볤���ε����߳���"<<endl; 
		  cin>>a>>b; 
		  r1.setvalue(a,b);  
		  r1.calculateArea(); 
		  r1.calculatePerim();
		break;	
			 }
	  case 3:{
		  cout<<"������Բ�İ뾶��"<<endl; 
		  cin>>a;
		  c1.setvalue(a);
		  c1.calculateArea();
		  c1.calculatePerim();
		break;	
			 }
	  case 4: 
		  {
		cout<<"���������ε��ı߳��͸ߣ�"<<endl;  
		  cin>>a>>b>>c>>d>>e; 
		  c1.setvalue(a,b,c,d,e); 
		  c1.calculateArea(); 
		  c1.calculatePerim();
		 break;
		  }
	  case 5:break;
	  }
}