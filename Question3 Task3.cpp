#include<iostream>
using namespace std;

struct Point
{
  int x,y;
  
  Point()
  { };

  Point(int x1,int y1)
  {
      this->x=x1;   
      this->y=y1;
  }

};


void Print_for_testing(Point *arr,int size)
{
	 cout << " index       :     " ;
	 for(int i=0;i<size;i++)
     {
             cout << i+1 << "    ";
     }
       cout << endl;
       cout  << " X- Coordidate  :  " ; 
       for(int i=0;i<size;i++)
       {
             cout << arr[i].x << "    ";
       }
       cout << endl;
       cout  << " Y- Coordidate  :  " ; 
       for(int i=0;i<size;i++)
       {
             cout << arr[i].y << "    ";
       }
       cout << endl;
}


void Sorting(Point *arr,int size)  // Doing Sort Using Selection Sort
{

	cout << " Before Sorting : " << endl;
	Print_for_testing(arr,size);


	for(int i=0;i<size;i++)
     {
          for(int j=i+1;j<size;j++)
          {
            if(arr[i].x>arr[j].x)
            {
                swap(arr[i].x,arr[j].x);   
                swap(arr[i].y,arr[j].y);  
            }
            
            
            if(arr[i].x==arr[j].x)
            {
                if(arr[i].y>arr[j].y)
                {
                   swap(arr[i].x,arr[j].x);   
                   swap(arr[i].y,arr[j].y);  
                }   
            } 
          }
      }
  
    cout << "  After Sorting : "<< endl; 
	Print_for_testing(arr,size);
}





int main()
{
	Point *arr=new Point[5];

	arr[0]=Point(2,3);
	arr[1]=Point(4,6);
	arr[2]=Point(5,15);
	arr[3]=Point(4,5);
	arr[4]=Point(5,10);

   
	 Sorting(arr,5);
	
	   
   system("pause");
   return 0;
} 
