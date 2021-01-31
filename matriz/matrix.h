#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
class Matrix {
    private:

        double** m; // Array 2D
        int nRows;
        int nCols; 

    public:

        // Construtor
        Matrix();                           
        Matrix(int rows, int cols);

        // Destrutor
        ~Matrix();
    
        //Funções
        int getRows() const;
        int getCols() const;
        void transpose();
        void print() const;        
        
};