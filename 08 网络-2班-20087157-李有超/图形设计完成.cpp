#include<iostream.h>
#include<string.h>
#include<stdlib.h>
const double pi=3.14;
class shape
{
public:
	void xshape(double shape1_x=0,double shape1_y=0){S1_x=shape1_x;S1_y=shape1_y;}

	double S1_x,S1_y;
};
class point:public shape
{
public:	void xpoint(double S1_x,double S1_y)
		{
			xshape(S1_x,S1_y);
			
		}
		void move(double New_x,double New_y)
		{
			S1_x+=New_x;
			S1_y+=New_y;
		}
		double Getpointx()
		{
			return S1_x;

		}
		double Getpointy()
		{
			return S1_y;
		}

};
class rectangle:public point
{
public:
	void xrect(double S1_x,double S1_y,double rect_h,double rect_w)
	{
		xpoint(S1_x,S1_y);
		high=rect_h;
		wide=rect_w;
	}
	void rmove(double S1_x,double S1_y)
	{
		move(S1_x,S1_y);
	}
	double Getarea(double h,double w)
	{
		area=h*w;
		return area;
	}
	double Getzhouchang(double h,double w)
	{
		zhouchang=2*(h+w);
		return zhouchang;
	}
	double Gethigh(double h,double w)
	{
		high=h>w ? h:w;
		return high;
	}
	double Getwide(double h,double w)
	{
		wide=h<w?h:w;
		return wide;
	}
	double high;
	double wide;
	double area;
	double zhouchang;
	

};
class cube:public rectangle
{
public:
	void xcube(double S1_x,double S1_y,double xshape_z,double high,double wide, double cube_l)
	{
		xrect(S1_x,S1_y,high,wide);
		S1_z=xshape_z;
		Long=cube_l;
	}
	void cmove(double S1_x,double S1_y,double New_z)
	{
        rmove(S1_x,S1_y);
		S1_z+=New_z;
	}
	double Getcubev(double h,double w,double l)
	{
		V=h*w*l;
		return V;
	}
	double GetvubeM(double h,double w,double l)
	{
		M=2*(h*w+h*l+l*w);
		return M;
	}
	double Getcubex()
	{
		return S1_x;
	}
	double Getcubey()
	{
		return S1_y;
	}
	double Getcubez()
	{
		return S1_z;
	}
	double Getcubeh()
	{
		return high;
	}
	double Getcubew()
	{
		return wide;
	}
	double Getcubel()
	{
		return Long;
	}
	double S1_z;
	double Long;
	double V;
	double M;

};
class circle:public point
{
     public:
		 void xcircle(double S1_x,double S1_y,double radius)
	   {
		   xpoint(S1_x,S1_y);
		   r=radius;
	   }
	   
	   double Getradius()
	   {
		   return r;
	   }
	   double Getrarea(double R)
	   {
          rarea=R*R*pi;
		  return rarea;
	   }
	   double Getrzhouchang(double R)
	   {
		   rzhouchang=R*2*pi;
		   return rzhouchang;
	   }
       double r;
	   double rarea;
	   double rzhouchang;
};
class clinder:public circle
{
public:
	void xclinder(double S1_x,double S1_y,double san,double radius,double high)
	{
        xpoint(S1_x,S1_y);
         S1_z=san;
		   r=radius;
		   High=high;
	}
	double Gethigh()
	{
		return High;
	}
	double getarea(double r1,double h1)
	{
		clarea=pi*r1*r1*2+2*pi*r1*h1;
		return clarea;
	}
	double getv(double r1,double h1)
	{
		clv=pi*r1*r1*h1;
		return clv;
	}

