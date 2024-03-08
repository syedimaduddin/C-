// Program to merged two arrays to a single sorted array.

#include<iostream>

using namespace std;

int main()                                                      // Function main begins program execution.

{
     int i,n;                                                  // Declare variables.

    cout<<"\n Enter size of the first array: ";                   // Taking input from the user.
    cin>>n;
    cout<<endl;

    int ar1[n];                                               // Declaring array as integer data type.

    cout<<"Enter elements of first array : " << endl;
    for (i=0; i<n; i++)
    {
        cout<<"\n Enter "<<i+1 <<" element: ";                // Taking elements from the user.
        cin>>ar1[i];
    }

    cout<<endl;
    cout<<endl;

    cout<<"First array: ";                                   // Holds output of first array.
    for (i=0; i<n; i++)
    {
         cout<<ar1[i]<<", ";
    }

    cout<<endl;
    cout<<endl;

    int j,m;                                                 // Define variables.

    cout<<"Enter size of the second array: ";               // Taking input from the user.
    cin>>m;
    cout<<endl;

    int ar2[m];                                                    // Declaring array as integer data type.

    cout<<"Enter "<<m <<" elements in the second array \n";
    cout<<endl;
    for (j=0; j<m; j++)
    {
        cout<<"\n Enter "<<j+1 <<" element : ";                   // Taking elements from the user.
        cin>>ar2[j];
    }

    cout<<endl;
    cout<<endl;

    cout<<"Second array: ";                                      // Holds output of second array.
    for (j=0; j<m; j++)
    {
         cout<<ar2[j]<<", ";
    }

    cout<<endl;
    cout<<endl;

    int size, k=0;                                               // Declaring variables.
    size= (n + m);

    int ar[size];                                               // Define merged array.
    i=0; 
    j=0; 

    while ((i<n) && (j<m))                                      // Loop to merge two arrays to a single array.
    {
        if (ar1[i] < ar2[j])                                    // Condition if ar1 is less than ar2.
        {
            ar[k] = ar1[i];
            i++;
            k++;
        }

        else                                                    // Condition if ar1 is greater than equal to ar2.
        {
            ar[k] = ar2[j];
            j++;
            k++;
        }

    }

    while (i < n)                                               // Condition if 'i' is less than no. of elements of ar1.
    {
        ar[k] = ar1[i];
        i++;
        k++;
    }

    while (j < m)                                               // Condition if 'j' is less than no. of elements of ar2.
    {
        ar[k] = ar2[j];
        j++;
        k++;
    }


    cout<<"\n Merged array is: ";                                  // The output of merged array.

    for (k=0; k<size; k++)
    {
        cout<<ar[k]<<", ";
    }
    
    cout << "\n";

    return 0;
    
}
