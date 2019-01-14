#include <iostream>
using namespace std;

int main() {
int a,b,c;
//cout<<"enter the a value of a:";
cin>>a;
//cout<<"enter the a value of b:";
cin>>b;
//cout<<"enter the a value of c:";
cin>>c;
if((a>b)&&(a>c))
{
cout<<a;
}
else if((b>a)&&(b>c))
{
cout<<b;
}
else if((c>a)&&(c>b))
{
cout<<c;
}
return 0;
}
    

