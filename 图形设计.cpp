#include<iostream.h>
#include<string.h>
class shape
{
public:
	void xshape(float shape1_x=0,float shape1_y=0){S1_x=shape1_x;S1_y=shape1_y;}

	float S1_x,S1_y;
};
class point:public shape
{
public:	void xpoint(float S1_x,float S1_y)
		{
			xshape(S1_x,S1_y);
			
		}
		void move(float New_x,float New_y)
		{
			S1_x+=New_x;
			S1_y+=New_y;
		}
		float Getpointx()
		{
			return S1_x;

		}
		float Getpointy()
		{
			return S1_y;
		}

};
class rectangle:public point
{
public:
	void xrect(float S1_x,float S1_y,float rect_h,float rect_w)
	{
		xpoint(S1_x,S1_y);
		high=rect_h;
		wide=rect_w;
	}
	void rmove(float S1_x,float S1_y)
	{
		move(S1_x,S1_y);
	}
	float Getarea(float h,float w)
	{
		area=h*w;
		return area;
	}
	float Getzhouchang(float h,float w)
	{
		zhouchang=2*(h+w);
		return zhouchang;
	}
	float Gethigh(float h,float w)
	{
		high=h>w ? h:w;
		return high;
	}
	float Getwide(float h,float w)
	{
		wide=h<w?h:w;
		return wide;
	}
	float high;
	float wide;
	float area;
	float zhouchang;
	

};
class cube:public rectangle
{
public:
	void xcube(float S1_x,float S1_y,float xshape_z,float high,float wide, float cube_l)
	{
		xrect(S1_x,S1_y,high,wide);
		S1_z=xshape_z;
		Long=cube_l;
	}
	void cmove(float S1_x,float S1_y,float New_z)
	{
        rmove(S1_x,S1_y);
		S1_z+=New_z;
	}
	float Getcubez()
	{
		return S1_z;
	}
	float Getcubel()
	{
		return Long;
	}
	float S1_z;
	float Long;

};
class circle:public point
{
     public:void xcircle(float S1_x,float S1_y,float radius)
	   {
		   xpoint(S1_x,S1_y);
		   r=radius;
	   }
	   
	   float Getradius()
	   {
		   return r;
	   }
       float r;
};
class clinder:public circle
{};
void main()
{
	point P1;
	rectangle R1;
	cube C1;
	int f;
	float x,y,z;
	float a,b,c,d,e;
   cout<<"��ѡ������ͼ�Σ�"<<endl;
      cout<<"     1. �㣺"<<endl;
      cout<<"     2. �����Σ�"<<endl;
      cout<<"     3. Բ�Σ�"<<endl;
      cout<<"     4. �����壺"<<endl;
      cout<<"     5.ȡ��"<<endl;
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
		  R1.void xrect(x,y,float a,float b);
		 //cout<<"��ͼ��Ϊ������,�䳤Ϊ "<<R1.Gethigh<<" ��Ϊ "<<R1.Getwide<<endl;

		  cout<<"��ͼ��Ϊ�������䳤Ϊ:"<<R1.Gethigh<<"��Ϊ:"<<R1.Getwide<<endl;

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
	 /* case 3:{
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
		  }*/
	  case 5:break;
	  }
}