//Arithematic operators
/*#include <stdio.h>
void main()
{
	int a=10,b=20,c;
	c=a+b;
	printf("c=%d\n",c);
	c=a-b;
	printf("c=%d\n",c);
	c=a*b;
	printf("c=%d\n",c);
	c=a/b;
	printf("c=%d\n",c);
	c=a%b;
	printf("c=%d\n",c);

}*/
//relational operator
/*#include <stdio.h>
void main()
{
	int a=4,b=5,c;
	c=a>b;
	printf("c=%d\n",c);
	c=a<b;
	printf("c=%d\n",c);
	c=a>=b;
	printf("c=%d\n",c);
	c=a<=b;
	printf("c=%d\n",c);
	c=a!=b;
	printf("c=%d\n",c);
	c=a==b;
	printf("c=%d\n",c);
}*/

//logical operators
/*#include <stdio.h>
int main()
{
	int a=5,b=12,x,y,z;
	x=(a>4)&&(b>11);
	printf("x=%d\n",x);
	x=(a<4)&&(b<11);
	printf("x=%d\n",x);
	x=(a>4)&&(b<11);
	printf("x=%d\n",x);
	x=(a<4)&&(b>11);
	printf("x=%d\n",x);
	y=(a>4)||(b>10);
	printf("y=%d\n",y);
	y=(a<4)||(b<10);
	printf("y=%d\n",y);
	y=(a>4)||(b<10);
	printf("y=%d\n",y);
	y=(a<4)||(b>10);
	printf("y=%d\n",y);
	z=!(a>5);
	printf("z=%d\n",z);
	z=!(b<15);
	printf("z=%d\n",z);
	return 0;
}*/

//increment and decrement operator
/*#include <stdio.h>
void main()
{
	int a=10,b;
	b=++a;
	printf("b=%d\n",b);
	a=b++;
	printf("a=%d\n",a);
	printf("b=%d\n",b);

}*/

/*#include <stdio.h>
int main()
{
	int a=10,b,c,d;
	b=++a;
	printf("b=%d\n",b);
	c=a++;
	printf("c=%d\n",c);
	d=a;
	printf("d=%d\n",d);
	printf("a=%d\n",a);

}*/
/*#include <stdio.h>
void main()
{
	int a=7,b,c,d,e;
	b=a++ + a;
	printf("b=%d\n",b);
	c=++b + a;
	printf("c=%d\n",c);
	printf("b=%d\n",b);
	d=c++ + ++b;
	printf("d=%d\n",d);
	e=c;
	printf("e=%d\n",e);
}*/

/*#include <stdio.h>
void main()
{
	int a=7,b,c,d,e;
	b=--a +a;
	printf("b=%d\n",b);
	c=a-- - --b;
	printf("c=%d\n",c);
	d=c++ - --c;
	printf("d=%d\n",d);
	d=e;
	printf("e=%d\n",e);

}*/

/*#include <stdio.h>
void main()
{
	int a=5,b;
	b=a++ + ++a;
	printf("b=%d\n",b); 
}*/

/*#include <stdio.h>
void main()
{
	int x=4,y;
	y=++x +x++ +x;
	printf("y=%d\n",y);
}*/

/*#include <stdio.h>
void main()
{
	int m=2,n;
	n=m-- + --m+m;
	printf("n=%d\n",n);
}*/

/*#include <stdio.h>
void main()
{
	int a=10,b;
	b=a--;
	printf("b=%d\n",b);
	printf("a=%d\n",a);
}*/

/*#include <stdio.h>
void main()
{
	int x=100,y;
	y=x++;
	printf("y=%d\n",y);
	x=y--;
	printf("x=%d\n",x);
}*/

/*#include <stdio.h>
int main()
{
	int x=100,y;
	y=++x;
	printf("y=%d\n",y);
	x=++y;
	printf("x=%d\n",x);
	x=--y;
	printf("x=%d\n",x);
	x=y--;
	printf("x=%d\n",x);
	return 0;


}*/

