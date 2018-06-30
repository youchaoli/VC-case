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
	   cout<<"正方形的面积是："<<side1*side1<<endl;
   } 
       virtual void calculatePerim()
	   {
		   cout<<"正方形的周长为："<<4*side1<<endl;
	   }
};
class Recentangle:public shape
{
public:
      virtual void calculateArea()
{                         
	   cout<<"长方形的面积是："<<side1*side2<<endl;
   } 
       virtual void calculatePerim()
	   {
		   cout<<"长方形的周长为："<<2*(side1+side2)<<endl;
	   }
};
class Circle:public shape
{
public:
	   virtual void calculateArea()
   {   
	   cout<<"圆形的面积是："<<PI*side1*side1<<endl;
   } 
       virtual void calculatePerim()
	   {
		   cout<<"圆形的周长为："<<2*PI*side1<<endl;
	   }
};
class LadderShape:public shape
{
public:
	   virtual void calculateArea()
   {   
	   cout<<"梯形的面积是："<<(side1+side2)*high/2<<endl;
   } 
       virtual void calculatePerim()
	   {
		   cout<<"梯形的周长为："<<side1+side2+side3+side4<<endl;
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
   cout<<"请选择您的图形："<<endl;
      cout<<"     1. 正方形："<<endl;
      cout<<"     2. 长方形："<<endl;
      cout<<"     3. 圆形："<<endl;
      cout<<"     4. 梯形："<<endl;
      cout<<"     5.取消"<<endl;
	  cin>>f;
	  switch(f)
	  {
	  case 1 : 
		  {
				cout<<"请输入正方形的边长："<<endl;
				cin>>a;
				s1.setvalue(a);
		    	s1.calculateArea();
				s1.calculatePerim();
				break;
		  }
	  case 2:{ 
		  cout<<"请输入长方形的两边长："<<endl; 
		  cin>>a>>b; 
		  r1.setvalue(a,b);  
		  r1.calculateArea(); 
		  r1.calculatePerim();
		break;	
			 }
	  case 3:{
		  cout<<"请输入圆的半径："<<endl; 
		  cin>>a;
		  c1.setvalue(a);
		  c1.calculateArea();
		  c1.calculatePerim();
		break;	
			 }
	  case 4: 
		  {
		cout<<"请输入梯形的四边长和高："<<endl;  
		  cin>>a>>b>>c>>d>>e; 
		  c1.setvalue(a,b,c,d,e); 
		  c1.calculateArea(); 
		  c1.calculatePerim();
		 break;
		  }
	  case 5:break;
	  }
}