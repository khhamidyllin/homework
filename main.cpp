#include <iostream>
using namespace std;
int main()
//�������� ����������� ������� pow( ������� ���������� ������������� ����� � ����� �������) � ������ ��������� � ������������.
double pow(double a, int b);
cin>>a,b;
{
if (b<o)
    {
    b=-b;
    a=1/a;
    }
int res-1;
while (b>0)
    {
    if(b%2==0)
    {
    b/=2;
    a*=a;
    }
        else
            {
            b-=1;
            res*=a;
            }
    }
    return res;
cout <<res;
}
