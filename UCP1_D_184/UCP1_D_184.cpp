//Soal tipe 1, Muhammad Zaky 20230140184

//1. Dengan mambagi menjadi dua bagian yaitu, sorted dan unsorted,
//   pada bagian sorted terdapat elemen pertama saja dan pada bagian yang unsorted terdapat 4 elemen yang tersisa 
//
//2. Dengan memilih elemen minimum kemudian menukarkan elemen minimum dengan elemen paling akhir untuk urutan ascending dan elemen pertama untuk descending
//
//3. Dengan mengurutkan elemen dimulai dari elemen terkecil hingga elemen yang terbesar n-1
//
//4. 
#include <iostream>
using namespace std;

int arr[84];
int jeki;														

void input() {												
	while (true)
	{
		cout << "Masukkan Jumlah Data Pada Array : ";		
		cin >> jeki;											

		if (jeki <= 20) {										
			break;

		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";	
		}
	}
	cout << endl;											
	cout << "======================" << endl;		
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < jeki; i++)								
	{
		cout << "Data ke-" << (i + 1) << ": ";					
		cin >> arr[i];										
	}
}
void selectionsort() {										

	int temp;												
	int i, j;											 

	for (i = 1; i <= jeki - 1; i++) {					

		temp = arr[i];								

		j = i - 1;									

		while (j >= 0 && arr[j] > temp)				

		{
			arr[j + 1] = arr[j];					
			j--;
		}											

		arr[j + 1] = temp;							

		cout << "\nPass" << i << ":";			
		for (int k = 0; k < jeki; k++) {				
			cout << arr[k] << ":";				
		}

	}
}

void display() {									
	cout << endl;											
	cout << "\n====================" << endl;				
	cout << "Element Array Yang Telah Tersusun" << endl;	
	cout << "=======================" << endl;				

	for (int j = 0; j < jeki; j++) {							
		cout << arr[j] << endl;								
	}
	cout << endl;										
}

int main() {
	input();										
	selectionsort();								
	display();							
}