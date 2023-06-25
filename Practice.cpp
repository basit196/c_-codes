#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=0;i<15;i++)
    {
        for(j=0;j<30;j++)
        {
            if(i<7)
            {
                if(j<15)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else if(i>=7 && i<14)
            {
                if(j>=5 && j<25)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if(j>=5 && j<25 && (i-j)<8 && (j+i)<32)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}


