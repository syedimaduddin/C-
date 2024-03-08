#include<iostream>
using namespace std;
/****declaring variables*****/
int row,column,x,y, arr1[10][10], arr2[10][10];int add[10][10],trans[10][10],trans2[10][10];  
int main() //main function
{
    /******* calling functions *******/
    void addition ();
    void multiplication ();
    void transpose ();
    cout<<"enter the number of rows : ";
    cin>>row;
    cout<<"enter the number of columns : ";
    cin>>column;
    cout<<"\nenter the elements of first matrix:\n";
    /*****entering the elements in array 1 & 2******/
    for(x=0 ; x<row ; x++)
    {
        for(y=0 ; y<column ; y++)
        {
            cin>> arr1[x][y];
            
        }
        cout<<endl;
        
    }
    cout<<"\nenter the elements of second matrix:\n";
    for(x=0; x<row ; x++)
    {
        for(y=0 ; y<column ; y++)
        {
            cin>>arr2[x][y];
            
        }
        cout<<endl;
        
    }
    cout<<"\nChoose Option from the Menu:";
    cout<<"\n Enter 1 for Matrix Addition ";
    cout<<"\n Enter 2 for Matrix Multiplication ";
    cout<<"\n Enter 3 for matrix transpose ";
    cout<<"\nEnter Your Choice: ";
    cin>>x;   //switching the choice
    switch(x)
    {
        case 1:
            addition ();   //function call
            break;
        case 2:
            multiplication ();   //function call
            break;
        case 3:
            transpose ();   //function call
            break;
        default:
            cout<<"choose correct option";
            
    }
    return 0;
    
}
/*************** function for addition *****************/
void addition ()
{
    cout<<" enter first matrix \n";
    for(x=0 ; x<row ;x++)
    {
        for(y=0 ;y<column ; y++)
        {
            cout <<" "<<arr1[x][y];
            if(y== column-1)
                cout<<endl;
        }
    }
    cout<<" enter second matrix \n";
    for(x=0 ; x<row ;x++)
    {
        for(y=0 ;y<column ; y++)
        {
            cout <<" "<<arr2[x][y];
            if(y== column-1)
                cout<<endl;
        }
    }
    for(x=0 ; x<row ; x++)   //loop for adding two arrays
    {
        for(y=0 ; y<column ; y++)
        add[x][y] = arr1[x][y] + arr2[x][y];   
    }
    cout<<"\nSum of matrices: \n";
    for(x=0 ; x<row ; x++)   //loop for pring the final added matrix
    {
        for(y=0 ; y<column ; y++)
        cout<<" "<<add[x][y];
        cout<<endl<<endl;
        
    }    
}
/**************** function for multiplication ****************/
void multiplication ()
{
    int a[10][10], b[10][10], multiplic[10][10], row1, column1, row2, column2, i, j, k;   //declaring               variables
        cout << "Enter rows and columns for first matrix: ";
      	  cin >> row1 >> column1;
        cout << "Enter rows and columns for second matrix: ";
    	  cin >> row2 >> column2;

        /* if column of first matrix in not equal to row of second matrix
        ask the user to enter the size of matrix again*/
        while (column1!=row2)
        {
            cout <<"column of first matrix not equal to row of second";
            cout << "enter rows and columns for first matrix: ";
     		cin >> row1 >> column1;
            cout << "enter rows and columns for second matrix: ";
   		    cin >> row2 >> column2;
        }
        cout << endl << "enter elements of matrix 1:" << endl;   // First matrix.
        for(i = 0; i < row1; ++i)
        {
            for(j = 0; j < column1; ++j)
            {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> a[i][j];
            }
        }
        cout << endl << "enter elements of matrix 2:" << endl;  // Second matrix.
        for(i = 0; i < row2; ++i)
        {
            for(j = 0; j < column2; ++j)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> b[i][j];
            }
        }

        // Initializing elements of multiplic matrix to 0.
        for(i = 0; i < row1; ++i)
        {
            for(j = 0; j < column2; ++j)
            {
                multiplic[i][j]=0;
            }
        }
        // Multiplying matrix a and b and storing in array multiplic.
        for(i = 0; i < row1; ++i)
        {
            for(j = 0; j < column2; ++j)
            {
                for(k = 0; k < column1; ++k)
                {
                    multiplic[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout << endl << "output of Matrix: \n" << endl;   //printing the final multiplication matrix
        for(i = 0; i < row1; ++i)
        {
            for(j = 0; j < column2; ++j)
                {
                    cout << " " << multiplic[i][j];
                    if(j == column2-1)
                        cout << endl<<endl;
                }
        }    
}
/************* funtion for transpose ************/
void transpose ()
{
    int k;  //declaring variable
    cout<<"Enter 1 for the first matrix \n";

    cout<<"Enter 2 for the second matrix \n";

    cout<<"Enter 3 for both matrix \n";
    	cin>> k;
    cout<<"enter first matrix \n";
    for(x=0 ; x<row ;x++) //entering elements in array 1 & 2
    {
        for(y=0 ;y<column ; y++)
        {
            cout <<" "<<arr1[x][y];
            if(y == column-1)
                cout<<endl;
        }
    }
    cout<<" enter second matrix\n";
    for(x=0 ; x<row ;x++)
    {
        for(y=0 ;y<column ; y++)
        {
            cout <<" "<<arr2[x][y];
            if(y== column-1)
                cout<<endl<<endl;
        }
    }
    /********** calculating transpose ************/
    if(k==1) 
    {
        for(x=0; x<row; x++)
        {
            for(y=0 ; y<column ; y++)
            trans[y][x]=arr1[x][y];
        }
        cout<< "The transpose of matrix 1 \n";    //printing the transpose
        for(x=0 ; x<column ;x++)
        {
            for(y=0 ;y<row ; y++)
            {
                cout <<" "<<trans[x][y];
                if(y== row-1)
                    cout<<endl<<endl;
            }
        }
    }
    if(k==2)
    {
        for(x=0; x<row; x++)
        {
            for(y=0 ; y<column ; y++)
            trans[y][x]=arr2[x][y];
        }
        cout<< "The transpose of matrix 2\n";    //printing the transpose
        for(x=0 ; x<column ;x++)
        {
            for(y=0 ;y<row ; y++)
            {
                cout <<" "<<trans[x][y];
                if(y== row-1)
                    cout<<endl<<endl;
            }
        }
    }
    if(k==3)
    {
        for(x=0; x<row; x++)
        {
            for(y=0 ; y<column ; y++)
            {
                trans[y][x]=arr1[x][y];
                trans2[y][x]=arr2[x][y];
            }
        }
        //printing the transpose
        cout<< "The transpose of first matrix\n";
        for(x=0 ; x<column ;x++)
        {
            for(y=0 ;y<row ; y++)
            {
                cout <<" "<<trans[x][y];
                if(y== row-1)
                    cout<<endl<<endl;
            }
        }
        //PRINTING TRANSPOSE FOR 2ND MATRIX
        cout<< "The transpose of second matrix\n";
        for(x=0 ; x<column ;x++)
        {
            for(y=0 ;y<row ; y++)
            {
                cout <<" "<<trans2[x][y];
                if(y== row-1)
                    cout<<endl<<endl;
            }
        }
    }
}

