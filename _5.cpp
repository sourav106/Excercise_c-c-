/*
PROGRAM TO PRINT THE FOLLOWING OUTPUTS USING FOR LOOPS
a) 1
   2 2
   3 3 3
   4 4 4 4
b) * * * *
   * * *
   * *
   * 
c) *
   *  *
   *  *  *
   *  *  *  *
   
d)   
    *      {1,5}
   ***     {2,4 - 2,6}
  *****    {3,3 - 3,7}
 *******   {4,2 - 4,8}
*********  {5,1 - 5,9}

e) 1
   2 3
   4 5 6
   7 8 9 10

f) 10 9 8 7
   6 5 4
   3 2
   1

*/
#include<iostream>
#include<conio.h>

using namespace std;

void patt_a(int line)
{
// a) 1
//    2 2
//    3 3 3
//    4 4 4 4
    for(int row=1;row<=line;row++)
    {
        for (int col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}

void patt_b(int line)
{
// b) * * * *
//    * * *
//    * *
//    * 
    for(int row=1;row<=line;row++)
    {
        for(int col=1;col<=line-row+1;col++) // length of col = line - row + 1
        {
            cout<<" * ";

        }
        cout<<endl;
    }
}

void patt_c(int line)
{
// c) *
//    *  *
//    *  *  *
//    *  *  *  *
    for(int row=1;row<=line;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}

void patt_d(int line)
{
// d)   
//     *      {1,5}
//    ***     {2,4 - 2,6}
//   *****    {3,3 - 3,7}
//  *******   {4,2 - 4,8}
// *********  {5,1 - 5,9}
    for(int row=1;row<=line;row++)
    {
        for(int col=1;col<=(line+row-1);col++)
        {
            if ((row+col) >= (line+1))
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}

void patt_e(int line)
{
// e) 1
//    2 3
//    4 5 6
//    7 8 9 10
    int ctr = 1;
    for(int i=1;i<=line;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ctr<<" ";
            ctr++;
        }
        cout<<endl;
    }
}

void patt_f(int line)
{
// f) 10 9 8 7
//    6 5 4
//    3 2
//    1
    int start=0;
    for(int i=1;i<=line;i++)start+=i;

    for(int row=line;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }
}



int main()
{
    int n;
    cout<<"Enter Number of Lines: ";
    cin>>n;
    patt_f(n);
    getch();
    return 0;
}