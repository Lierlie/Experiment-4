#include <iostream>
 
using namespace std;
 
int  main()
{
    int arr[0], n[10], i, max, min;
	float sum = 0, ave = 0;
    cout<< "Enter  any  ten number: "<<endl;
    for( i = 0; i<10; i++){
        cin >> n[i]; 
        sum += n[i];
    }
     max = n[0];
    	for (i = 0; i < 10; i++)
		    {
		        if (max < n[i])
		            max = n[i];
		    }
	min = n[0];
    	for (i = 0; i < 10; i++)
		    {
		        if (min > n[i])
		            min = n[i];
		    }
    for(i = 0; i<10; i++){
        cout<< "The output is "<<   n[i]<<endl;
        if (n[i]== 42)
            return 0;
    }
    cout << "\nLargest element : " << max;
    cout << "\nSmallest element : " << min;
	ave = sum/i; 
	cout << "\nTotal : " << sum;
    cout << "\nAverage : " << ave; 
    return 0;
}