	double S1_z;
	double clarea;
	double clv;
	double High;
};
void main()
{
	bool m;
	point P1;
	rectangle R1;
	cube C1;
	circle c1;
    clinder cl1;
	int f;
	double x,y,z;
	double a,b,c,d,e;
	while (m)
	{
		cout<<"��ѡ������ͼ�Σ�"<<endl;
	  cout<<"**************************"<<endl;
      cout<<"*"<<"     1. �㣺            "<<"*"<<endl;
      cout<<"*"<<"     2. �����Σ�        "<<"*"<<endl;
      cout<<"*"<<"     3. Բ�Σ�          "<<"*"<<endl;
      cout<<"*"<<"     4. �����壺        "<<"*"<<endl;
	  cout<<"*"<<"     5. Բ��            "<<"*"<<endl;	  
      cout<<"*"<<"     6. ȡ��            "<<"*"<<endl;
	  cout<<"**************************"<<endl;
	  cin>>f;
	     switch(f)
	  {
	  case 1 : 
		  {
				cout<<"�����������꣺"<<endl;
				cin>>x>>y;
				P1.xpoint(x,y);
				cout<<"��ͼ��Ϊһ���㣬λ�õ�Ϊ��"
					<<"("
					<<P1.Getpointx()
					<<","
					<<P1.Getpointy()
					<<")"
					<<endl;	
				break;
		  }
	  case 2:{ 
		  cout<<"�����볤���ε�λ������:"<<endl;
		  cin>>x>>y;
		  R1.rmove(x,y);
		  cout<<"�����볤���ε����߳���"<<endl; 
		  cin>>a>>b; 
		  R1.xrect(x,y, a, b);
		  cout<<"��ͼ��Ϊ�������䳤Ϊ:"<<R1.Gethigh(a,b)<<"��Ϊ:"<<R1.Getwide(a,b)<<endl;
	      cout <<"  λ�õ�Ϊ��"
			   <<"("
			   <<x
			   <<","
			   <<y
			   <<")"
			   <<endl;	
		  cout<<"�����ε����Ϊ��"<<R1.Getarea(a,b)<<endl;
			 cout <<"�����ε��ܳ�Ϊ��"<<R1.Getzhouchang(a,b)<<endl;
		break;	
			 }
	 case 3:{
		  cout<<"������Բ�ε�����λ�ã�"<<endl;
		  cin>>x>>y;
		  cout<<"������Բ�İ뾶��"<<endl; 
		  cin>>a;
		  c1.xcircle(x,y,a);
		  cout<<"��ͼ��ΪԲ�Σ���뾶Ϊ��"<<c1.Getradius()
			  <<endl;
			  cout<<"���Ϊ:"
			  <<c1.Getrarea(a)
			  <<endl;
			 cout<<"�ܳ�Ϊ��"
			  <<c1.Getrzhouchang(a)
			  <<endl;
		  
           cout <<"  λ�õ�Ϊ��"
			   <<"("
			   <<x
			   <<","
			   <<y
			   <<")"
			   <<endl;
		break;	
			 }
	  case 4: 
		  {
		  cout<<"�������������λ�����꣺"<<endl;
		  cin>>x>>y>>z;
		cout<<"������������ĳ������ߣ�"<<endl;  
		  cin>>a>>b>>c; 
		  C1.xcube(x,y,z,a,b,c);
		  C1.cmove(x,y,z);
		  cout<<"��ͼ��Ϊ�����壺"
			  <<"�������߷ֱ�Ϊ��"
			  <<C1.Getcubeh()<<" "<<C1.Getcubew()<<" "<<C1.Getcubel()<<endl;
		  cout<<"����������Ϊ��"<<C1.Getcubev(a,b,c)<<endl;
		   cout<<"����������Ϊ��"<<C1.GetvubeM(a,b,c)<<endl;
			  cout<<"λ�õ�Ϊ"
              <<"("
			   <<C1.Getcubex()
			   <<","
			   <<y
			   <<","
			   <<z
			   <<")"
			   <<endl;
		 break;
		  }
	  case 5:
		  {
             cout<<"������Բס�����꣺"<<endl;
			 cin>>x>>y>>z;
			 cout<<"������Բס�İ뾶���ߣ�"<<endl;
			 cin>>a>>b;
             cl1.xclinder(x,y,z,a,b);
			 cout<<"��ͼ��ΪԲ���壬Բ����ĵ���뾶����Ϊ��"<<endl
				 <<cl1.Getradius()<<"  "<<cl1.Gethigh()<<endl;
			 cout<<"Բ����ı����Ϊ��"<<cl1.getarea(a,b)<<endl
				 <<"Բ��������Ϊ��"<<cl1.getv(a,b)<<endl;
			  cout<<"λ�õ�Ϊ"
              <<"("
			   <<x
			   <<","
			   <<y
			   <<","
			   <<z
			   <<")"
			   <<endl;

			  break;
		  }
	  case 6: m=false; break;
		   
	  }
}
}