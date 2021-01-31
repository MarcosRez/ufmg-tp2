#include "matrix.h"
using namespace std;

//LINHA DE COMENTÁRIO

// contrutor default - cria uma matriz sem nRows e nCols
Matrix::Matrix(){
    nRows = 0;
    nCols = 0;
}

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

int Matrix::getRows() const {
    return nRows;
}

int Matrix::getCols() const {
    return nCols;
}

void Matrix::transpose() {

    Matrix *Aux = new Matrix(nCols, nRows);

    for(int i = 0; i < Aux->getRows(); i++){
        for(int j = 0; j < Aux->getCols(); j++){

            Aux->m[i][j] = m[j][i];
        }
    }

    delete m;

    m = Aux->m;
    nRows = nCols;
    nCols = Aux->getRows();

}

void Matrix::print() const {

    for(int i = 0; i < nRows; i++) {
        
        for(int j = 0; j < nCols; j++) {
            cout << m[i][j] << ' ';
        }

        cout << endl;

    }

}
