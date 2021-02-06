
#include<iostream> 
using namespace std; 



int polynomial(int Xvalue,int termArray[],int nTerm) 
{
	int power=1;
	int sum=0;
	for(int i=0;i<nTerm;i++)
	{
		power=power*Xvalue;
		sum=sum+(termArray[i]*power);
		
	}
	return sum;
}


  
int main() 
{ 


	int arr[3]={3,2,1};
	int value=polynomial(2,arr,3);
	cout << value << endl;

	int arr1[3]={3,2,1};
	int value1=polynomial(3,arr1,3);
	cout << value1 << endl;

	int arr2[4]={7,5,3,2};
	int value2=polynomial(11,arr2,4);
	cout << value2 << endl;

	int arr3[4]={7,5,3,2};
	int value3=polynomial(13,arr3,4);
	cout << value3 << endl;



    system("pause");
    return 0; 
}