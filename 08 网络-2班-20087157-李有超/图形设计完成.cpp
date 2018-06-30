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
		cout<<"请选择您的图形："<<endl;
	  cout<<"**************************"<<endl;
      cout<<"*"<<"     1. 点：            "<<"*"<<endl;
      cout<<"*"<<"     2. 长方形：        "<<"*"<<endl;
      cout<<"*"<<"     3. 圆形：          "<<"*"<<endl;
      cout<<"*"<<"     4. 立方体：        "<<"*"<<endl;
	  cout<<"*"<<"     5. 圆柱            "<<"*"<<endl;	  
      cout<<"*"<<"     6. 取消            "<<"*"<<endl;
	  cout<<"**************************"<<endl;
	  cin>>f;
	     switch(f)
	  {
	  case 1 : 
		  {
				cout<<"请输入点的坐标："<<endl;
				cin>>x>>y;
				P1.xpoint(x,y);
				cout<<"该图形为一个点，位置点为："
					<<"("
					<<P1.Getpointx()
					<<","
					<<P1.Getpointy()
					<<")"
					<<endl;	
				break;
		  }
	  case 2:{ 
		  cout<<"请输入长方形的位置坐标:"<<endl;
		  cin>>x>>y;
		  R1.rmove(x,y);
		  cout<<"请输入长方形的两边长："<<endl; 
		  cin>>a>>b; 
		  R1.xrect(x,y, a, b);
		  cout<<"该图形为长方形其长为:"<<R1.Gethigh(a,b)<<"宽为:"<<R1.Getwide(a,b)<<endl;
	      cout <<"  位置点为："
			   <<"("
			   <<x
			   <<","
			   <<y
			   <<")"
			   <<endl;	
		  cout<<"长方形的面积为："<<R1.Getarea(a,b)<<endl;
			 cout <<"长方形的周长为："<<R1.Getzhouchang(a,b)<<endl;
		break;	
			 }
	 case 3:{
		  cout<<"请输入圆形的坐标位置："<<endl;
		  cin>>x>>y;
		  cout<<"请输入圆的半径："<<endl; 
		  cin>>a;
		  c1.xcircle(x,y,a);
		  cout<<"该图形为圆形，其半径为："<<c1.Getradius()
			  <<endl;
			  cout<<"面积为:"
			  <<c1.Getrarea(a)
			  <<endl;
			 cout<<"周长为："
			  <<c1.Getrzhouchang(a)
			  <<endl;
		  
           cout <<"  位置点为："
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
		  cout<<"请输入立方体的位置坐标："<<endl;
		  cin>>x>>y>>z;
		cout<<"请输入立方体的长、宽、高："<<endl;  
		  cin>>a>>b>>c; 
		  C1.xcube(x,y,z,a,b,c);
		  C1.cmove(x,y,z);
		  cout<<"该图形为立方体："
			  <<"长、宽、高分别为："
			  <<C1.Getcubeh()<<" "<<C1.Getcubew()<<" "<<C1.Getcubel()<<endl;
		  cout<<"长方体的体积为："<<C1.Getcubev(a,b,c)<<endl;
		   cout<<"长方体的面积为："<<C1.GetvubeM(a,b,c)<<endl;
			  cout<<"位置点为"
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
             cout<<"请输入圆住的坐标："<<endl;
			 cin>>x>>y>>z;
			 cout<<"请输入圆住的半径、高："<<endl;
			 cin>>a>>b;
             cl1.xclinder(x,y,z,a,b);
			 cout<<"该图形为圆柱体，圆柱体的底面半径、高为："<<endl
				 <<cl1.Getradius()<<"  "<<cl1.Gethigh()<<endl;
			 cout<<"圆柱体的表面积为："<<cl1.getarea(a,b)<<endl
				 <<"圆柱体的体积为："<<cl1.getv(a,b)<<endl;
			  cout<<"位置点为"
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