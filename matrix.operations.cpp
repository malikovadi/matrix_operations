#include <iostream>
#include <limits>

using namespace std;

bool isValidInput(int& input)
{
    if (!(cin >> input)) {
        cout << "Incorrect input. Please enter an integer." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    
    return true;
}

int main()
{
    int rowNumber1, columnNumber1, rowNumber2, columnNumber2;
    start: cout << "Enter the number of rows for the first matrix: ";
    if (!isValidInput(rowNumber1))
        goto start;
    
    start2: cout << "Enter the number of columns for the first matrix: ";
    if (!isValidInput(columnNumber1))
        goto start2;
    
    start3: cout << "Enter the number of rows for the second matrix: ";
    if (!isValidInput(rowNumber2))
        goto start3;
    
    start4: cout << "Enter the number of columns for the second matrix: ";
    if (!isValidInput(columnNumber2))
        goto start4;
    
    if (columnNumber1 == rowNumber2)
    {
        int a[rowNumber1][columnNumber1];
        int b[rowNumber2][columnNumber2];
        int resultMatrix[rowNumber1][columnNumber2];
        
        cout << "Enter your first matrix:" << endl;
        for(int i = 0; i < rowNumber1; i++)
        {
            for(int j = 0; j < columnNumber1; j++)
            {
                cin >> a[i][j];   
            }
        } 
        
        cout << endl << "Enter your second matrix:" << endl;
        for(int i = 0; i < rowNumber2; i++)
        {
            for(int j = 0; j < columnNumber2; j++)
            {
                cin >> b[i][j];   
            }
        } 
        
        double product = 0, sum = 0;
        for(int k = 0; k < columnNumber2; k++)
        {
            for(int i = 0; i < rowNumber1; i++)
            {
                for(int j = 0; j < columnNumber1; j++)
                {
                    product = a[i][j] * b[j][k];
                    sum += product;
                    product = 0;
                }
                resultMatrix[i][k] = sum; 
                sum = 0;
            }
        }
        
        cout << endl << endl << "Result matrix:" << endl;
        for(int i = 0; i < rowNumber1; i++) 
        {
            for(int j = 0; j < columnNumber2; j++)
            {
                cout << resultMatrix[i][j] << " ";   
            }
            cout << endl;
        }
    }
    
    else
    {
        cout << "Error..." << endl;
        cout << "The number of columns of the first matrix and the number of rows of the second matrix have to be equal." << endl;
        cout << "Please, try again." << endl;
        goto start;
    }
    
    return 0;
}



