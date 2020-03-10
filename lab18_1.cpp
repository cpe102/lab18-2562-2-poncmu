#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B)
{
	double xmin,xmax,ymin,ymax;
	if(A.x>B.x) xmin=A.x;
	else xmin=B.x;
	
	if(A.x+A.w>B.x+B.w) xmax=B.x+B.w;
	else xmax=A.x+A.w;
	
	if(A.y>B.y) ymax=B.y;
	else ymax=A.y;
	
	if(A.y-A.w>B.y-B.w) ymin=A.y-A.w;
	else ymin=B.y-B.w;

	if(xmax-xmin<0 || ymax-ymin<0)
	return 0;
    else
	{
		return (xmax-xmin)*(ymax-ymin);
	}
	
}

int main(){
	Rect A;
	Rect B;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>A.x>>A.y>>A.w>>A.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>B.x>>B.y>>B.w>>B.h;
	
	cout << "Overlap area = "<<overlap(A,B);	
	return 0;
}
