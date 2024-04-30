#include <iostream>

int main(){
    int rows, cols;

    std::cout << "Enter the number of rows(maximum 3): ";
    std::cin >> rows;

    if(rows > 3){
        std::cout << "invalid input" << std::endl;
        return 0;
    }

    std::cout << "Enter the number of columns (maximum 3): ";
    std::cin >> cols;

    if (cols > 3){
        std::cout << "invalid input" << std::endl;
        return 0;
    }

    double** arr = new double*[rows];

    for (int i = 0; i < rows; i++){
        arr[i] = new double[cols];
    } 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            arr[i][j] = i * cols + j;
        }
    }

    std::cout << "Array elements: " << std::endl;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for(int i = 0; i < rows; i++){
        delete[]arr[i];
    }

    delete[]arr;

    return 0;
}