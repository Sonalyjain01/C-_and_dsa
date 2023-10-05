#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
		return;
	}
	towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
	printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
	int n = 4; // Number of disks
	towerOfHanoi( n , 'A', 'C', 'B' ); 
	// A, B and C are names of rods
	return 0;
}


// Example: define member function without argument within the class

//#include<iostream>
//using namespace std;
//
//class Person
//{
//	int id;
//	char name[100];
//
//	public:
//		void set_p()
//		{
//			cout<<"Enter the Id:";
//			cin>>id;
//			cout<<"Enter the Name:";
//			cin>>name;
//		}
//		
//		void display_p()
//		{
//			cout<<endl<<id<<"\t"<<name<<"\t";
//		}
//};
//
//class Student: private Person
//{
//	char course[50];
//	int fee;
//	
//	public:
//	void set_s()
//		{
//			set_p();
//			cout<<"Enter the Course Name:";
//			cin>>course;
//			cout<<"Enter the Course Fee:";
//			cin>>fee;
//		}
//		
//		void display_s()
//		{
//			display_p();
//			cout<<course<<"\t"<<fee<<endl;
//		}
//};
//
//main()
//{
//	Student s;
//	s.set_s();
//	s.display_s();
//	return 0;
//}

