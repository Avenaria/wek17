

#include <iostream>
using namespace std;
//задание 1 и 2, добавление столбца в двумерный массив, и удаление
void addarray(int** arr, int row, int colum, int index)//+
{
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            
            if (j == index)
            {
                for (int k = colum; k > index; k--)
                {
                    arr[i][k] = arr[i][k - 1];
                }
               
                arr[i][j] = 0;
            }
        }
    }
}
void deletearrey(int** arr, int row, int colum, int index)//-
{
    
    for (int i = 0; i < row; i++)
    {
        
        for (int j = index; j < colum; j++)
        {
            arr[i][j] = arr[i][j + 1];
        }
    }
}











int main()
{


}

