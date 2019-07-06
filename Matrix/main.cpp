#include <bits/stdc++.h>
#include "mastrix.h"
#include "mastrix.cpp"
using namespace std;

ostream &operator <<(ostream &out,matrix mat)
{
    for(int i=0;i<mat.getColumn()*mat.getRow();i++)
    {
        out<<mat.data[i]<<" ";
        if( (i+1)%mat.getColumn()==0)
        {
            cout<<endl;
        }
    }
    return out;
}
istream &operator >>(istream &in,matrix &mat)
{
    int r,c;
    cin>>r>>c;
    mat.setMatrix(r,c,mat);
    for(int i=0;i<r*c;++i)
    {
        in>>mat.data[i];
    }
    return in;
}
int main()
{
    matrix mat1,mat2(3,3),mat3;
    cin>>mat1;
    mat2=mat1;
    cout<<mat2;

}
