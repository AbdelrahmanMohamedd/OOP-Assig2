#include "mastrix.h"
#include <bits/stdc++.h>
using namespace std;
int matrix::getColumn() // get col value
{
    return col;
}
int matrix::getRow()  // get row value
{
    return row;
}
void matrix :: setRow(int r)  // Set row value
{
    row=r;
}
void matrix :: setColumn(int c)  // Set column value
{
    col=c;
}

matrix :: matrix()  // Default constructor
{
}
matrix :: matrix (int r,int c) // constructor that size dimensions of matrix
{
    this->row=r;      // this called current object
    this->col=c;
    this->data.resize(r*c);
}
matrix :: matrix (const matrix &mat) // Copy construct, copies values of passed matrix
{
    this->row=mat.row; // this called current object
    this->col=mat.col;
    this->data.resize(row*col);
    for(int i=0;i<row*col;++i)
    {
        data[i]=mat.data[i];
    }
}
matrix& matrix :: operator = (const matrix &mat) // Assignment operator = that makes current matrix(this) equals passed matrix
{
    if(*this==mat) // // this called current object
        return *this;
    if(row!=mat.row || col!=mat.col)
    {
        this->row=mat.row;
        this->col=mat.col;
        this->data.resize(row*col);
        for(int i=0;i<row*col;++i)
        {
            this->data[i]=mat.data[i];
        }
    }
    return *this;  // returns the matrix after assigning it to another one
}
void matrix:: setMatrix(int row,int col, matrix &mat) // Sets matrix
{
    mat.setColumn(col);
    mat.setRow(row);
    mat.data.resize(row*col);
}
matrix matrix::operator+(const matrix mat)  // Adds two matrices
{
    if(getRow()!=mat.row || mat.col!=getColumn())  // check if they have same dimensions
    {
        cout<<"Can't add matrices as they have different dimensions\n";
    }
    else
    {
    matrix ans;
    ans.setMatrix(mat.row,mat.col,ans);
    for(int i=0;i<mat.row*mat.col;++i)
    {
        ans.data[i]=(data[i]+mat.data[i]);
    }
    return ans;     // return matrix ans with the result
    }
}
matrix matrix::operator-(const matrix mat)  // Subtracting two matrices
{
    if(getRow()!=mat.row || mat.col!=getColumn()) // Check if they have same dimensions
    {
        cout<<"Can't add matrices as they have different dimensions\n";
    }
    else
    {
    matrix ans;
    ans.setMatrix(mat.row,mat.col,ans);  // return matrix ans with the result
    for(int i=0;i<mat.row*mat.col;++i)
    {
        ans.data[i]=(data[i]-mat.data[i]);
    }
    return ans;   // return matrix ans with the result
    }
}
matrix matrix :: operator*  (const matrix mat2) // Multiply two matrices
{
    if(getColumn()!=mat2.row) // check if we can multiply
    {
        cout<<"Can't multiply matrices as matrix 1 col not equal matrix 2row\n";
    }
    else
    {
    matrix ans;
    ans.data.resize(getRow()*mat2.col);               // trying something out           // 1 2 3 4---> 1 2   3 4 <----- 3 4 5 6      13 16 29 36   2x3 3x6
                                                                //             3 4   5 6
    ans.row = getRow(); // <---
    ans.col = mat2.col; // <---
    for(int i=0;i<ans.row;++i)  // iterating over rows
    {
        for(int j=0;j<ans.col;++j)   // iterating over columns
        {
            int sum=0;    // initialize sum =0
            for(int k=0;k<mat2.row;++k)  // Getting sum of every element in row multiplying by element in corresponding columns
            {
                sum=sum+this->data[i*getColumn()+k]*mat2.data[k*mat2.col+j];  // return matrix ans with the result
            }
            ans.data[i*mat2.col+j]=sum;
        }
    }
    return ans;  // return matrix ans with result
    }
}
matrix matrix :: operator+  (int scalar)  // Adds a scalar to a matrix
{
    matrix ans;
    ans.setMatrix(getRow(),getColumn(),ans);
    for(int i=0;i<getColumn()*getRow();++i)
    {
        ans.data[i]=(data[i]+scalar);
    }
    return ans; // Return matrix with result
}
matrix matrix :: operator-  (int scalar) // Subtract a Matrix by scalar
{
    matrix ans;   // Creating a matrix to put result in
    ans.setMatrix(getRow(),getColumn(),ans);
    for(int i=0;i<getColumn()*getRow();++i)
    {
        ans.data[i]=(data[i]-scalar);
    }
    return ans; // Returns matrix with result
}
matrix matrix :: operator*  (int scalar) // Multiply matrix by scalar
{
    matrix ans;
    ans.setMatrix(getRow(),getColumn(),ans);
    for(int i=0;i<getColumn()*getRow();++i)
    {
        ans.data[i]=(data[i]*scalar);
    }
    return ans; // Returns matrix with answer
}
matrix& matrix :: operator+= (const matrix &mat2) // overwrites matrix by adding passed matrix to it
{

     if(getRow()!=mat2.row || mat2.col!=getColumn()) // Check dimensions
    {
        cout<<"Can't add matrices as they have different dimensions\n";
    }
    else
    {
    for(int i=0;i<getRow()*getColumn();++i)
    {
        data[i]+=(mat2.data[i]);
    }
    return *this; // return current object
    }

}
matrix& matrix :: operator-= (const matrix &mat2) // overwrites matrix by subtracting passed matrix to it
{

     if(getRow()!=mat2.row || mat2.col!=getColumn()) // Checks dimensions
    {
        cout<<"Can't add matrices as they have different dimensions\n";
    }
    else
    {
    for(int i=0;i<getRow()*getColumn();++i)
    {
        data[i]-=(mat2.data[i]);
    }
    return *this;  // return current object
    }

}
matrix& matrix :: operator+= (int scalar) // add matrix to scalar
{
    for(int i=0;i<getRow()*getColumn();++i)
    {
        data[i]+=scalar;
    }
    return *this; // return current object
}
matrix& matrix :: operator-= (int scalar) // Subtract matrix by scalar
{
    for(int i=0;i<getRow()*getColumn();++i)
    {
        data[i]-=scalar;
    }
    return *this; // return current object
}
void matrix :: operator++()  // Increment matrix by one
{
    for(int i=0;i<getRow()*getColumn();++i)
    {
        data[i]++;
    }
}
void matrix :: operator--()  // Decrement matrix by one
{
    for(int i=0;i<getRow()*getColumn();++i)
    {
        data[i]--;
    }
}
bool matrix ::operator== (const matrix mat2) // Check if two matrices are identical
{
    if(getRow()!=mat2.row || mat2.col!=getColumn()) // First, Checks dimensions
    {
        return false; // return false if not equal
    }
    else
    {
    for(int i=0;i<getRow()*getColumn();++i)
    {
        if(data[i]!=mat2.data[i])
        {
            return false;
        }
    }
    return true; // Return true if equal
    }
}
bool matrix ::operator!= (const matrix mat2) // Check if two matrices are not equal
{
    if(getRow()!=mat2.row || mat2.col!=getColumn())
    {
        return true;
    }
    else
    {
    for(int i=0;i<getRow()*getColumn();++i)
    {
        if(data[i]!=mat2.data[i])
        {
            return true;
        }
    }
    return false;
    }
}
bool matrix :: isSquare () // Return true if rows=columns
{
    if(getRow()!=getColumn())
    {
        return false;
    }
    return true;
}
bool  matrix ::isIdentity () // return true if matrix is identity
{
    if(getRow()!=getColumn()) // Checks if it is square
    {
        return false;
    }
    else
    {
    bool check=true;
    int x=getRow()+1;
    for(int i=0;i<getRow()*getColumn();i=i+x) // to get the index with values of it are ones
    {
        if(data[i]!=1)
        {
            check=false;
            break;
        }
    }
    if(check==true) // if all diagonals are ones check if all the rest are zeros
    {
        for(int i=0;i<getRow()*getColumn();++i)
        {
            if( i%x==0)
            {
                continue;
            }
            else
            {
                if(data[i]!=0)
                {
                    return false;
                }
            }
        }
            return true; // return true if identity
    }
    return false;  // return false if not identity
}
}
bool matrix :: isSymetric() // checks symmetry
{
    if(row!=col) // check dimensions as it must be a square matrix
    {
        return false;
    }
    matrix ans(this->col,this->row); // this call current object in the class
    ans=this->transpose();   // assign ans to the transpose of current object
    for(int i=0;i<col*row;++i)
    {
        if(data[i]!=ans.data[i])  // Check the values of each
            return false;
    }
    return true; // return true if equal
}
/* trying sth that didn't work
matrix matrix :: transpose()
{
    int z=0;
    matrix ans;
    ans.row=getColumn();
    ans.col=getRow();
    ans.data.resize(getColumn()*getRow());
    int a[getRow()][getColumn()];
    for(int i=0;i<getRow();++i)
    {
        for(int j=0;j<getColumn();++j)
        {
            a[i][j]=data[z];
            z++;
        }
    }
    int c[getColumn()][getRow()];
    for(int i=0;i<getColumn();++i)
    {
        for(int j=0;j<getRow();++j)
        {
            c[i][j]=0;
        }
    }
    for(int i=0;i<getRow();++i)
    {
        for(int j=0;j<getColumn();++j)
        {
            c[j][i]=a[i][j];
        }
    }
    for(int i=0;i<getColumn();++i)
    {
        for(int j=0;j<getRow();++j)
        {
            cout<<c[i][j];
        }
        cout<<endl;
    }

    z=0;
    for(int i=0;i<getColumn();++i)
    {
        for(int j=0;j<getRow();++j)
        {
            ans.data[z]=a[i][j];
            z++;
        }
    }
*/

matrix  matrix :: transpose() // Gets transpose
{
    matrix ans; // object to store transpose into
    ans.row=getColumn();
    ans.col=getRow();
    ans.data.resize(getColumn()*getRow());
    int z=0;
    for(int j=0;j<this->col;++j)
    {
        for(int i=0;i<this->row;++i)
        {
            ans.data[z]=data[j+i*this->col]; // Transposing
            z++;
        }
    }
    return ans; // return ans with the transpose of the current object(this)
}