/*#include <stdio.h>
void main()
{
	int a=10,b=7,c;
	c=a&b;
	printf("c=%d\n",c);
	c=a|b;
	printf("c=%d\n",c);
	c=a^b;
	printf("c=%d\n",c);
	c=~a;
	printf("c=%d\n",c);


}*/
/*#include <stdio.h>
void main()
{
	int a=10,c;
	c=a>>2;
	printf("c=%d\n",c);
	c=a>>3;
	printf("c=%d\n",c);
	c=a<<3;
	printf("c=%d\n",c);
}*/

//data types

/*#include <stdio.h>
struct student {
	char name[50];
	int roll_no;
	float marks;
};
int main()
{
	struct student student1={"samreen",38,92.2};
	printf("name:%s\n",student1.name);
	printf("Roll no:%d\n",student1.roll_no);
	printf("Marks:%.2f\n",student1.marks);
	return 0;
}*/

/*#include <stdio.h>

union Data{
	int integer_val;
	float flaot_val;
	char char_val;

};
int main(){
	union Data data;
	data.integer_val=10;
	data.flaot_val=220.5;
	printf("Flaot value:%.lf\n",data.flaot_val);
	return 0;
}*/


/*#include <stdio.h>
void main()
{
	int array[5]={1,2,3,4,5};
	printf("%d\n",array[3]);

}*/
/*#include <stdio.h>
void main()

{
	int a=10;
	int *p=&a;	
	printf("%d\n",*p);

}*/


/*#include <stdio.h>
struct student
{
	int id;
	char grade;

};
int main()
{
	struct student s;
	s.id=101;
	s.grade='A';
	printf("Id=%d\n",s.id);
	printf("grade=%c\n",s.grade);

}*/

/*#include <stdio.h>
#include <string.h>
struct employee
{
	int salary;
	char name[20];
};
void main()
{
	struct employee e;
	e.salary=20000;
	strcpy(e.name,"samreen");
	printf("Salary=%d\n",e.salary);
	printf("Name=%s\n",e.name);

}*/
/*#include <stdio.h>
union Data
{
	int num;
	char ch;

};
int main()
{
	union Data d;
	d.num=100;
	printf("Numbers=%d\n",d.num)
	d.ch='M';
	printf("character=%c",d.ch );
	return 0;
	
}*/
//complete
/*#include <stdio.h>
void main()
{
	int a=8,b=15,c=4,d;
	d=2*((a%5)*(4+(b-3)/(c+2)));
	printf("d=%d\n",d);
}*/
//complete
/*#include <stdio.h>
void main()
{
	int a=11,b=6,c=0,d=7,e=5,x;
	x=a+2>b&&!c||a!=d&&a-2<=e;
	printf("x=%d\n",x);
}*/
//complete
/*#include <stdio.h>
void main()
{
	int a;
	a=10!=10||15<4&&8;
	printf("a=%d\n",a);

}*/
//dought
/*#include <stdio.h>
void main()
{
	int i=4,j=2,a=2,k=6,m;
	k*=i+j;
	printf("k=%d\n",k);
	j=i/=k;
	printf("j=%d\n",j);
	
	m=i+(j=2+k);
	printf("m=%d\n",m);

}*/


//complete
/*#include <stdio.h>
void main()
{
	int a=4,b;
	b=a- ++a;
	printf("b=%d\n",b);
	printf("a=%d\n",a);
	b=--a - a--;
	printf("b=%d\n",b);



}*/

//dought

/*#include <stdio.h>
void main()
{
	int i=3,j=4,k=2,b;
	b=i++ -j--;
	printf("b=%d\n",b);
	b=++k%-j;
	printf("b=%d\n",b);
	b=j+1/i-1;
	printf("b=%d\n",b);
	b=j++/i--;
	printf("b=%d\n",b);

}*/

