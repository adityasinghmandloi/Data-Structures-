#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // define an array
    int num[]= {12,9,37,86,2,17,5};
    int i,j,x;

    cout<<"Array before Insertion Sort"<<endl;
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }

    // run an outer loop i from 1 to N to repeat the process of insertion sort
    for(i=1; i<7; i++)
    {
        // x to be inserted at proper place
        x=num[i];

        // run an inner while loop j for insertion sort from i-1 to 0
        j=i-1;
        while(j>=0)
        {
            // now check if the value of x is less than num[j] then shift the number num[j] towards right else break the inner loop j
            if(x<num[j])
            {
                num[j+1]=num[j];
            }
            else
            {
                break;
            }
            j=j-1;
        }

        // outside the body of inner loop j insert the value of x at num[j+1] position
        num[j+1]=x;
    }

    // print the sorted array
    cout<<"\n\nArray after Insertion Sort\n";
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}
