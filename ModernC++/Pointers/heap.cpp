#include <iostream>

int main()
{
    while(1)
    {
        //raw pointers
        int *p = new int[5]; 

        for(int i =0; i< 5; i++)
        {
            p[i] = 5;
        }

        for(int i =0; i< 5; i++)
        {
           std::cout << "element " <<  p[i] << "\n";
        }
      delete []p;
     }

    return 0;
}