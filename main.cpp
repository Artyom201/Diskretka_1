#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
bool ai(bool a, bool b)
{
return (!(!a || b));
}//антиимпликация
bool i(bool a, bool b)
{
return (!a || b);
}//импликация
bool eq(bool a, bool b)
{
return (!(a^b));
}//эквивалентность
bool k(bool a, bool b)
{
return (!(a || b));
}//антидизъюнкция
bool f1(bool x,bool y)
{
bool l=k((x||(!y)),((!y)||x)); //вводимаая функция
return l;
}
bool f2(bool x,bool y,bool z)
{
bool l=eq(((!(x&&y))^(!z)),(!(x&&y)));//вводимаая функция
return l;
}
void xyz ()
{
cout«"Таблица истинности: "«endl;
cout«setw(5)«"x";
cout«setw(5)«"y";
cout«setw(5)«"z";
cout«setw(5)«"f1";
cout«setw(5)«"f2"«endl;
bool x,y,z;
int d=8;
for (int i=0; i<d; i++) {{
if (i<(d/2)) {
x=0;
} else {
x=1;
}
if ((i==2)||(i==3)||(i==6)||(i==7)) {
y=1;
} else {
y=0;
}
if ((i%2)==1) {
z=1;
} else {
z=0;
}
}
cout«setw(5)«x;
cout«setw(5)«y;
cout«setw(5)«z;
cout«setw(5)«f1(x,y);
cout«setw(5)«f2(x,y,z)«endl;
}

}
int main()
{

xyz();

return 0;
}
// && — логическое «И» или логическое умножение (конъюнкция). Оператор И возвращает истину, если верны оба утверждения.
// || — логическое «ИЛИ» или логическое сложение (дизъюнкция). Оператор ИЛИ возвращает истину, если верно хотя бы одно утверждение.
// ! — логическое отрицание. Возвращает истину, если утверждение ложно.
// ^ + по модулю 2
// !(&&) - антиконьюнкция
// ! (||) -антидизъюнкция
