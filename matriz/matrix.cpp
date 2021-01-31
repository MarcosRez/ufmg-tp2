#include "matrix.h"
using namespace std;

// contrutor default - cria uma matriz vazia com nRows = nCols = 0
Matrix::Matrix(){
    nRows = 0;
    nCols = 0;
}

// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e 
// com todos os elementos iguais a elem (double)
Matrix::Matrix(int rows, int cols){

    nRows = rows;
    nCols = cols;

    m = new double*[nRows];
    for(int i=0; i<nRows; i++) {
        m[i] = new double[nCols];
    }

    for(int i=0; i<nRows; i++) {
        for(int j=0; j<nCols; j++) {
            this->m[i][j] = 0;

        }
    }

}

// destrutor
Matrix::~Matrix() {

    for(int i=0; i < nRows; i++) {
        delete [] m[i]; //Limpa toda a linha de uma vez
    }

}

// obtem o numero de linhas
int Matrix::getRows() const {
    return nRows;
}

// obtem o numero de colunas
int Matrix::getCols() const {
    return nCols;
}

// retorna uma matriz transposta
void Matrix::transpose() {

    Matrix *Aux = new Matrix(nRows, nCols);
     delete m;

    m = Aux->m;
    nRows = nCols;
    nCols = Aux->nRows;


    for(int i = 0; i < getRows(); i++){
        for(int j = 0; j < getCols(); j++){

            Aux->m[i][j] = m[j][i];
        }
    }




}

// imprime o conteudo da matriz
void Matrix::print() const {

    for(int i = 0; i < nRows; i++) {

        for(int j = 0; j < nCols; j++) {
            cout << m[i][j] << ' ';
        }

        cout << endl;

    }

}
