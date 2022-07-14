#include<iostream>

using namespace std;

class shape

{

public:

virtual void p()=0;

};

class square:public shape

{

public:

int side;

square(int a)

{

side=a;

}

void p()

{

cout<<"\n Side of square: "<<side;

cout << "\n p of square: "<<4*side;

}

};

class rectangle: public shape

{

public:

int length,width;

rectangle(int I,int w)

{

length=1;
width=w;

}

void p()

{

cout << "\n Length of rectangle : " << length; 
cout << "\n width of rectangle : " << width; 
cout << "\n perimeter of rectangle : " << 2*(length+width);

}

};

class triangle:public shape

{

public:

int a,b,c;

triangle(int x,int y,int z)

{ 
a=x;

b=y;

c=z;

}

void p()

{ 
cout << "\n 1st side of triangle: " << a;

cout << "\n 2nd side of triangle: " << b; 

cout << "\n 3rd side of triangle: " << c;

cout << "\n perimeter of triangle: " << a+b+c;
}

};
int main()

{



shape *a;

cout<<"\n\nSquare";

square s(5);

a=&s;

a->p();

cout<<"\n\nReactangle";

rectangle r(12,48);

a=&r;

a->p();

cout<<"\n\nTriangle";

triangle t(25,29,14);

a=&t;

a->p();

return 0;

}
