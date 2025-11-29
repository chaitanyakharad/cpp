/* write a c++ program to store percentage of n student and display in where n is
the number of student where enter by the user. (use new and delete operat).
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of student";
    cin>>n;

    float *per = new float[n];
    // input percentage for each student 
    for(int i=0;i<n;i++)
    {
        cout<<"Enter percentage for student "<<i+1<<":";
        cin>>per[i];

    }
    // display percentage 
    for(int i=0;i<n;i++)
    {
        cout<<"student "<<i+1<<":"<<per[i]<<"%\n";

    }
    // deallocate the dynamically allocate memory
    delete [] per;
    return 0;

}