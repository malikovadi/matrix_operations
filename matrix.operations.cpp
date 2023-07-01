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
void showOperations()
{
    string menu[] = 
    {
        "1. Addition",
        "2. Substraction",
        "3. Multiplication"
    };
    
    cout << "Choose the operation you want:" << endl;
    for(auto now: menu)
    {
        cout << now << endl;
    }
}

int main()
{
    showOperations();
    int userChoice;
    cin >> userChoice;
    if(userChoice == 1)
    {
        beginning: cout << "Enter the dimension of the matrices:" << endl;
        int dimension;
        if(!isValidInput(dimension))
            goto beginning;
        string a1[dimension][dimension];
        int a[dimension][dimension];
        int b[dimension][dimension];
        int resultMatrix[dimension][dimension];
            
        for(int k = 0; k < 2; k++)
        {
           for(int i = 0; i < dimension; i++)
            {
                for(int j = 0; j < dimension; j++)
                {
                    a1[i][j] = "_";
                    cout << a1[i][j] << " ";
                }
                cout << endl;
            } 
            cout << endl; 
        }
        
        cout << endl << "Enter your first matrix:" << endl;
        int countColumns = 0;
        for(int i = 0; i < dimension; i++)
        {
            if(i == 0)
            {
                cout << "Enter your " << i + 1 << "st row" << endl;
            }
            else if(i == 1)
            {
                cout << "Enter your " << i + 1 << "nd row" << endl;
            }
            else if(i == 2)
            {
                cout << "Enter your " << i + 1 << "rd row" << endl;
            }
            else
            {
                cout << endl << "Enter your " << i + 1 << "th row:" << endl; 
            }
            for(int j = 0; j < dimension; j++)
            {
                cin >> a[i][j];
            }  
        }
        
        cout << endl;
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                a1[i][j] = "_";
                cout << a1[i][j] << " ";
            }
            cout << endl;
        }
        
        cout << endl << "Enter your second matrix:" << endl;
        for(int i = 0; i < dimension; i++)
        {
            if(i == 0)
            {
                cout << "Enter your " << i + 1 << "st row" << endl;
            }
            else if(i == 1)
            {
                cout << "Enter your " << i + 1 << "nd row" << endl;
            }
            else if(i == 2)
            {
                cout << "Enter your " << i + 1 << "rd row" << endl;
            }
            else
            {
                cout << endl << "Enter your " << i + 1 << "th row:" << endl; 
            }
            for(int j = 0; j < dimension; j++)
            {
                cin >> b[i][j];
            }
        } 
        
        cout << endl << "Your first matrix: " << endl;
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        
        cout << endl << "Your second matrix: " << endl;
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                resultMatrix[i][j] = a[i][j] + b[i][j];
            }
        }
        
        cout << "Result matrix:" << endl;
        
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                cout << resultMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if(userChoice == 2)
    {
        beginning2: cout << "Enter the dimension of the matrices:" << endl;
        int dimension;
        if(!isValidInput(dimension))
            goto beginning2;
        string a1[dimension][dimension];
        int a[dimension][dimension];
        int b[dimension][dimension];
        int resultMatrix[dimension][dimension];
            
        for(int k = 0; k < 2; k++)
        {
            for(int i = 0; i < dimension; i++)
            {
                for(int j = 0; j < dimension; j++)
                {
                    a1[i][j] = "_";
                    cout << a1[i][j] << " ";
                }
                cout << endl;
            } 
            cout << endl;
        }
        
        cout << endl << "Enter your first matrix:" << endl;
        for(int i = 0; i < dimension; i++)
        {
            if(i == 0)
            {
                cout << "Enter your " << i + 1 << "st row" << endl;
            }
            else if(i == 1)
            {
                cout << "Enter your " << i + 1 << "nd row" << endl;
            }
            else if(i == 2)
            {
                cout << "Enter your " << i + 1 << "rd row" << endl;
            }
            else
            {
                cout << endl << "Enter your " << i + 1 << "th row:" << endl; 
            }
            for(int j = 0; j < dimension; j++)
            {
                cin >> a[i][j];
            }
        } 
        cout << endl;
        
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        
        cout << endl;
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                a1[i][j] = "_";
                cout << a1[i][j] << " ";
            }
            cout << endl;
        } 
        
        
        cout << endl << "Enter your second matrix:" << endl;
        for(int i = 0; i < dimension; i++)
        {
            if(i == 0)
            {
                cout << "Enter your " << i + 1 << "st row" << endl;
            }
            else if(i == 1)
            {
                cout << "Enter your " << i + 1 << "nd row" << endl;
            }
            else if(i == 2)
            {
                cout << "Enter your " << i + 1 << "rd row" << endl;
            }
            else
            {
                cout << endl << "Enter your " << i + 1 << "th row:" << endl; 
            }
            for(int j = 0; j < dimension; j++)
            {
                cin >> b[i][j];   
            }
        } 
        
        cout << endl << "Your first matrix: " << endl;
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        
        cout << endl << "Your second matrix: " << endl;
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                resultMatrix[i][j] = a[i][j] - b[i][j];
            }
        }
        
        cout << "Result matrix:" << endl;
        
        for(int i = 0; i < dimension; i++)
        {
            for(int j = 0; j < dimension; j++)
            {
                cout << resultMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (userChoice == 3)
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
            for(int i = 0; i < rowNumber1; i++)
            {
                for(int j = 0; j < columnNumber1; j++)
                {
                    cout << "_" << " ";
                }
                cout << endl;
            } 
            cout << endl;
            
            for(int i = 0; i < rowNumber2; i++)
            {
                for(int j = 0; j < columnNumber2; j++)
                {
                    cout << "_" << " ";
                }
                cout << endl;
            } 
            cout << endl;
        
            int a[rowNumber1][columnNumber1];
            int b[rowNumber2][columnNumber2];
            int resultMatrix[rowNumber1][columnNumber2];
            
            cout << "Enter your first matrix:" << endl;
            for(int i = 0; i < rowNumber1; i++)
            {
                if(i == 0)
                {
                    cout << "Enter your " << i + 1 << "st row" << endl;
                }
                else if(i == 1)
                {
                    cout << "Enter your " << i + 1 << "nd row" << endl;
                }
                else if(i == 2)
                {
                    cout << "Enter your " << i + 1 << "rd row" << endl;
                }
                else
                {
                    cout << endl << "Enter your " << i + 1 << "th row:" << endl; 
                }
                for(int j = 0; j < columnNumber1; j++)
                {
                    cin >> a[i][j];   
                }
            } 
            
            cout << endl;
            for (int i = 0; i < rowNumber1; i++) 
            {
                for (int j = 0; j < columnNumber1; j++) 
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            
            cout << endl;
            for (int i = 0; i < rowNumber2; i++) 
            {
                for (int j = 0; j < columnNumber2; j++) 
                {
                    cout << "_" << " ";
                }
                cout << endl;
            }
            
            cout << endl << "Enter your second matrix:" << endl;
            for(int i = 0; i < rowNumber2; i++)
            {
                if(i == 0)
                {
                    cout << "Enter your " << i + 1 << "st row" << endl;
                }
                else if(i == 1)
                {
                    cout << "Enter your " << i + 1 << "nd row" << endl;
                }
                else if(i == 2)
                {
                    cout << "Enter your " << i + 1 << "rd row" << endl;
                }
                else
                {
                    cout << endl << "Enter your " << i + 1 << "th row:" << endl; 
                }
                for(int j = 0; j < columnNumber2; j++)
                {
                    cin >> b[i][j];   
                }
            }
            
            cout << endl << "Your first matrix:" << endl;
            for (int i = 0; i < rowNumber1; i++) 
            {
                for (int j = 0; j < columnNumber1; j++) 
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            
            cout << endl << "Your second matrix: " << endl;
            for (int i = 0; i < rowNumber2; i++) 
            {
                for (int j = 0; j < columnNumber2; j++) 
                {
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
            
            for(int i = 0; i < rowNumber1; i++)
            {
                for(int j = 0; j < columnNumber2; j++)
                {
                    resultMatrix[i][j] = 0;
                }
            }
            
            int sum = 0, product = 0;
            for(int i = 0; i < rowNumber1; i++)
            {
                for(int k = 0; k < columnNumber2; k++)
                {
                    for(int j = 0; j < columnNumber1; j++)
                    {
                        resultMatrix[i][k] += a[i][j] * b[j][k];
                    }
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
            cout << "Error..." << endl << "The number of columns of the 1st and the number of rows of the 2nd matrices should be equal.";
            cout << "Try again" << endl;
            goto start;
        }
    }
    
    return 0;
}








