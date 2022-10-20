#include<iostream>
using namespace std;

int main()
{
	int i, j, rows;
     
    cout << "Enter Right Triangle Star Pattern Row = ";
    cin >> rows; 

    cout << "Right Angled Triangle Star Pattern\n"; 

    for(i = 1; i <= rows; i++)
    {
    	for(j = 1; j <= i; j++)
		{
            cout << "* ";
        }
        cout << "\n";
    }		
 	return 0;
}
