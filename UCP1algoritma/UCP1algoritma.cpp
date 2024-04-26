// 1. dengan cara Static dan dynamic
// 2. dengan dua cara yaitu bubblesort dan insesort
// 3. Bubblesort, karena lebih mudah dan efesien

#include <iostream>
using namespace std;

int Habib[51];
int n;
 
void input() {       //Method untuk input
    while (true) {   //Looping
        cout << "Masukan array banyaknya elemen pada array : "; //Output ke layar
        cin >> n;    //Input dari pengguna
        if (n <= 51) //Jika n kurang dari atau sama dengan 20
            break;   //Keluar dari loop
        else {       //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //Output ke layar
        }
    }
    cout << endl;                            //Output baris kosong
    cout << "====================" << endl;  //Output ke layar
    cout << "Masukan Elemen Array" << endl;  //Output ke layar
    cout << "====================" << endl;  //Output ke layar

    for (int i = 0; i < n; i++) {     //Looping ddengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> Habib[i];                  //Input dari pengguna
    }
}

void insertionSort() {

    int i, temp, j;

    for (i = 1; i <= n - 1; i++) { //step 1
        temp = Habib[i]; //step 2
        j = i - 1; //step 3
        while (j >= 0 && Habib[j] > temp) //step 4
        {
            Habib[j + 1] = Habib[j]; //step 4a
            j = j - 1; //step 4b
        }
        Habib[j + 1] = temp; //step 5	

        for (int k = 1; k < n; k++) {
            cout << Habib[k] << " ";

        }
        cout << "pass " << i - 1 << endl;
        cout << endl;
    }while (i <= i);

}

void display() { //Method untuk menampilkan hasil
    cout << endl;                            //Output baris kosong
    cout << "=================================" << endl;  //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;  //Output ke layar
    cout << "=================================" << endl;  //Output ke layar
    for (int i = 0; i < n; i++) {
        cout << Habib[i] << endl;
    }
    cout << endl;                                         //Output ke layar
}

int main()
{
    input();
    system("pause");
    insertionSort();
    return 0;
}