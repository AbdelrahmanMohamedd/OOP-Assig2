#include <bits/stdc++.h>
#ifndef MASTRIX_H
#define MASTRIX_H
using namespace std;
class matrix
{
private:
    //Class data members
     valarray <int> data;
     int row,col;
     void allocSpace();
public:
     int getRow();           //Getters
     int getColumn();
     matrix();               // Default constructor
     matrix(int r,int c);     // Constructor sets size of array
     matrix (const matrix &mat);  // Copy constructor
     matrix& operator = (const matrix &mat);  // Assignment = overloading
     void setRow(int r);               //Setters
     void setColumn(int c);
     void setMatrix(int row,int col,matrix &mat); // Set function
     matrix operator+  (const matrix mat2);  //Add
     matrix operator-  (const matrix mat2);// Subtract
     matrix operator*  (const matrix mat2);  // Multiply
     matrix operator+  (int scalar);   // Add scalar
     matrix operator-  (int scalar);  // Subtract scalar
     matrix operator*  (int scalar);  // Multiply scalar
     matrix& operator+= (const matrix &mat2);  // plus equal operator that overwrites existing matrix
     matrix& operator-= (const matrix &mat2); // minus equal operator that overwrites existing matrix
     matrix& operator+= (int scalar);   // Adds scalar and overwrites existing matrix
     matrix& operator-= (int scalar);   // Subtract scalar and overwrites existing matrix
     void   operator++ ();    // Increment matrix values by one
     void   operator-- ();        // Decrement matrix values by one
     friend istream& operator>> (istream& in, matrix &mat); // Friend istream to access private data members
     friend ostream& operator<< (ostream& out, matrix mat);  // friend ostream to access private data members
     bool   operator== (const matrix mat2);    // Return true if two matrix equal
     bool   operator!= (const matrix mat2);  // Return true if two matrices are not equal
     bool   isSquare   ();    // Return true if rows=columns
     bool   isSymetric ();     // Returns true if matrix is symmetric
     bool   isIdentity ();       // Return true if matrix is identity
     matrix transpose();       // Return new matrix with transpose
};
#endif // MASTRIX_H
