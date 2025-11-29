// multi. dimensional array in cpp
#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={ {11,12,13},
                  {14,15,16},
                  {17,18,19}
                };
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 
    return  0;
    
}